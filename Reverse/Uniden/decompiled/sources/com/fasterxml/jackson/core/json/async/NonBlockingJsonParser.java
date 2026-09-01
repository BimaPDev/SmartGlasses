package com.fasterxml.jackson.core.json.async;

import androidx.constraintlayout.widget.ConstraintLayout;
import com.fasterxml.jackson.core.JsonParser;
import com.fasterxml.jackson.core.JsonToken;
import com.fasterxml.jackson.core.async.ByteArrayFeeder;
import com.fasterxml.jackson.core.base.GeneratorBase;
import com.fasterxml.jackson.core.json.JsonReadFeature;
import com.fasterxml.jackson.core.p003io.CharTypes;
import com.fasterxml.jackson.core.p003io.IOContext;
import com.fasterxml.jackson.core.sym.ByteQuadsCanonicalizer;
import com.fasterxml.jackson.core.util.TextBuffer;
import com.fasterxml.jackson.core.util.VersionUtil;
import com.google.android.gms.measurement.api.AppMeasurementSdk;
import java.io.IOException;
import java.io.OutputStream;

/* JADX INFO: loaded from: classes.dex */
public class NonBlockingJsonParser extends NonBlockingJsonParserBase implements ByteArrayFeeder {
    protected byte[] _inputBuffer;
    protected int _origBufferLen;
    private static final int FEAT_MASK_TRAILING_COMMA = JsonParser.Feature.ALLOW_TRAILING_COMMA.getMask();
    private static final int FEAT_MASK_LEADING_ZEROS = JsonParser.Feature.ALLOW_NUMERIC_LEADING_ZEROS.getMask();
    private static final int FEAT_MASK_ALLOW_MISSING = JsonParser.Feature.ALLOW_MISSING_VALUES.getMask();
    private static final int FEAT_MASK_ALLOW_SINGLE_QUOTES = JsonParser.Feature.ALLOW_SINGLE_QUOTES.getMask();
    private static final int FEAT_MASK_ALLOW_UNQUOTED_NAMES = JsonParser.Feature.ALLOW_UNQUOTED_FIELD_NAMES.getMask();
    private static final int FEAT_MASK_ALLOW_JAVA_COMMENTS = JsonParser.Feature.ALLOW_COMMENTS.getMask();
    private static final int FEAT_MASK_ALLOW_YAML_COMMENTS = JsonParser.Feature.ALLOW_YAML_COMMENTS.getMask();
    private static final int[] _icUTF8 = CharTypes.getInputCodeUtf8();
    protected static final int[] _icLatin1 = CharTypes.getInputCodeLatin1();

    @Override // com.fasterxml.jackson.core.JsonParser
    public ByteArrayFeeder getNonBlockingInputFeeder() {
        return this;
    }

    public NonBlockingJsonParser(IOContext iOContext, int i, ByteQuadsCanonicalizer byteQuadsCanonicalizer) {
        super(iOContext, i, byteQuadsCanonicalizer);
        this._inputBuffer = NO_BYTES;
    }

    @Override // com.fasterxml.jackson.core.async.NonBlockingInputFeeder
    public final boolean needMoreInput() {
        return this._inputPtr >= this._inputEnd && !this._endOfInput;
    }

    @Override // com.fasterxml.jackson.core.async.ByteArrayFeeder
    public void feedInput(byte[] bArr, int i, int i2) throws IOException {
        if (this._inputPtr < this._inputEnd) {
            _reportError("Still have %d undecoded bytes, should not call 'feedInput'", Integer.valueOf(this._inputEnd - this._inputPtr));
        }
        if (i2 < i) {
            _reportError("Input end (%d) may not be before start (%d)", Integer.valueOf(i2), Integer.valueOf(i));
        }
        if (this._endOfInput) {
            _reportError("Already closed, can not feed more input");
        }
        this._currInputProcessed += (long) this._origBufferLen;
        this._currInputRowStart = i - (this._inputEnd - this._currInputRowStart);
        this._currBufferStart = i;
        this._inputBuffer = bArr;
        this._inputPtr = i;
        this._inputEnd = i2;
        this._origBufferLen = i2 - i;
    }

    @Override // com.fasterxml.jackson.core.async.NonBlockingInputFeeder
    public void endOfInput() {
        this._endOfInput = true;
    }

    @Override // com.fasterxml.jackson.core.json.async.NonBlockingJsonParserBase, com.fasterxml.jackson.core.JsonParser
    public int releaseBuffered(OutputStream outputStream) throws IOException {
        int i = this._inputEnd - this._inputPtr;
        if (i > 0) {
            outputStream.write(this._inputBuffer, this._inputPtr, i);
        }
        return i;
    }

    @Override // com.fasterxml.jackson.core.base.ParserBase
    protected char _decodeEscaped() throws IOException {
        VersionUtil.throwInternal();
        return ' ';
    }

    @Override // com.fasterxml.jackson.core.base.ParserMinimalBase, com.fasterxml.jackson.core.JsonParser
    public JsonToken nextToken() throws IOException {
        if (this._inputPtr >= this._inputEnd) {
            if (this._closed) {
                return null;
            }
            if (this._endOfInput) {
                if (this._currToken == JsonToken.NOT_AVAILABLE) {
                    return _finishTokenWithEOF();
                }
                return _eofAsNextToken();
            }
            return JsonToken.NOT_AVAILABLE;
        }
        if (this._currToken == JsonToken.NOT_AVAILABLE) {
            return _finishToken();
        }
        this._numTypesValid = 0;
        this._tokenInputTotal = this._currInputProcessed + ((long) this._inputPtr);
        this._binaryValue = null;
        byte[] bArr = this._inputBuffer;
        int i = this._inputPtr;
        this._inputPtr = i + 1;
        int i2 = bArr[i] & 255;
        switch (this._majorState) {
            case 0:
                return _startDocument(i2);
            case 1:
                return _startValue(i2);
            case 2:
                return _startFieldName(i2);
            case 3:
                return _startFieldNameAfterComma(i2);
            case 4:
                return _startValueExpectColon(i2);
            case 5:
                return _startValue(i2);
            case 6:
                return _startValueExpectComma(i2);
            default:
                VersionUtil.throwInternal();
                return null;
        }
    }

    protected final JsonToken _finishToken() throws IOException {
        int i = this._minorState;
        if (i == 1) {
            return _finishBOM(this._pending32);
        }
        if (i == 4) {
            byte[] bArr = this._inputBuffer;
            int i2 = this._inputPtr;
            this._inputPtr = i2 + 1;
            return _startFieldName(bArr[i2] & 255);
        }
        if (i == 5) {
            byte[] bArr2 = this._inputBuffer;
            int i3 = this._inputPtr;
            this._inputPtr = i3 + 1;
            return _startFieldNameAfterComma(bArr2[i3] & 255);
        }
        switch (i) {
            case 7:
                return _parseEscapedName(this._quadLength, this._pending32, this._pendingBytes);
            case 8:
                return _finishFieldWithEscape();
            case 9:
                return _finishAposName(this._quadLength, this._pending32, this._pendingBytes);
            case 10:
                return _finishUnquotedName(this._quadLength, this._pending32, this._pendingBytes);
            default:
                switch (i) {
                    case 12:
                        byte[] bArr3 = this._inputBuffer;
                        int i4 = this._inputPtr;
                        this._inputPtr = i4 + 1;
                        return _startValue(bArr3[i4] & 255);
                    case 13:
                        byte[] bArr4 = this._inputBuffer;
                        int i5 = this._inputPtr;
                        this._inputPtr = i5 + 1;
                        return _startValueExpectComma(bArr4[i5] & 255);
                    case 14:
                        byte[] bArr5 = this._inputBuffer;
                        int i6 = this._inputPtr;
                        this._inputPtr = i6 + 1;
                        return _startValueExpectColon(bArr5[i6] & 255);
                    case 15:
                        byte[] bArr6 = this._inputBuffer;
                        int i7 = this._inputPtr;
                        this._inputPtr = i7 + 1;
                        return _startValueAfterComma(bArr6[i7] & 255);
                    case 16:
                        return _finishKeywordToken("null", this._pending32, JsonToken.VALUE_NULL);
                    case 17:
                        return _finishKeywordToken("true", this._pending32, JsonToken.VALUE_TRUE);
                    case 18:
                        return _finishKeywordToken("false", this._pending32, JsonToken.VALUE_FALSE);
                    case 19:
                        return _finishNonStdToken(this._nonStdTokenType, this._pending32);
                    default:
                        switch (i) {
                            case 23:
                                byte[] bArr7 = this._inputBuffer;
                                int i8 = this._inputPtr;
                                this._inputPtr = i8 + 1;
                                return _finishNumberMinus(bArr7[i8] & 255);
                            case 24:
                                return _finishNumberLeadingZeroes();
                            case 25:
                                return _finishNumberLeadingNegZeroes();
                            case 26:
                                return _finishNumberIntegralPart(this._textBuffer.getBufferWithoutReset(), this._textBuffer.getCurrentSegmentSize());
                            default:
                                switch (i) {
                                    case 30:
                                        return _finishFloatFraction();
                                    case 31:
                                        byte[] bArr8 = this._inputBuffer;
                                        int i9 = this._inputPtr;
                                        this._inputPtr = i9 + 1;
                                        return _finishFloatExponent(true, bArr8[i9] & 255);
                                    case 32:
                                        byte[] bArr9 = this._inputBuffer;
                                        int i10 = this._inputPtr;
                                        this._inputPtr = i10 + 1;
                                        return _finishFloatExponent(false, bArr9[i10] & 255);
                                    default:
                                        switch (i) {
                                            case 40:
                                                return _finishRegularString();
                                            case 41:
                                                int i_decodeSplitEscaped = _decodeSplitEscaped(this._quoted32, this._quotedDigits);
                                                if (i_decodeSplitEscaped < 0) {
                                                    return JsonToken.NOT_AVAILABLE;
                                                }
                                                this._textBuffer.append((char) i_decodeSplitEscaped);
                                                if (this._minorStateAfterSplit == 45) {
                                                    return _finishAposString();
                                                }
                                                return _finishRegularString();
                                            case 42:
                                                TextBuffer textBuffer = this._textBuffer;
                                                int i11 = this._pending32;
                                                byte[] bArr10 = this._inputBuffer;
                                                int i12 = this._inputPtr;
                                                this._inputPtr = i12 + 1;
                                                textBuffer.append((char) _decodeUTF8_2(i11, bArr10[i12]));
                                                if (this._minorStateAfterSplit == 45) {
                                                    return _finishAposString();
                                                }
                                                return _finishRegularString();
                                            case 43:
                                                int i13 = this._pending32;
                                                int i14 = this._pendingBytes;
                                                byte[] bArr11 = this._inputBuffer;
                                                int i15 = this._inputPtr;
                                                this._inputPtr = i15 + 1;
                                                if (!_decodeSplitUTF8_3(i13, i14, bArr11[i15])) {
                                                    return JsonToken.NOT_AVAILABLE;
                                                }
                                                if (this._minorStateAfterSplit == 45) {
                                                    return _finishAposString();
                                                }
                                                return _finishRegularString();
                                            case 44:
                                                int i16 = this._pending32;
                                                int i17 = this._pendingBytes;
                                                byte[] bArr12 = this._inputBuffer;
                                                int i18 = this._inputPtr;
                                                this._inputPtr = i18 + 1;
                                                if (!_decodeSplitUTF8_4(i16, i17, bArr12[i18])) {
                                                    return JsonToken.NOT_AVAILABLE;
                                                }
                                                if (this._minorStateAfterSplit == 45) {
                                                    return _finishAposString();
                                                }
                                                return _finishRegularString();
                                            case 45:
                                                return _finishAposString();
                                            default:
                                                switch (i) {
                                                    case 50:
                                                        return _finishErrorToken();
                                                    case ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_TAG /* 51 */:
                                                        return _startSlashComment(this._pending32);
                                                    case ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_BASELINE_TO_TOP_OF /* 52 */:
                                                        return _finishCComment(this._pending32, true);
                                                    case ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_BASELINE_TO_BOTTOM_OF /* 53 */:
                                                        return _finishCComment(this._pending32, false);
                                                    case ConstraintLayout.LayoutParams.Table.LAYOUT_MARGIN_BASELINE /* 54 */:
                                                        return _finishCppComment(this._pending32);
                                                    case ConstraintLayout.LayoutParams.Table.LAYOUT_GONE_MARGIN_BASELINE /* 55 */:
                                                        return _finishHashComment(this._pending32);
                                                    default:
                                                        VersionUtil.throwInternal();
                                                        return null;
                                                }
                                        }
                                }
                        }
                }
        }
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    protected final JsonToken _finishTokenWithEOF() throws IOException {
        JsonToken jsonToken = this._currToken;
        int i = this._minorState;
        if (i == 3) {
            return _eofAsNextToken();
        }
        if (i == 12) {
            return _eofAsNextToken();
        }
        if (i != 50) {
            switch (i) {
                case 16:
                    return _finishKeywordTokenWithEOF("null", this._pending32, JsonToken.VALUE_NULL);
                case 17:
                    return _finishKeywordTokenWithEOF("true", this._pending32, JsonToken.VALUE_TRUE);
                case 18:
                    return _finishKeywordTokenWithEOF("false", this._pending32, JsonToken.VALUE_FALSE);
                case 19:
                    return _finishNonStdTokenWithEOF(this._nonStdTokenType, this._pending32);
                default:
                    switch (i) {
                        case 24:
                        case 25:
                            return _valueCompleteInt(0, "0");
                        case 26:
                            int currentSegmentSize = this._textBuffer.getCurrentSegmentSize();
                            if (this._numberNegative) {
                                currentSegmentSize--;
                            }
                            this._intLength = currentSegmentSize;
                            return _valueComplete(JsonToken.VALUE_NUMBER_INT);
                        default:
                            switch (i) {
                                case 30:
                                    this._expLength = 0;
                                    return _valueComplete(JsonToken.VALUE_NUMBER_FLOAT);
                                case 31:
                                    _reportInvalidEOF(": was expecting fraction after exponent marker", JsonToken.VALUE_NUMBER_FLOAT);
                                    _reportInvalidEOF(": was expecting closing '*/' for comment", JsonToken.NOT_AVAILABLE);
                                    return _eofAsNextToken();
                                case 32:
                                    return _valueComplete(JsonToken.VALUE_NUMBER_FLOAT);
                                default:
                                    switch (i) {
                                        case ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_BASELINE_TO_TOP_OF /* 52 */:
                                        case ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_BASELINE_TO_BOTTOM_OF /* 53 */:
                                            _reportInvalidEOF(": was expecting closing '*/' for comment", JsonToken.NOT_AVAILABLE);
                                            break;
                                        case ConstraintLayout.LayoutParams.Table.LAYOUT_MARGIN_BASELINE /* 54 */:
                                        case ConstraintLayout.LayoutParams.Table.LAYOUT_GONE_MARGIN_BASELINE /* 55 */:
                                            break;
                                        default:
                                            _reportInvalidEOF(": was expecting rest of token (internal state: " + this._minorState + ")", this._currToken);
                                            return jsonToken;
                                    }
                                    return _eofAsNextToken();
                            }
                    }
            }
        }
        return _finishErrorTokenWithEOF();
    }

    private final JsonToken _startDocument(int i) throws IOException {
        int i2 = i & 255;
        if (i2 == 239 && this._minorState != 1) {
            return _finishBOM(1);
        }
        while (i2 <= 32) {
            if (i2 != 32) {
                if (i2 == 10) {
                    this._currInputRow++;
                    this._currInputRowStart = this._inputPtr;
                } else if (i2 == 13) {
                    this._currInputRowAlt++;
                    this._currInputRowStart = this._inputPtr;
                } else if (i2 != 9) {
                    _throwInvalidSpace(i2);
                }
            }
            if (this._inputPtr >= this._inputEnd) {
                this._minorState = 3;
                if (this._closed) {
                    return null;
                }
                if (this._endOfInput) {
                    return _eofAsNextToken();
                }
                return JsonToken.NOT_AVAILABLE;
            }
            byte[] bArr = this._inputBuffer;
            int i3 = this._inputPtr;
            this._inputPtr = i3 + 1;
            i2 = bArr[i3] & 255;
        }
        return _startValue(i2);
    }

    private final JsonToken _finishBOM(int i) throws IOException {
        while (this._inputPtr < this._inputEnd) {
            byte[] bArr = this._inputBuffer;
            int i2 = this._inputPtr;
            this._inputPtr = i2 + 1;
            int i3 = bArr[i2] & 255;
            if (i != 1) {
                if (i != 2) {
                    if (i == 3) {
                        this._currInputProcessed -= 3;
                        return _startDocument(i3);
                    }
                } else if (i3 != 191) {
                    _reportError("Unexpected byte 0x%02x following 0xEF 0xBB; should get 0xBF as third byte of UTF-8 BOM", Integer.valueOf(i3));
                }
            } else if (i3 != 187) {
                _reportError("Unexpected byte 0x%02x following 0xEF; should get 0xBB as second byte UTF-8 BOM", Integer.valueOf(i3));
            }
            i++;
        }
        this._pending32 = i;
        this._minorState = 1;
        JsonToken jsonToken = JsonToken.NOT_AVAILABLE;
        this._currToken = jsonToken;
        return jsonToken;
    }

    private final JsonToken _startFieldName(int i) throws IOException {
        String str_fastParseName;
        if (i <= 32 && (i = _skipWS(i)) <= 0) {
            this._minorState = 4;
            return this._currToken;
        }
        _updateTokenLocation();
        if (i != 34) {
            if (i == 125) {
                return _closeObjectScope();
            }
            return _handleOddName(i);
        }
        if (this._inputPtr + 13 <= this._inputEnd && (str_fastParseName = _fastParseName()) != null) {
            return _fieldComplete(str_fastParseName);
        }
        return _parseEscapedName(0, 0, 0);
    }

    private final JsonToken _startFieldNameAfterComma(int i) throws IOException {
        String str_fastParseName;
        if (i <= 32 && (i = _skipWS(i)) <= 0) {
            this._minorState = 5;
            return this._currToken;
        }
        if (i != 44) {
            if (i == 125) {
                return _closeObjectScope();
            }
            if (i == 35) {
                return _finishHashComment(5);
            }
            if (i == 47) {
                return _startSlashComment(5);
            }
            _reportUnexpectedChar(i, "was expecting comma to separate " + this._parsingContext.typeDesc() + " entries");
        }
        int i2 = this._inputPtr;
        if (i2 >= this._inputEnd) {
            this._minorState = 4;
            JsonToken jsonToken = JsonToken.NOT_AVAILABLE;
            this._currToken = jsonToken;
            return jsonToken;
        }
        int i_skipWS = this._inputBuffer[i2];
        this._inputPtr = i2 + 1;
        if (i_skipWS <= 32 && (i_skipWS = _skipWS(i_skipWS)) <= 0) {
            this._minorState = 4;
            return this._currToken;
        }
        _updateTokenLocation();
        if (i_skipWS != 34) {
            if (i_skipWS == 125 && (this._features & FEAT_MASK_TRAILING_COMMA) != 0) {
                return _closeObjectScope();
            }
            return _handleOddName(i_skipWS);
        }
        if (this._inputPtr + 13 <= this._inputEnd && (str_fastParseName = _fastParseName()) != null) {
            return _fieldComplete(str_fastParseName);
        }
        return _parseEscapedName(0, 0, 0);
    }

    private final JsonToken _startValue(int i) throws IOException {
        if (i <= 32 && (i = _skipWS(i)) <= 0) {
            this._minorState = 12;
            return this._currToken;
        }
        _updateTokenLocation();
        this._parsingContext.expectComma();
        if (i == 34) {
            return _startString();
        }
        if (i == 35) {
            return _finishHashComment(12);
        }
        if (i == 91) {
            return _startArrayScope();
        }
        if (i == 93) {
            return _closeArrayScope();
        }
        if (i == 102) {
            return _startFalseToken();
        }
        if (i == 110) {
            return _startNullToken();
        }
        if (i == 116) {
            return _startTrueToken();
        }
        if (i == 123) {
            return _startObjectScope();
        }
        if (i != 125) {
            switch (i) {
                case 45:
                    return _startNegativeNumber();
                case 46:
                    if (isEnabled(JsonReadFeature.ALLOW_LEADING_DECIMAL_POINT_FOR_NUMBERS.mappedFeature())) {
                        return _startFloatThatStartsWithPeriod();
                    }
                    break;
                case 47:
                    return _startSlashComment(12);
                case ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE /* 48 */:
                    return _startNumberLeadingZero();
                case ConstraintLayout.LayoutParams.Table.LAYOUT_EDITOR_ABSOLUTEX /* 49 */:
                case 50:
                case ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_TAG /* 51 */:
                case ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_BASELINE_TO_TOP_OF /* 52 */:
                case ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_BASELINE_TO_BOTTOM_OF /* 53 */:
                case ConstraintLayout.LayoutParams.Table.LAYOUT_MARGIN_BASELINE /* 54 */:
                case ConstraintLayout.LayoutParams.Table.LAYOUT_GONE_MARGIN_BASELINE /* 55 */:
                case 56:
                case 57:
                    return _startPositiveNumber(i);
            }
            return _startUnexpectedValue(false, i);
        }
        return _closeObjectScope();
    }

    private final JsonToken _startValueExpectComma(int i) throws IOException {
        if (i <= 32 && (i = _skipWS(i)) <= 0) {
            this._minorState = 13;
            return this._currToken;
        }
        if (i != 44) {
            if (i == 93) {
                return _closeArrayScope();
            }
            if (i == 125) {
                return _closeObjectScope();
            }
            if (i == 47) {
                return _startSlashComment(13);
            }
            if (i == 35) {
                return _finishHashComment(13);
            }
            _reportUnexpectedChar(i, "was expecting comma to separate " + this._parsingContext.typeDesc() + " entries");
        }
        this._parsingContext.expectComma();
        int i2 = this._inputPtr;
        if (i2 >= this._inputEnd) {
            this._minorState = 15;
            JsonToken jsonToken = JsonToken.NOT_AVAILABLE;
            this._currToken = jsonToken;
            return jsonToken;
        }
        int i_skipWS = this._inputBuffer[i2];
        this._inputPtr = i2 + 1;
        if (i_skipWS <= 32 && (i_skipWS = _skipWS(i_skipWS)) <= 0) {
            this._minorState = 15;
            return this._currToken;
        }
        _updateTokenLocation();
        if (i_skipWS == 34) {
            return _startString();
        }
        if (i_skipWS == 35) {
            return _finishHashComment(15);
        }
        if (i_skipWS == 45) {
            return _startNegativeNumber();
        }
        if (i_skipWS == 91) {
            return _startArrayScope();
        }
        if (i_skipWS != 93) {
            if (i_skipWS == 102) {
                return _startFalseToken();
            }
            if (i_skipWS == 110) {
                return _startNullToken();
            }
            if (i_skipWS == 116) {
                return _startTrueToken();
            }
            if (i_skipWS == 123) {
                return _startObjectScope();
            }
            if (i_skipWS != 125) {
                switch (i_skipWS) {
                    case 47:
                        return _startSlashComment(15);
                    case ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE /* 48 */:
                        return _startNumberLeadingZero();
                    case ConstraintLayout.LayoutParams.Table.LAYOUT_EDITOR_ABSOLUTEX /* 49 */:
                    case 50:
                    case ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_TAG /* 51 */:
                    case ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_BASELINE_TO_TOP_OF /* 52 */:
                    case ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_BASELINE_TO_BOTTOM_OF /* 53 */:
                    case ConstraintLayout.LayoutParams.Table.LAYOUT_MARGIN_BASELINE /* 54 */:
                    case ConstraintLayout.LayoutParams.Table.LAYOUT_GONE_MARGIN_BASELINE /* 55 */:
                    case 56:
                    case 57:
                        return _startPositiveNumber(i_skipWS);
                }
            }
            if ((this._features & FEAT_MASK_TRAILING_COMMA) != 0) {
                return _closeObjectScope();
            }
        } else if ((this._features & FEAT_MASK_TRAILING_COMMA) != 0) {
            return _closeArrayScope();
        }
        return _startUnexpectedValue(true, i_skipWS);
    }

    private final JsonToken _startValueExpectColon(int i) throws IOException {
        if (i <= 32 && (i = _skipWS(i)) <= 0) {
            this._minorState = 14;
            return this._currToken;
        }
        if (i != 58) {
            if (i == 47) {
                return _startSlashComment(14);
            }
            if (i == 35) {
                return _finishHashComment(14);
            }
            _reportUnexpectedChar(i, "was expecting a colon to separate field name and value");
        }
        int i2 = this._inputPtr;
        if (i2 >= this._inputEnd) {
            this._minorState = 12;
            JsonToken jsonToken = JsonToken.NOT_AVAILABLE;
            this._currToken = jsonToken;
            return jsonToken;
        }
        int i_skipWS = this._inputBuffer[i2];
        this._inputPtr = i2 + 1;
        if (i_skipWS <= 32 && (i_skipWS = _skipWS(i_skipWS)) <= 0) {
            this._minorState = 12;
            return this._currToken;
        }
        _updateTokenLocation();
        if (i_skipWS == 34) {
            return _startString();
        }
        if (i_skipWS == 35) {
            return _finishHashComment(12);
        }
        if (i_skipWS == 45) {
            return _startNegativeNumber();
        }
        if (i_skipWS == 91) {
            return _startArrayScope();
        }
        if (i_skipWS == 102) {
            return _startFalseToken();
        }
        if (i_skipWS == 110) {
            return _startNullToken();
        }
        if (i_skipWS == 116) {
            return _startTrueToken();
        }
        if (i_skipWS != 123) {
            switch (i_skipWS) {
                case 47:
                    return _startSlashComment(12);
                case ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE /* 48 */:
                    return _startNumberLeadingZero();
                case ConstraintLayout.LayoutParams.Table.LAYOUT_EDITOR_ABSOLUTEX /* 49 */:
                case 50:
                case ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_TAG /* 51 */:
                case ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_BASELINE_TO_TOP_OF /* 52 */:
                case ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_BASELINE_TO_BOTTOM_OF /* 53 */:
                case ConstraintLayout.LayoutParams.Table.LAYOUT_MARGIN_BASELINE /* 54 */:
                case ConstraintLayout.LayoutParams.Table.LAYOUT_GONE_MARGIN_BASELINE /* 55 */:
                case 56:
                case 57:
                    return _startPositiveNumber(i_skipWS);
                default:
                    return _startUnexpectedValue(false, i_skipWS);
            }
        }
        return _startObjectScope();
    }

    private final JsonToken _startValueAfterComma(int i) throws IOException {
        if (i <= 32 && (i = _skipWS(i)) <= 0) {
            this._minorState = 15;
            return this._currToken;
        }
        _updateTokenLocation();
        if (i == 34) {
            return _startString();
        }
        if (i == 35) {
            return _finishHashComment(15);
        }
        if (i == 45) {
            return _startNegativeNumber();
        }
        if (i == 91) {
            return _startArrayScope();
        }
        if (i != 93) {
            if (i == 102) {
                return _startFalseToken();
            }
            if (i == 110) {
                return _startNullToken();
            }
            if (i == 116) {
                return _startTrueToken();
            }
            if (i == 123) {
                return _startObjectScope();
            }
            if (i != 125) {
                switch (i) {
                    case 47:
                        return _startSlashComment(15);
                    case ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE /* 48 */:
                        return _startNumberLeadingZero();
                    case ConstraintLayout.LayoutParams.Table.LAYOUT_EDITOR_ABSOLUTEX /* 49 */:
                    case 50:
                    case ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_TAG /* 51 */:
                    case ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_BASELINE_TO_TOP_OF /* 52 */:
                    case ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_BASELINE_TO_BOTTOM_OF /* 53 */:
                    case ConstraintLayout.LayoutParams.Table.LAYOUT_MARGIN_BASELINE /* 54 */:
                    case ConstraintLayout.LayoutParams.Table.LAYOUT_GONE_MARGIN_BASELINE /* 55 */:
                    case 56:
                    case 57:
                        return _startPositiveNumber(i);
                }
            }
            if ((this._features & FEAT_MASK_TRAILING_COMMA) != 0) {
                return _closeObjectScope();
            }
        } else if ((this._features & FEAT_MASK_TRAILING_COMMA) != 0) {
            return _closeArrayScope();
        }
        return _startUnexpectedValue(true, i);
    }

    /* JADX WARN: Code duplicated, block: B:22:0x002d  */
    protected JsonToken _startUnexpectedValue(boolean z, int i) throws IOException {
        if (i != 39) {
            if (i == 73) {
                return _finishNonStdToken(1, 1);
            }
            if (i == 78) {
                return _finishNonStdToken(0, 1);
            }
            if (i != 93) {
                if (i != 125) {
                    if (i == 43) {
                        return _finishNonStdToken(2, 1);
                    }
                    if (i == 44) {
                        if (!this._parsingContext.inRoot() && (this._features & FEAT_MASK_ALLOW_MISSING) != 0) {
                            this._inputPtr--;
                            return _valueComplete(JsonToken.VALUE_NULL);
                        }
                    }
                }
            } else if (this._parsingContext.inArray()) {
                if (!this._parsingContext.inRoot()) {
                    this._inputPtr--;
                    return _valueComplete(JsonToken.VALUE_NULL);
                }
            }
        } else if ((this._features & FEAT_MASK_ALLOW_SINGLE_QUOTES) != 0) {
            return _startAposString();
        }
        _reportUnexpectedChar(i, "expected a valid value " + _validJsonValueList());
        return null;
    }

    private final int _skipWS(int i) throws IOException {
        do {
            if (i != 32) {
                if (i == 10) {
                    this._currInputRow++;
                    this._currInputRowStart = this._inputPtr;
                } else if (i == 13) {
                    this._currInputRowAlt++;
                    this._currInputRowStart = this._inputPtr;
                } else if (i != 9) {
                    _throwInvalidSpace(i);
                }
            }
            if (this._inputPtr >= this._inputEnd) {
                this._currToken = JsonToken.NOT_AVAILABLE;
                return 0;
            }
            byte[] bArr = this._inputBuffer;
            int i2 = this._inputPtr;
            this._inputPtr = i2 + 1;
            i = bArr[i2] & 255;
        } while (i <= 32);
        return i;
    }

    private final JsonToken _startSlashComment(int i) throws IOException {
        if ((this._features & FEAT_MASK_ALLOW_JAVA_COMMENTS) == 0) {
            _reportUnexpectedChar(47, "maybe a (non-standard) comment? (not recognized as one since Feature 'ALLOW_COMMENTS' not enabled for parser)");
        }
        if (this._inputPtr >= this._inputEnd) {
            this._pending32 = i;
            this._minorState = 51;
            JsonToken jsonToken = JsonToken.NOT_AVAILABLE;
            this._currToken = jsonToken;
            return jsonToken;
        }
        byte[] bArr = this._inputBuffer;
        int i2 = this._inputPtr;
        this._inputPtr = i2 + 1;
        byte b = bArr[i2];
        if (b == 42) {
            return _finishCComment(i, false);
        }
        if (b == 47) {
            return _finishCppComment(i);
        }
        _reportUnexpectedChar(b & 255, "was expecting either '*' or '/' for a comment");
        return null;
    }

    private final JsonToken _finishHashComment(int i) throws IOException {
        if ((this._features & FEAT_MASK_ALLOW_YAML_COMMENTS) == 0) {
            _reportUnexpectedChar(35, "maybe a (non-standard) comment? (not recognized as one since Feature 'ALLOW_YAML_COMMENTS' not enabled for parser)");
        }
        while (this._inputPtr < this._inputEnd) {
            byte[] bArr = this._inputBuffer;
            int i2 = this._inputPtr;
            this._inputPtr = i2 + 1;
            int i3 = bArr[i2] & 255;
            if (i3 < 32) {
                if (i3 == 10) {
                    this._currInputRow++;
                    this._currInputRowStart = this._inputPtr;
                } else if (i3 == 13) {
                    this._currInputRowAlt++;
                    this._currInputRowStart = this._inputPtr;
                } else if (i3 != 9) {
                    _throwInvalidSpace(i3);
                }
                return _startAfterComment(i);
            }
        }
        this._minorState = 55;
        this._pending32 = i;
        JsonToken jsonToken = JsonToken.NOT_AVAILABLE;
        this._currToken = jsonToken;
        return jsonToken;
    }

    private final JsonToken _finishCppComment(int i) throws IOException {
        while (this._inputPtr < this._inputEnd) {
            byte[] bArr = this._inputBuffer;
            int i2 = this._inputPtr;
            this._inputPtr = i2 + 1;
            int i3 = bArr[i2] & 255;
            if (i3 < 32) {
                if (i3 == 10) {
                    this._currInputRow++;
                    this._currInputRowStart = this._inputPtr;
                } else if (i3 == 13) {
                    this._currInputRowAlt++;
                    this._currInputRowStart = this._inputPtr;
                } else if (i3 != 9) {
                    _throwInvalidSpace(i3);
                }
                return _startAfterComment(i);
            }
        }
        this._minorState = 54;
        this._pending32 = i;
        JsonToken jsonToken = JsonToken.NOT_AVAILABLE;
        this._currToken = jsonToken;
        return jsonToken;
    }

    private final JsonToken _finishCComment(int i, boolean z) throws IOException {
        while (this._inputPtr < this._inputEnd) {
            byte[] bArr = this._inputBuffer;
            int i2 = this._inputPtr;
            this._inputPtr = i2 + 1;
            int i3 = bArr[i2] & 255;
            if (i3 < 32) {
                if (i3 == 10) {
                    this._currInputRow++;
                    this._currInputRowStart = this._inputPtr;
                } else if (i3 == 13) {
                    this._currInputRowAlt++;
                    this._currInputRowStart = this._inputPtr;
                } else if (i3 != 9) {
                    _throwInvalidSpace(i3);
                }
            } else if (i3 == 42) {
                z = true;
            } else if (i3 == 47 && z) {
                return _startAfterComment(i);
            }
            z = false;
        }
        this._minorState = z ? 52 : 53;
        this._pending32 = i;
        JsonToken jsonToken = JsonToken.NOT_AVAILABLE;
        this._currToken = jsonToken;
        return jsonToken;
    }

    private final JsonToken _startAfterComment(int i) throws IOException {
        if (this._inputPtr >= this._inputEnd) {
            this._minorState = i;
            JsonToken jsonToken = JsonToken.NOT_AVAILABLE;
            this._currToken = jsonToken;
            return jsonToken;
        }
        byte[] bArr = this._inputBuffer;
        int i2 = this._inputPtr;
        this._inputPtr = i2 + 1;
        int i3 = bArr[i2] & 255;
        if (i == 4) {
            return _startFieldName(i3);
        }
        if (i == 5) {
            return _startFieldNameAfterComma(i3);
        }
        switch (i) {
            case 12:
                return _startValue(i3);
            case 13:
                return _startValueExpectComma(i3);
            case 14:
                return _startValueExpectColon(i3);
            case 15:
                return _startValueAfterComma(i3);
            default:
                VersionUtil.throwInternal();
                return null;
        }
    }

    protected JsonToken _startFalseToken() throws IOException {
        int i;
        int i2 = this._inputPtr;
        if (i2 + 4 < this._inputEnd) {
            byte[] bArr = this._inputBuffer;
            int i3 = i2 + 1;
            if (bArr[i2] == 97) {
                int i4 = i2 + 2;
                if (bArr[i3] == 108) {
                    int i5 = i2 + 3;
                    if (bArr[i4] == 115) {
                        int i6 = i2 + 4;
                        if (bArr[i5] == 101 && ((i = bArr[i6] & 255) < 48 || i == 93 || i == 125)) {
                            this._inputPtr = i6;
                            return _valueComplete(JsonToken.VALUE_FALSE);
                        }
                    }
                }
            }
        }
        this._minorState = 18;
        return _finishKeywordToken("false", 1, JsonToken.VALUE_FALSE);
    }

    protected JsonToken _startTrueToken() throws IOException {
        int i;
        int i2 = this._inputPtr;
        if (i2 + 3 < this._inputEnd) {
            byte[] bArr = this._inputBuffer;
            int i3 = i2 + 1;
            if (bArr[i2] == 114) {
                int i4 = i2 + 2;
                if (bArr[i3] == 117) {
                    int i5 = i2 + 3;
                    if (bArr[i4] == 101 && ((i = bArr[i5] & 255) < 48 || i == 93 || i == 125)) {
                        this._inputPtr = i5;
                        return _valueComplete(JsonToken.VALUE_TRUE);
                    }
                }
            }
        }
        this._minorState = 17;
        return _finishKeywordToken("true", 1, JsonToken.VALUE_TRUE);
    }

    protected JsonToken _startNullToken() throws IOException {
        int i;
        int i2 = this._inputPtr;
        if (i2 + 3 < this._inputEnd) {
            byte[] bArr = this._inputBuffer;
            int i3 = i2 + 1;
            if (bArr[i2] == 117) {
                int i4 = i2 + 2;
                if (bArr[i3] == 108) {
                    int i5 = i2 + 3;
                    if (bArr[i4] == 108 && ((i = bArr[i5] & 255) < 48 || i == 93 || i == 125)) {
                        this._inputPtr = i5;
                        return _valueComplete(JsonToken.VALUE_NULL);
                    }
                }
            }
        }
        this._minorState = 16;
        return _finishKeywordToken("null", 1, JsonToken.VALUE_NULL);
    }

    protected JsonToken _finishKeywordToken(String str, int i, JsonToken jsonToken) throws IOException {
        int length = str.length();
        while (this._inputPtr < this._inputEnd) {
            byte b = this._inputBuffer[this._inputPtr];
            if (i == length) {
                if (b < 48 || b == 93 || b == 125) {
                    return _valueComplete(jsonToken);
                }
            } else if (b == str.charAt(i)) {
                i++;
                this._inputPtr++;
            }
            this._minorState = 50;
            this._textBuffer.resetWithCopy(str, 0, i);
            return _finishErrorToken();
        }
        this._pending32 = i;
        JsonToken jsonToken2 = JsonToken.NOT_AVAILABLE;
        this._currToken = jsonToken2;
        return jsonToken2;
    }

    protected JsonToken _finishKeywordTokenWithEOF(String str, int i, JsonToken jsonToken) throws IOException {
        if (i == str.length()) {
            this._currToken = jsonToken;
            return jsonToken;
        }
        this._textBuffer.resetWithCopy(str, 0, i);
        return _finishErrorTokenWithEOF();
    }

    protected JsonToken _finishNonStdToken(int i, int i2) throws IOException {
        String str_nonStdToken = _nonStdToken(i);
        int length = str_nonStdToken.length();
        while (this._inputPtr < this._inputEnd) {
            byte b = this._inputBuffer[this._inputPtr];
            if (i2 == length) {
                if (b < 48 || b == 93 || b == 125) {
                    return _valueNonStdNumberComplete(i);
                }
            } else if (b == str_nonStdToken.charAt(i2)) {
                i2++;
                this._inputPtr++;
            }
            this._minorState = 50;
            this._textBuffer.resetWithCopy(str_nonStdToken, 0, i2);
            return _finishErrorToken();
        }
        this._nonStdTokenType = i;
        this._pending32 = i2;
        this._minorState = 19;
        JsonToken jsonToken = JsonToken.NOT_AVAILABLE;
        this._currToken = jsonToken;
        return jsonToken;
    }

    protected JsonToken _finishNonStdTokenWithEOF(int i, int i2) throws IOException {
        String str_nonStdToken = _nonStdToken(i);
        if (i2 == str_nonStdToken.length()) {
            return _valueNonStdNumberComplete(i);
        }
        this._textBuffer.resetWithCopy(str_nonStdToken, 0, i2);
        return _finishErrorTokenWithEOF();
    }

    protected JsonToken _finishErrorToken() throws IOException {
        while (this._inputPtr < this._inputEnd) {
            byte[] bArr = this._inputBuffer;
            int i = this._inputPtr;
            this._inputPtr = i + 1;
            char c = (char) bArr[i];
            if (Character.isJavaIdentifierPart(c)) {
                this._textBuffer.append(c);
                if (this._textBuffer.size() < 256) {
                }
            }
            return _reportErrorToken(this._textBuffer.contentsAsString());
        }
        JsonToken jsonToken = JsonToken.NOT_AVAILABLE;
        this._currToken = jsonToken;
        return jsonToken;
    }

    protected JsonToken _finishErrorTokenWithEOF() throws IOException {
        return _reportErrorToken(this._textBuffer.contentsAsString());
    }

    protected JsonToken _reportErrorToken(String str) throws IOException {
        _reportError("Unrecognized token '%s': was expecting %s", this._textBuffer.contentsAsString(), _validJsonTokenList());
        return JsonToken.NOT_AVAILABLE;
    }

    protected JsonToken _startFloatThatStartsWithPeriod() throws IOException {
        this._numberNegative = false;
        this._intLength = 0;
        return _startFloat(this._textBuffer.emptyAndGetCurrentSegment(), 0, 46);
    }

    protected JsonToken _startPositiveNumber(int i) throws IOException {
        this._numberNegative = false;
        char[] cArrEmptyAndGetCurrentSegment = this._textBuffer.emptyAndGetCurrentSegment();
        cArrEmptyAndGetCurrentSegment[0] = (char) i;
        if (this._inputPtr >= this._inputEnd) {
            this._minorState = 26;
            this._textBuffer.setCurrentLength(1);
            JsonToken jsonToken = JsonToken.NOT_AVAILABLE;
            this._currToken = jsonToken;
            return jsonToken;
        }
        int i2 = this._inputBuffer[this._inputPtr] & 255;
        int i3 = 1;
        while (i2 >= 48) {
            if (i2 <= 57) {
                if (i3 >= cArrEmptyAndGetCurrentSegment.length) {
                    cArrEmptyAndGetCurrentSegment = this._textBuffer.expandCurrentSegment();
                }
                int i4 = i3 + 1;
                cArrEmptyAndGetCurrentSegment[i3] = (char) i2;
                int i5 = this._inputPtr + 1;
                this._inputPtr = i5;
                if (i5 >= this._inputEnd) {
                    this._minorState = 26;
                    this._textBuffer.setCurrentLength(i4);
                    JsonToken jsonToken2 = JsonToken.NOT_AVAILABLE;
                    this._currToken = jsonToken2;
                    return jsonToken2;
                }
                i2 = this._inputBuffer[this._inputPtr] & 255;
                i3 = i4;
            } else {
                if (i2 == 101 || i2 == 69) {
                    this._intLength = i3;
                    this._inputPtr++;
                    return _startFloat(cArrEmptyAndGetCurrentSegment, i3, i2);
                }
                this._intLength = i3;
                this._textBuffer.setCurrentLength(i3);
                return _valueComplete(JsonToken.VALUE_NUMBER_INT);
            }
        }
        if (i2 == 46) {
            this._intLength = i3;
            this._inputPtr++;
            return _startFloat(cArrEmptyAndGetCurrentSegment, i3, i2);
        }
        this._intLength = i3;
        this._textBuffer.setCurrentLength(i3);
        return _valueComplete(JsonToken.VALUE_NUMBER_INT);
    }

    protected JsonToken _startNegativeNumber() throws IOException {
        this._numberNegative = true;
        if (this._inputPtr >= this._inputEnd) {
            this._minorState = 23;
            JsonToken jsonToken = JsonToken.NOT_AVAILABLE;
            this._currToken = jsonToken;
            return jsonToken;
        }
        byte[] bArr = this._inputBuffer;
        int i = this._inputPtr;
        this._inputPtr = i + 1;
        int i2 = bArr[i] & 255;
        int i3 = 2;
        if (i2 <= 48) {
            if (i2 == 48) {
                return _finishNumberLeadingNegZeroes();
            }
            reportUnexpectedNumberChar(i2, "expected digit (0-9) to follow minus sign, for valid numeric value");
        } else if (i2 > 57) {
            if (i2 == 73) {
                return _finishNonStdToken(3, 2);
            }
            reportUnexpectedNumberChar(i2, "expected digit (0-9) to follow minus sign, for valid numeric value");
        }
        char[] cArrEmptyAndGetCurrentSegment = this._textBuffer.emptyAndGetCurrentSegment();
        cArrEmptyAndGetCurrentSegment[0] = '-';
        cArrEmptyAndGetCurrentSegment[1] = (char) i2;
        if (this._inputPtr >= this._inputEnd) {
            this._minorState = 26;
            this._textBuffer.setCurrentLength(2);
            this._intLength = 1;
            JsonToken jsonToken2 = JsonToken.NOT_AVAILABLE;
            this._currToken = jsonToken2;
            return jsonToken2;
        }
        int i4 = this._inputBuffer[this._inputPtr];
        while (i4 >= 48) {
            if (i4 <= 57) {
                if (i3 >= cArrEmptyAndGetCurrentSegment.length) {
                    cArrEmptyAndGetCurrentSegment = this._textBuffer.expandCurrentSegment();
                }
                int i5 = i3 + 1;
                cArrEmptyAndGetCurrentSegment[i3] = (char) i4;
                int i6 = this._inputPtr + 1;
                this._inputPtr = i6;
                if (i6 >= this._inputEnd) {
                    this._minorState = 26;
                    this._textBuffer.setCurrentLength(i5);
                    JsonToken jsonToken3 = JsonToken.NOT_AVAILABLE;
                    this._currToken = jsonToken3;
                    return jsonToken3;
                }
                i4 = this._inputBuffer[this._inputPtr] & 255;
                i3 = i5;
            } else {
                if (i4 == 101 || i4 == 69) {
                    this._intLength = i3 - 1;
                    this._inputPtr++;
                    return _startFloat(cArrEmptyAndGetCurrentSegment, i3, i4);
                }
                this._intLength = i3 - 1;
                this._textBuffer.setCurrentLength(i3);
                return _valueComplete(JsonToken.VALUE_NUMBER_INT);
            }
        }
        if (i4 == 46) {
            this._intLength = i3 - 1;
            this._inputPtr++;
            return _startFloat(cArrEmptyAndGetCurrentSegment, i3, i4);
        }
        this._intLength = i3 - 1;
        this._textBuffer.setCurrentLength(i3);
        return _valueComplete(JsonToken.VALUE_NUMBER_INT);
    }

    protected JsonToken _startNumberLeadingZero() throws IOException {
        int i = this._inputPtr;
        if (i >= this._inputEnd) {
            this._minorState = 24;
            JsonToken jsonToken = JsonToken.NOT_AVAILABLE;
            this._currToken = jsonToken;
            return jsonToken;
        }
        int i2 = i + 1;
        int i3 = this._inputBuffer[i] & 255;
        if (i3 < 48) {
            if (i3 == 46) {
                this._inputPtr = i2;
                this._intLength = 1;
                char[] cArrEmptyAndGetCurrentSegment = this._textBuffer.emptyAndGetCurrentSegment();
                cArrEmptyAndGetCurrentSegment[0] = '0';
                return _startFloat(cArrEmptyAndGetCurrentSegment, 1, i3);
            }
        } else {
            if (i3 <= 57) {
                return _finishNumberLeadingZeroes();
            }
            if (i3 == 101 || i3 == 69) {
                this._inputPtr = i2;
                this._intLength = 1;
                char[] cArrEmptyAndGetCurrentSegment2 = this._textBuffer.emptyAndGetCurrentSegment();
                cArrEmptyAndGetCurrentSegment2[0] = '0';
                return _startFloat(cArrEmptyAndGetCurrentSegment2, 1, i3);
            }
            if (i3 != 93 && i3 != 125) {
                reportUnexpectedNumberChar(i3, "expected digit (0-9), decimal point (.) or exponent indicator (e/E) to follow '0'");
            }
        }
        return _valueCompleteInt(0, "0");
    }

    protected JsonToken _finishNumberMinus(int i) throws IOException {
        if (i <= 48) {
            if (i == 48) {
                return _finishNumberLeadingNegZeroes();
            }
            reportUnexpectedNumberChar(i, "expected digit (0-9) to follow minus sign, for valid numeric value");
        } else if (i > 57) {
            if (i == 73) {
                return _finishNonStdToken(3, 2);
            }
            reportUnexpectedNumberChar(i, "expected digit (0-9) to follow minus sign, for valid numeric value");
        }
        char[] cArrEmptyAndGetCurrentSegment = this._textBuffer.emptyAndGetCurrentSegment();
        cArrEmptyAndGetCurrentSegment[0] = '-';
        cArrEmptyAndGetCurrentSegment[1] = (char) i;
        this._intLength = 1;
        return _finishNumberIntegralPart(cArrEmptyAndGetCurrentSegment, 2);
    }

    protected JsonToken _finishNumberLeadingZeroes() throws IOException {
        while (this._inputPtr < this._inputEnd) {
            byte[] bArr = this._inputBuffer;
            int i = this._inputPtr;
            this._inputPtr = i + 1;
            int i2 = bArr[i] & 255;
            if (i2 < 48) {
                if (i2 == 46) {
                    char[] cArrEmptyAndGetCurrentSegment = this._textBuffer.emptyAndGetCurrentSegment();
                    cArrEmptyAndGetCurrentSegment[0] = '0';
                    this._intLength = 1;
                    return _startFloat(cArrEmptyAndGetCurrentSegment, 1, i2);
                }
            } else if (i2 <= 57) {
                if ((this._features & FEAT_MASK_LEADING_ZEROS) == 0) {
                    reportInvalidNumber("Leading zeroes not allowed");
                }
                if (i2 != 48) {
                    char[] cArrEmptyAndGetCurrentSegment2 = this._textBuffer.emptyAndGetCurrentSegment();
                    cArrEmptyAndGetCurrentSegment2[0] = (char) i2;
                    this._intLength = 1;
                    return _finishNumberIntegralPart(cArrEmptyAndGetCurrentSegment2, 1);
                }
            } else {
                if (i2 == 101 || i2 == 69) {
                    char[] cArrEmptyAndGetCurrentSegment3 = this._textBuffer.emptyAndGetCurrentSegment();
                    cArrEmptyAndGetCurrentSegment3[0] = '0';
                    this._intLength = 1;
                    return _startFloat(cArrEmptyAndGetCurrentSegment3, 1, i2);
                }
                if (i2 != 93 && i2 != 125) {
                    reportUnexpectedNumberChar(i2, "expected digit (0-9), decimal point (.) or exponent indicator (e/E) to follow '0'");
                }
            }
            this._inputPtr--;
            return _valueCompleteInt(0, "0");
        }
        this._minorState = 24;
        JsonToken jsonToken = JsonToken.NOT_AVAILABLE;
        this._currToken = jsonToken;
        return jsonToken;
    }

    protected JsonToken _finishNumberLeadingNegZeroes() throws IOException {
        while (this._inputPtr < this._inputEnd) {
            byte[] bArr = this._inputBuffer;
            int i = this._inputPtr;
            this._inputPtr = i + 1;
            int i2 = bArr[i] & 255;
            if (i2 < 48) {
                if (i2 == 46) {
                    char[] cArrEmptyAndGetCurrentSegment = this._textBuffer.emptyAndGetCurrentSegment();
                    cArrEmptyAndGetCurrentSegment[0] = '-';
                    cArrEmptyAndGetCurrentSegment[1] = '0';
                    this._intLength = 1;
                    return _startFloat(cArrEmptyAndGetCurrentSegment, 2, i2);
                }
            } else if (i2 <= 57) {
                if ((this._features & FEAT_MASK_LEADING_ZEROS) == 0) {
                    reportInvalidNumber("Leading zeroes not allowed");
                }
                if (i2 != 48) {
                    char[] cArrEmptyAndGetCurrentSegment2 = this._textBuffer.emptyAndGetCurrentSegment();
                    cArrEmptyAndGetCurrentSegment2[0] = '-';
                    cArrEmptyAndGetCurrentSegment2[1] = (char) i2;
                    this._intLength = 1;
                    return _finishNumberIntegralPart(cArrEmptyAndGetCurrentSegment2, 2);
                }
            } else {
                if (i2 == 101 || i2 == 69) {
                    char[] cArrEmptyAndGetCurrentSegment3 = this._textBuffer.emptyAndGetCurrentSegment();
                    cArrEmptyAndGetCurrentSegment3[0] = '-';
                    cArrEmptyAndGetCurrentSegment3[1] = '0';
                    this._intLength = 1;
                    return _startFloat(cArrEmptyAndGetCurrentSegment3, 2, i2);
                }
                if (i2 != 93 && i2 != 125) {
                    reportUnexpectedNumberChar(i2, "expected digit (0-9), decimal point (.) or exponent indicator (e/E) to follow '0'");
                }
            }
            this._inputPtr--;
            return _valueCompleteInt(0, "0");
        }
        this._minorState = 25;
        JsonToken jsonToken = JsonToken.NOT_AVAILABLE;
        this._currToken = jsonToken;
        return jsonToken;
    }

    protected JsonToken _finishNumberIntegralPart(char[] cArr, int i) throws IOException {
        int i2 = this._numberNegative ? -1 : 0;
        while (this._inputPtr < this._inputEnd) {
            int i3 = this._inputBuffer[this._inputPtr] & 255;
            if (i3 < 48) {
                if (i3 == 46) {
                    this._intLength = i2 + i;
                    this._inputPtr++;
                    return _startFloat(cArr, i, i3);
                }
            } else if (i3 <= 57) {
                this._inputPtr++;
                if (i >= cArr.length) {
                    cArr = this._textBuffer.expandCurrentSegment();
                }
                cArr[i] = (char) i3;
                i++;
            } else if (i3 == 101 || i3 == 69) {
                this._intLength = i2 + i;
                this._inputPtr++;
                return _startFloat(cArr, i, i3);
            }
            this._intLength = i2 + i;
            this._textBuffer.setCurrentLength(i);
            return _valueComplete(JsonToken.VALUE_NUMBER_INT);
        }
        this._minorState = 26;
        this._textBuffer.setCurrentLength(i);
        JsonToken jsonToken = JsonToken.NOT_AVAILABLE;
        this._currToken = jsonToken;
        return jsonToken;
    }

    /* JADX WARN: Code duplicated, block: B:61:0x0103  */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:58:0x00f4 -> B:40:0x009e). Please report as a decompilation issue!!! */
    protected JsonToken _startFloat(char[] cArr, int i, int i2) throws IOException {
        int i3;
        int i4;
        int i5;
        byte b;
        int i6 = 0;
        if (i2 == 46) {
            if (i >= cArr.length) {
                cArr = this._textBuffer.expandCurrentSegment();
            }
            cArr[i] = '.';
            i++;
            i4 = 0;
            while (true) {
                if (this._inputPtr >= this._inputEnd) {
                    this._textBuffer.setCurrentLength(i);
                    this._minorState = 30;
                    this._fractLength = i4;
                    JsonToken jsonToken = JsonToken.NOT_AVAILABLE;
                    this._currToken = jsonToken;
                    return jsonToken;
                }
                byte[] bArr = this._inputBuffer;
                int i7 = this._inputPtr;
                this._inputPtr = i7 + 1;
                b = bArr[i7];
                if (b < 48 || b > 57) {
                    break;
                }
                if (i >= cArr.length) {
                    cArr = this._textBuffer.expandCurrentSegment();
                }
                cArr[i] = (char) b;
                i4++;
                i++;
            }
            i3 = b & 255;
            if (i4 == 0) {
                reportUnexpectedNumberChar(i3, "Decimal point not followed by a digit");
            }
        } else {
            i3 = i2;
            i4 = 0;
        }
        this._fractLength = i4;
        if (i3 == 101 || i3 == 69) {
            if (i >= cArr.length) {
                cArr = this._textBuffer.expandCurrentSegment();
            }
            int i8 = i + 1;
            cArr[i] = (char) i3;
            if (this._inputPtr >= this._inputEnd) {
                this._textBuffer.setCurrentLength(i8);
                this._minorState = 31;
                this._expLength = 0;
                JsonToken jsonToken2 = JsonToken.NOT_AVAILABLE;
                this._currToken = jsonToken2;
                return jsonToken2;
            }
            byte[] bArr2 = this._inputBuffer;
            int i9 = this._inputPtr;
            this._inputPtr = i9 + 1;
            byte b2 = bArr2[i9];
            if (b2 == 45 || b2 == 43) {
                if (i8 >= cArr.length) {
                    cArr = this._textBuffer.expandCurrentSegment();
                }
                i += 2;
                cArr[i8] = (char) b2;
                if (this._inputPtr >= this._inputEnd) {
                    this._textBuffer.setCurrentLength(i);
                    this._minorState = 32;
                    this._expLength = 0;
                    JsonToken jsonToken3 = JsonToken.NOT_AVAILABLE;
                    this._currToken = jsonToken3;
                    return jsonToken3;
                }
                byte[] bArr3 = this._inputBuffer;
                int i10 = this._inputPtr;
                this._inputPtr = i10 + 1;
                b2 = bArr3[i10];
            } else {
                i = i8;
            }
            if (b2 >= 48 || b2 > 57) {
                i5 = b2 & 255;
                if (i6 == 0) {
                    reportUnexpectedNumberChar(i5, "Exponent indicator not followed by a digit");
                }
            } else {
                i6++;
                if (i >= cArr.length) {
                    cArr = this._textBuffer.expandCurrentSegment();
                }
                i8 = i + 1;
                cArr[i] = (char) b2;
                if (this._inputPtr >= this._inputEnd) {
                    this._textBuffer.setCurrentLength(i8);
                    this._minorState = 32;
                    this._expLength = i6;
                    JsonToken jsonToken4 = JsonToken.NOT_AVAILABLE;
                    this._currToken = jsonToken4;
                    return jsonToken4;
                }
                byte[] bArr4 = this._inputBuffer;
                int i11 = this._inputPtr;
                this._inputPtr = i11 + 1;
                b2 = bArr4[i11];
                i = i8;
                if (b2 >= 48) {
                }
                i5 = b2 & 255;
                if (i6 == 0) {
                    reportUnexpectedNumberChar(i5, "Exponent indicator not followed by a digit");
                }
            }
        }
        this._inputPtr--;
        this._textBuffer.setCurrentLength(i);
        this._expLength = i6;
        return _valueComplete(JsonToken.VALUE_NUMBER_FLOAT);
    }

    protected JsonToken _finishFloatFraction() throws IOException {
        byte b;
        int i = this._fractLength;
        char[] bufferWithoutReset = this._textBuffer.getBufferWithoutReset();
        int currentSegmentSize = this._textBuffer.getCurrentSegmentSize();
        while (true) {
            byte[] bArr = this._inputBuffer;
            int i2 = this._inputPtr;
            this._inputPtr = i2 + 1;
            b = bArr[i2];
            if (b < 48 || b > 57) {
                break;
            }
            i++;
            if (currentSegmentSize >= bufferWithoutReset.length) {
                bufferWithoutReset = this._textBuffer.expandCurrentSegment();
            }
            int i3 = currentSegmentSize + 1;
            bufferWithoutReset[currentSegmentSize] = (char) b;
            if (this._inputPtr >= this._inputEnd) {
                this._textBuffer.setCurrentLength(i3);
                this._fractLength = i;
                return JsonToken.NOT_AVAILABLE;
            }
            currentSegmentSize = i3;
        }
        if (i == 0) {
            reportUnexpectedNumberChar(b, "Decimal point not followed by a digit");
        }
        this._fractLength = i;
        this._textBuffer.setCurrentLength(currentSegmentSize);
        if (b == 101 || b == 69) {
            this._textBuffer.append((char) b);
            this._expLength = 0;
            if (this._inputPtr >= this._inputEnd) {
                this._minorState = 31;
                return JsonToken.NOT_AVAILABLE;
            }
            this._minorState = 32;
            byte[] bArr2 = this._inputBuffer;
            int i4 = this._inputPtr;
            this._inputPtr = i4 + 1;
            return _finishFloatExponent(true, bArr2[i4] & 255);
        }
        this._inputPtr--;
        this._textBuffer.setCurrentLength(currentSegmentSize);
        this._expLength = 0;
        return _valueComplete(JsonToken.VALUE_NUMBER_FLOAT);
    }

    protected JsonToken _finishFloatExponent(boolean z, int i) throws IOException {
        if (z) {
            this._minorState = 32;
            if (i == 45 || i == 43) {
                this._textBuffer.append((char) i);
                if (this._inputPtr >= this._inputEnd) {
                    this._minorState = 32;
                    this._expLength = 0;
                    return JsonToken.NOT_AVAILABLE;
                }
                byte[] bArr = this._inputBuffer;
                int i2 = this._inputPtr;
                this._inputPtr = i2 + 1;
                i = bArr[i2];
            }
        }
        char[] bufferWithoutReset = this._textBuffer.getBufferWithoutReset();
        int currentSegmentSize = this._textBuffer.getCurrentSegmentSize();
        int i3 = this._expLength;
        while (i >= 48 && i <= 57) {
            i3++;
            if (currentSegmentSize >= bufferWithoutReset.length) {
                bufferWithoutReset = this._textBuffer.expandCurrentSegment();
            }
            int i4 = currentSegmentSize + 1;
            bufferWithoutReset[currentSegmentSize] = (char) i;
            if (this._inputPtr >= this._inputEnd) {
                this._textBuffer.setCurrentLength(i4);
                this._expLength = i3;
                return JsonToken.NOT_AVAILABLE;
            }
            byte[] bArr2 = this._inputBuffer;
            int i5 = this._inputPtr;
            this._inputPtr = i5 + 1;
            i = bArr2[i5];
            currentSegmentSize = i4;
        }
        int i6 = i & 255;
        if (i3 == 0) {
            reportUnexpectedNumberChar(i6, "Exponent indicator not followed by a digit");
        }
        this._inputPtr--;
        this._textBuffer.setCurrentLength(currentSegmentSize);
        this._expLength = i3;
        return _valueComplete(JsonToken.VALUE_NUMBER_FLOAT);
    }

    private final String _fastParseName() throws IOException {
        byte[] bArr = this._inputBuffer;
        int[] iArr = _icLatin1;
        int i = this._inputPtr;
        int i2 = i + 1;
        int i3 = bArr[i] & 255;
        if (iArr[i3] != 0) {
            if (i3 != 34) {
                return null;
            }
            this._inputPtr = i2;
            return "";
        }
        int i4 = i + 2;
        int i5 = bArr[i2] & 255;
        if (iArr[i5] != 0) {
            if (i5 != 34) {
                return null;
            }
            this._inputPtr = i4;
            return _findName(i3, 1);
        }
        int i6 = i5 | (i3 << 8);
        int i7 = i + 3;
        int i8 = bArr[i4] & 255;
        if (iArr[i8] != 0) {
            if (i8 != 34) {
                return null;
            }
            this._inputPtr = i7;
            return _findName(i6, 2);
        }
        int i9 = (i6 << 8) | i8;
        int i10 = i + 4;
        int i11 = bArr[i7] & 255;
        if (iArr[i11] != 0) {
            if (i11 != 34) {
                return null;
            }
            this._inputPtr = i10;
            return _findName(i9, 3);
        }
        int i12 = (i9 << 8) | i11;
        int i13 = i + 5;
        int i14 = bArr[i10] & 255;
        if (iArr[i14] == 0) {
            this._quad1 = i12;
            return _parseMediumName(i13, i14);
        }
        if (i14 != 34) {
            return null;
        }
        this._inputPtr = i13;
        return _findName(i12, 4);
    }

    private final String _parseMediumName(int i, int i2) throws IOException {
        byte[] bArr = this._inputBuffer;
        int[] iArr = _icLatin1;
        int i3 = i + 1;
        int i4 = bArr[i] & 255;
        if (iArr[i4] != 0) {
            if (i4 != 34) {
                return null;
            }
            this._inputPtr = i3;
            return _findName(this._quad1, i2, 1);
        }
        int i5 = (i2 << 8) | i4;
        int i6 = i + 2;
        int i7 = bArr[i3] & 255;
        if (iArr[i7] != 0) {
            if (i7 != 34) {
                return null;
            }
            this._inputPtr = i6;
            return _findName(this._quad1, i5, 2);
        }
        int i8 = (i5 << 8) | i7;
        int i9 = i + 3;
        int i10 = bArr[i6] & 255;
        if (iArr[i10] != 0) {
            if (i10 != 34) {
                return null;
            }
            this._inputPtr = i9;
            return _findName(this._quad1, i8, 3);
        }
        int i11 = (i8 << 8) | i10;
        int i12 = i + 4;
        int i13 = bArr[i9] & 255;
        if (iArr[i13] == 0) {
            return _parseMediumName2(i12, i13, i11);
        }
        if (i13 != 34) {
            return null;
        }
        this._inputPtr = i12;
        return _findName(this._quad1, i11, 4);
    }

    private final String _parseMediumName2(int i, int i2, int i3) throws IOException {
        byte[] bArr = this._inputBuffer;
        int[] iArr = _icLatin1;
        int i4 = i + 1;
        int i5 = bArr[i] & 255;
        if (iArr[i5] != 0) {
            if (i5 != 34) {
                return null;
            }
            this._inputPtr = i4;
            return _findName(this._quad1, i3, i2, 1);
        }
        int i6 = (i2 << 8) | i5;
        int i7 = i + 2;
        int i8 = bArr[i4] & 255;
        if (iArr[i8] != 0) {
            if (i8 != 34) {
                return null;
            }
            this._inputPtr = i7;
            return _findName(this._quad1, i3, i6, 2);
        }
        int i9 = (i6 << 8) | i8;
        int i10 = i + 3;
        int i11 = bArr[i7] & 255;
        if (iArr[i11] != 0) {
            if (i11 != 34) {
                return null;
            }
            this._inputPtr = i10;
            return _findName(this._quad1, i3, i9, 3);
        }
        int i12 = (i9 << 8) | i11;
        int i13 = i + 4;
        if ((bArr[i10] & 255) != 34) {
            return null;
        }
        this._inputPtr = i13;
        return _findName(this._quad1, i3, i12, 4);
    }

    private final JsonToken _parseEscapedName(int i, int i2, int i3) throws IOException {
        int i4;
        int[] iArrGrowArrayBy = this._quadBuffer;
        int[] iArr = _icLatin1;
        while (this._inputPtr < this._inputEnd) {
            byte[] bArr = this._inputBuffer;
            int i5 = this._inputPtr;
            this._inputPtr = i5 + 1;
            int i_decodeCharEscape = bArr[i5] & 255;
            if (iArr[i_decodeCharEscape] == 0) {
                if (i3 < 4) {
                    i3++;
                    i2 = (i2 << 8) | i_decodeCharEscape;
                } else {
                    if (i >= iArrGrowArrayBy.length) {
                        int[] iArrGrowArrayBy2 = growArrayBy(iArrGrowArrayBy, iArrGrowArrayBy.length);
                        this._quadBuffer = iArrGrowArrayBy2;
                        iArrGrowArrayBy = iArrGrowArrayBy2;
                    }
                    i4 = i + 1;
                    iArrGrowArrayBy[i] = i2;
                    i = i4;
                    i2 = i_decodeCharEscape;
                    i3 = 1;
                }
            } else if (i_decodeCharEscape != 34) {
                if (i_decodeCharEscape != 92) {
                    _throwUnquotedSpace(i_decodeCharEscape, AppMeasurementSdk.ConditionalUserProperty.NAME);
                } else {
                    i_decodeCharEscape = _decodeCharEscape();
                    if (i_decodeCharEscape < 0) {
                        this._minorState = 8;
                        this._minorStateAfterSplit = 7;
                        this._quadLength = i;
                        this._pending32 = i2;
                        this._pendingBytes = i3;
                        JsonToken jsonToken = JsonToken.NOT_AVAILABLE;
                        this._currToken = jsonToken;
                        return jsonToken;
                    }
                }
                if (i >= iArrGrowArrayBy.length) {
                    iArrGrowArrayBy = growArrayBy(iArrGrowArrayBy, iArrGrowArrayBy.length);
                    this._quadBuffer = iArrGrowArrayBy;
                }
                if (i_decodeCharEscape > 127) {
                    int i6 = 0;
                    if (i3 >= 4) {
                        iArrGrowArrayBy[i] = i2;
                        i++;
                        i2 = 0;
                        i3 = 0;
                    }
                    if (i_decodeCharEscape < 2048) {
                        i2 = (i2 << 8) | (i_decodeCharEscape >> 6) | 192;
                        i3++;
                    } else {
                        int i7 = (i2 << 8) | (i_decodeCharEscape >> 12) | 224;
                        int i8 = i3 + 1;
                        if (i8 >= 4) {
                            iArrGrowArrayBy[i] = i7;
                            i++;
                            i8 = 0;
                        } else {
                            i6 = i7;
                        }
                        i2 = (i6 << 8) | ((i_decodeCharEscape >> 6) & 63) | 128;
                        i3 = i8 + 1;
                    }
                    i_decodeCharEscape = (i_decodeCharEscape & 63) | 128;
                }
                if (i3 < 4) {
                    i3++;
                    i2 = (i2 << 8) | i_decodeCharEscape;
                } else {
                    i4 = i + 1;
                    iArrGrowArrayBy[i] = i2;
                    i = i4;
                    i2 = i_decodeCharEscape;
                    i3 = 1;
                }
            } else {
                if (i3 > 0) {
                    if (i >= iArrGrowArrayBy.length) {
                        iArrGrowArrayBy = growArrayBy(iArrGrowArrayBy, iArrGrowArrayBy.length);
                        this._quadBuffer = iArrGrowArrayBy;
                    }
                    iArrGrowArrayBy[i] = _padLastQuad(i2, i3);
                    i++;
                } else if (i == 0) {
                    return _fieldComplete("");
                }
                String strFindName = this._symbols.findName(iArrGrowArrayBy, i);
                if (strFindName == null) {
                    strFindName = _addName(iArrGrowArrayBy, i, i3);
                }
                return _fieldComplete(strFindName);
            }
        }
        this._quadLength = i;
        this._pending32 = i2;
        this._pendingBytes = i3;
        this._minorState = 7;
        JsonToken jsonToken2 = JsonToken.NOT_AVAILABLE;
        this._currToken = jsonToken2;
        return jsonToken2;
    }

    private JsonToken _handleOddName(int i) throws IOException {
        if (i != 35) {
            if (i != 39) {
                if (i == 47) {
                    return _startSlashComment(4);
                }
                if (i == 93) {
                    return _closeArrayScope();
                }
            } else if ((this._features & FEAT_MASK_ALLOW_SINGLE_QUOTES) != 0) {
                return _finishAposName(0, 0, 0);
            }
        } else if ((this._features & FEAT_MASK_ALLOW_YAML_COMMENTS) != 0) {
            return _finishHashComment(4);
        }
        if ((this._features & FEAT_MASK_ALLOW_UNQUOTED_NAMES) == 0) {
            _reportUnexpectedChar((char) i, "was expecting double-quote to start field name");
        }
        if (CharTypes.getInputCodeUtf8JsNames()[i] != 0) {
            _reportUnexpectedChar(i, "was expecting either valid name character (for unquoted name) or double-quote (for quoted) to start field name");
        }
        return _finishUnquotedName(0, i, 1);
    }

    private JsonToken _finishUnquotedName(int i, int i2, int i3) throws IOException {
        int[] iArrGrowArrayBy = this._quadBuffer;
        int[] inputCodeUtf8JsNames = CharTypes.getInputCodeUtf8JsNames();
        while (this._inputPtr < this._inputEnd) {
            int i4 = this._inputBuffer[this._inputPtr] & 255;
            if (inputCodeUtf8JsNames[i4] == 0) {
                this._inputPtr++;
                if (i3 < 4) {
                    i3++;
                    i2 = (i2 << 8) | i4;
                } else {
                    if (i >= iArrGrowArrayBy.length) {
                        iArrGrowArrayBy = growArrayBy(iArrGrowArrayBy, iArrGrowArrayBy.length);
                        this._quadBuffer = iArrGrowArrayBy;
                    }
                    iArrGrowArrayBy[i] = i2;
                    i++;
                    i2 = i4;
                    i3 = 1;
                }
            } else {
                if (i3 > 0) {
                    if (i >= iArrGrowArrayBy.length) {
                        iArrGrowArrayBy = growArrayBy(iArrGrowArrayBy, iArrGrowArrayBy.length);
                        this._quadBuffer = iArrGrowArrayBy;
                    }
                    iArrGrowArrayBy[i] = i2;
                    i++;
                }
                String strFindName = this._symbols.findName(iArrGrowArrayBy, i);
                if (strFindName == null) {
                    strFindName = _addName(iArrGrowArrayBy, i, i3);
                }
                return _fieldComplete(strFindName);
            }
        }
        this._quadLength = i;
        this._pending32 = i2;
        this._pendingBytes = i3;
        this._minorState = 10;
        JsonToken jsonToken = JsonToken.NOT_AVAILABLE;
        this._currToken = jsonToken;
        return jsonToken;
    }

    private JsonToken _finishAposName(int i, int i2, int i3) throws IOException {
        int[] iArrGrowArrayBy = this._quadBuffer;
        int[] iArr = _icLatin1;
        while (this._inputPtr < this._inputEnd) {
            byte[] bArr = this._inputBuffer;
            int i4 = this._inputPtr;
            this._inputPtr = i4 + 1;
            int i_decodeCharEscape = bArr[i4] & 255;
            if (i_decodeCharEscape != 39) {
                if (i_decodeCharEscape != 34 && iArr[i_decodeCharEscape] != 0) {
                    if (i_decodeCharEscape != 92) {
                        _throwUnquotedSpace(i_decodeCharEscape, AppMeasurementSdk.ConditionalUserProperty.NAME);
                    } else {
                        i_decodeCharEscape = _decodeCharEscape();
                        if (i_decodeCharEscape < 0) {
                            this._minorState = 8;
                            this._minorStateAfterSplit = 9;
                            this._quadLength = i;
                            this._pending32 = i2;
                            this._pendingBytes = i3;
                            JsonToken jsonToken = JsonToken.NOT_AVAILABLE;
                            this._currToken = jsonToken;
                            return jsonToken;
                        }
                    }
                    if (i_decodeCharEscape > 127) {
                        int i5 = 0;
                        if (i3 >= 4) {
                            if (i >= iArrGrowArrayBy.length) {
                                iArrGrowArrayBy = growArrayBy(iArrGrowArrayBy, iArrGrowArrayBy.length);
                                this._quadBuffer = iArrGrowArrayBy;
                            }
                            iArrGrowArrayBy[i] = i2;
                            i++;
                            i2 = 0;
                            i3 = 0;
                        }
                        if (i_decodeCharEscape < 2048) {
                            i2 = (i2 << 8) | (i_decodeCharEscape >> 6) | 192;
                            i3++;
                        } else {
                            int i6 = (i2 << 8) | (i_decodeCharEscape >> 12) | 224;
                            int i7 = i3 + 1;
                            if (i7 >= 4) {
                                if (i >= iArrGrowArrayBy.length) {
                                    int[] iArrGrowArrayBy2 = growArrayBy(iArrGrowArrayBy, iArrGrowArrayBy.length);
                                    this._quadBuffer = iArrGrowArrayBy2;
                                    iArrGrowArrayBy = iArrGrowArrayBy2;
                                }
                                iArrGrowArrayBy[i] = i6;
                                i++;
                                i7 = 0;
                            } else {
                                i5 = i6;
                            }
                            i2 = (i5 << 8) | ((i_decodeCharEscape >> 6) & 63) | 128;
                            i3 = i7 + 1;
                        }
                        i_decodeCharEscape = (i_decodeCharEscape & 63) | 128;
                    }
                }
                if (i3 < 4) {
                    i3++;
                    i2 = (i2 << 8) | i_decodeCharEscape;
                } else {
                    if (i >= iArrGrowArrayBy.length) {
                        iArrGrowArrayBy = growArrayBy(iArrGrowArrayBy, iArrGrowArrayBy.length);
                        this._quadBuffer = iArrGrowArrayBy;
                    }
                    iArrGrowArrayBy[i] = i2;
                    i++;
                    i2 = i_decodeCharEscape;
                    i3 = 1;
                }
            } else {
                if (i3 > 0) {
                    if (i >= iArrGrowArrayBy.length) {
                        iArrGrowArrayBy = growArrayBy(iArrGrowArrayBy, iArrGrowArrayBy.length);
                        this._quadBuffer = iArrGrowArrayBy;
                    }
                    iArrGrowArrayBy[i] = _padLastQuad(i2, i3);
                    i++;
                } else if (i == 0) {
                    return _fieldComplete("");
                }
                String strFindName = this._symbols.findName(iArrGrowArrayBy, i);
                if (strFindName == null) {
                    strFindName = _addName(iArrGrowArrayBy, i, i3);
                }
                return _fieldComplete(strFindName);
            }
        }
        this._quadLength = i;
        this._pending32 = i2;
        this._pendingBytes = i3;
        this._minorState = 9;
        JsonToken jsonToken2 = JsonToken.NOT_AVAILABLE;
        this._currToken = jsonToken2;
        return jsonToken2;
    }

    protected final JsonToken _finishFieldWithEscape() throws IOException {
        int i;
        int i2;
        int i_decodeSplitEscaped = _decodeSplitEscaped(this._quoted32, this._quotedDigits);
        if (i_decodeSplitEscaped < 0) {
            this._minorState = 8;
            return JsonToken.NOT_AVAILABLE;
        }
        if (this._quadLength >= this._quadBuffer.length) {
            this._quadBuffer = growArrayBy(this._quadBuffer, 32);
        }
        int i3 = this._pending32;
        int i4 = this._pendingBytes;
        int i5 = 1;
        if (i_decodeSplitEscaped > 127) {
            int i6 = 0;
            if (i4 >= 4) {
                int[] iArr = this._quadBuffer;
                int i7 = this._quadLength;
                this._quadLength = i7 + 1;
                iArr[i7] = i3;
                i3 = 0;
                i4 = 0;
            }
            if (i_decodeSplitEscaped < 2048) {
                i = i3 << 8;
                i2 = (i_decodeSplitEscaped >> 6) | 192;
            } else {
                int i8 = (i3 << 8) | (i_decodeSplitEscaped >> 12) | 224;
                i4++;
                if (i4 >= 4) {
                    int[] iArr2 = this._quadBuffer;
                    int i9 = this._quadLength;
                    this._quadLength = i9 + 1;
                    iArr2[i9] = i8;
                    i4 = 0;
                } else {
                    i6 = i8;
                }
                i = i6 << 8;
                i2 = ((i_decodeSplitEscaped >> 6) & 63) | 128;
            }
            i3 = i | i2;
            i4++;
            i_decodeSplitEscaped = (i_decodeSplitEscaped & 63) | 128;
        }
        if (i4 < 4) {
            i5 = 1 + i4;
            i_decodeSplitEscaped |= i3 << 8;
        } else {
            int[] iArr3 = this._quadBuffer;
            int i10 = this._quadLength;
            this._quadLength = i10 + 1;
            iArr3[i10] = i3;
        }
        if (this._minorStateAfterSplit == 9) {
            return _finishAposName(this._quadLength, i_decodeSplitEscaped, i5);
        }
        return _parseEscapedName(this._quadLength, i_decodeSplitEscaped, i5);
    }

    private int _decodeSplitEscaped(int i, int i2) throws IOException {
        if (this._inputPtr >= this._inputEnd) {
            this._quoted32 = i;
            this._quotedDigits = i2;
            return -1;
        }
        byte[] bArr = this._inputBuffer;
        int i3 = this._inputPtr;
        this._inputPtr = i3 + 1;
        byte b = bArr[i3];
        if (i2 == -1) {
            if (b == 34 || b == 47 || b == 92) {
                return b;
            }
            if (b == 98) {
                return 8;
            }
            if (b == 102) {
                return 12;
            }
            if (b == 110) {
                return 10;
            }
            if (b == 114) {
                return 13;
            }
            if (b == 116) {
                return 9;
            }
            if (b != 117) {
                return _handleUnrecognizedCharacterEscape((char) b);
            }
            if (this._inputPtr >= this._inputEnd) {
                this._quotedDigits = 0;
                this._quoted32 = 0;
                return -1;
            }
            byte[] bArr2 = this._inputBuffer;
            int i4 = this._inputPtr;
            this._inputPtr = i4 + 1;
            b = bArr2[i4];
            i2 = 0;
        }
        while (true) {
            int i5 = b & 255;
            int iCharToHex = CharTypes.charToHex(i5);
            if (iCharToHex < 0) {
                _reportUnexpectedChar(i5 & 255, "expected a hex-digit for character escape sequence");
            }
            i = (i << 4) | iCharToHex;
            i2++;
            if (i2 == 4) {
                return i;
            }
            if (this._inputPtr >= this._inputEnd) {
                this._quotedDigits = i2;
                this._quoted32 = i;
                return -1;
            }
            byte[] bArr3 = this._inputBuffer;
            int i6 = this._inputPtr;
            this._inputPtr = i6 + 1;
            b = bArr3[i6];
        }
    }

    protected JsonToken _startString() throws IOException {
        int i = this._inputPtr;
        char[] cArrEmptyAndGetCurrentSegment = this._textBuffer.emptyAndGetCurrentSegment();
        int[] iArr = _icUTF8;
        int iMin = Math.min(this._inputEnd, cArrEmptyAndGetCurrentSegment.length + i);
        byte[] bArr = this._inputBuffer;
        int i2 = 0;
        while (i < iMin) {
            int i3 = bArr[i] & 255;
            if (iArr[i3] != 0) {
                if (i3 != 34) {
                    break;
                }
                this._inputPtr = i + 1;
                this._textBuffer.setCurrentLength(i2);
                return _valueComplete(JsonToken.VALUE_STRING);
            }
            i++;
            cArrEmptyAndGetCurrentSegment[i2] = (char) i3;
            i2++;
        }
        this._textBuffer.setCurrentLength(i2);
        this._inputPtr = i;
        return _finishRegularString();
    }

    private final JsonToken _finishRegularString() throws IOException {
        int[] iArr = _icUTF8;
        byte[] bArr = this._inputBuffer;
        char[] bufferWithoutReset = this._textBuffer.getBufferWithoutReset();
        int currentSegmentSize = this._textBuffer.getCurrentSegmentSize();
        int i = this._inputPtr;
        int i2 = this._inputEnd - 5;
        while (i < this._inputEnd) {
            int i3 = 0;
            if (currentSegmentSize >= bufferWithoutReset.length) {
                bufferWithoutReset = this._textBuffer.finishCurrentSegment();
                currentSegmentSize = 0;
            }
            int iMin = Math.min(this._inputEnd, (bufferWithoutReset.length - currentSegmentSize) + i);
            while (i < iMin) {
                int i4 = i + 1;
                int i_decodeFastCharEscape = bArr[i] & 255;
                int i5 = iArr[i_decodeFastCharEscape];
                if (i5 != 0) {
                    if (i_decodeFastCharEscape != 34) {
                        if (i4 >= i2) {
                            this._inputPtr = i4;
                            this._textBuffer.setCurrentLength(currentSegmentSize);
                            if (!_decodeSplitMultiByte(i_decodeFastCharEscape, iArr[i_decodeFastCharEscape], i4 < this._inputEnd)) {
                                this._minorStateAfterSplit = 40;
                                JsonToken jsonToken = JsonToken.NOT_AVAILABLE;
                                this._currToken = jsonToken;
                                return jsonToken;
                            }
                            bufferWithoutReset = this._textBuffer.getBufferWithoutReset();
                            currentSegmentSize = this._textBuffer.getCurrentSegmentSize();
                            i = this._inputPtr;
                            break;
                        }
                        if (i5 == 1) {
                            this._inputPtr = i4;
                            i_decodeFastCharEscape = _decodeFastCharEscape();
                            i = this._inputPtr;
                        } else if (i5 == 2) {
                            i += 2;
                            i_decodeFastCharEscape = _decodeUTF8_2(i_decodeFastCharEscape, this._inputBuffer[i4]);
                        } else if (i5 == 3) {
                            byte[] bArr2 = this._inputBuffer;
                            int i6 = i + 2;
                            i += 3;
                            i_decodeFastCharEscape = _decodeUTF8_3(i_decodeFastCharEscape, bArr2[i4], bArr2[i6]);
                        } else if (i5 != 4) {
                            if (i_decodeFastCharEscape < 32) {
                                _throwUnquotedSpace(i_decodeFastCharEscape, "string value");
                            } else {
                                _reportInvalidChar(i_decodeFastCharEscape);
                            }
                            i = i4;
                        } else {
                            byte[] bArr3 = this._inputBuffer;
                            byte b = bArr3[i4];
                            int i7 = i + 3;
                            byte b2 = bArr3[i + 2];
                            i += 4;
                            int i_decodeUTF8_4 = _decodeUTF8_4(i_decodeFastCharEscape, b, b2, bArr3[i7]);
                            int i8 = currentSegmentSize + 1;
                            bufferWithoutReset[currentSegmentSize] = (char) ((i_decodeUTF8_4 >> 10) | GeneratorBase.SURR1_FIRST);
                            if (i8 >= bufferWithoutReset.length) {
                                bufferWithoutReset = this._textBuffer.finishCurrentSegment();
                                currentSegmentSize = 0;
                            } else {
                                currentSegmentSize = i8;
                            }
                            i_decodeFastCharEscape = (i_decodeUTF8_4 & 1023) | 56320;
                        }
                        if (currentSegmentSize >= bufferWithoutReset.length) {
                            bufferWithoutReset = this._textBuffer.finishCurrentSegment();
                        } else {
                            i3 = currentSegmentSize;
                        }
                        currentSegmentSize = i3 + 1;
                        bufferWithoutReset[i3] = (char) i_decodeFastCharEscape;
                        break;
                    }
                    this._inputPtr = i4;
                    this._textBuffer.setCurrentLength(currentSegmentSize);
                    return _valueComplete(JsonToken.VALUE_STRING);
                }
                bufferWithoutReset[currentSegmentSize] = (char) i_decodeFastCharEscape;
                currentSegmentSize++;
                i = i4;
            }
        }
        this._inputPtr = i;
        this._minorState = 40;
        this._textBuffer.setCurrentLength(currentSegmentSize);
        JsonToken jsonToken2 = JsonToken.NOT_AVAILABLE;
        this._currToken = jsonToken2;
        return jsonToken2;
    }

    protected JsonToken _startAposString() throws IOException {
        int i = this._inputPtr;
        char[] cArrEmptyAndGetCurrentSegment = this._textBuffer.emptyAndGetCurrentSegment();
        int[] iArr = _icUTF8;
        int iMin = Math.min(this._inputEnd, cArrEmptyAndGetCurrentSegment.length + i);
        byte[] bArr = this._inputBuffer;
        int i2 = 0;
        while (i < iMin) {
            int i3 = bArr[i] & 255;
            if (i3 == 39) {
                this._inputPtr = i + 1;
                this._textBuffer.setCurrentLength(i2);
                return _valueComplete(JsonToken.VALUE_STRING);
            }
            if (iArr[i3] != 0) {
                break;
            }
            i++;
            cArrEmptyAndGetCurrentSegment[i2] = (char) i3;
            i2++;
        }
        this._textBuffer.setCurrentLength(i2);
        this._inputPtr = i;
        return _finishAposString();
    }

    private final JsonToken _finishAposString() throws IOException {
        int[] iArr = _icUTF8;
        byte[] bArr = this._inputBuffer;
        char[] bufferWithoutReset = this._textBuffer.getBufferWithoutReset();
        int currentSegmentSize = this._textBuffer.getCurrentSegmentSize();
        int i = this._inputPtr;
        int i2 = this._inputEnd - 5;
        while (i < this._inputEnd) {
            int i3 = 0;
            if (currentSegmentSize >= bufferWithoutReset.length) {
                bufferWithoutReset = this._textBuffer.finishCurrentSegment();
                currentSegmentSize = 0;
            }
            int iMin = Math.min(this._inputEnd, (bufferWithoutReset.length - currentSegmentSize) + i);
            while (i < iMin) {
                int i4 = i + 1;
                int i_decodeFastCharEscape = bArr[i] & 255;
                int i5 = iArr[i_decodeFastCharEscape];
                if (i5 != 0 && i_decodeFastCharEscape != 34) {
                    if (i4 >= i2) {
                        this._inputPtr = i4;
                        this._textBuffer.setCurrentLength(currentSegmentSize);
                        if (!_decodeSplitMultiByte(i_decodeFastCharEscape, iArr[i_decodeFastCharEscape], i4 < this._inputEnd)) {
                            this._minorStateAfterSplit = 45;
                            JsonToken jsonToken = JsonToken.NOT_AVAILABLE;
                            this._currToken = jsonToken;
                            return jsonToken;
                        }
                        bufferWithoutReset = this._textBuffer.getBufferWithoutReset();
                        currentSegmentSize = this._textBuffer.getCurrentSegmentSize();
                        i = this._inputPtr;
                        break;
                    }
                    if (i5 == 1) {
                        this._inputPtr = i4;
                        i_decodeFastCharEscape = _decodeFastCharEscape();
                        i = this._inputPtr;
                    } else if (i5 == 2) {
                        i += 2;
                        i_decodeFastCharEscape = _decodeUTF8_2(i_decodeFastCharEscape, this._inputBuffer[i4]);
                    } else if (i5 == 3) {
                        byte[] bArr2 = this._inputBuffer;
                        int i6 = i + 2;
                        i += 3;
                        i_decodeFastCharEscape = _decodeUTF8_3(i_decodeFastCharEscape, bArr2[i4], bArr2[i6]);
                    } else if (i5 != 4) {
                        if (i_decodeFastCharEscape < 32) {
                            _throwUnquotedSpace(i_decodeFastCharEscape, "string value");
                        } else {
                            _reportInvalidChar(i_decodeFastCharEscape);
                        }
                        i = i4;
                    } else {
                        byte[] bArr3 = this._inputBuffer;
                        byte b = bArr3[i4];
                        int i7 = i + 3;
                        byte b2 = bArr3[i + 2];
                        i += 4;
                        int i_decodeUTF8_4 = _decodeUTF8_4(i_decodeFastCharEscape, b, b2, bArr3[i7]);
                        int i8 = currentSegmentSize + 1;
                        bufferWithoutReset[currentSegmentSize] = (char) ((i_decodeUTF8_4 >> 10) | GeneratorBase.SURR1_FIRST);
                        if (i8 >= bufferWithoutReset.length) {
                            bufferWithoutReset = this._textBuffer.finishCurrentSegment();
                            currentSegmentSize = 0;
                        } else {
                            currentSegmentSize = i8;
                        }
                        i_decodeFastCharEscape = (i_decodeUTF8_4 & 1023) | 56320;
                    }
                    if (currentSegmentSize >= bufferWithoutReset.length) {
                        bufferWithoutReset = this._textBuffer.finishCurrentSegment();
                    } else {
                        i3 = currentSegmentSize;
                    }
                    currentSegmentSize = i3 + 1;
                    bufferWithoutReset[i3] = (char) i_decodeFastCharEscape;
                    break;
                }
                if (i_decodeFastCharEscape == 39) {
                    this._inputPtr = i4;
                    this._textBuffer.setCurrentLength(currentSegmentSize);
                    return _valueComplete(JsonToken.VALUE_STRING);
                }
                bufferWithoutReset[currentSegmentSize] = (char) i_decodeFastCharEscape;
                currentSegmentSize++;
                i = i4;
            }
        }
        this._inputPtr = i;
        this._minorState = 45;
        this._textBuffer.setCurrentLength(currentSegmentSize);
        JsonToken jsonToken2 = JsonToken.NOT_AVAILABLE;
        this._currToken = jsonToken2;
        return jsonToken2;
    }

    private final boolean _decodeSplitMultiByte(int i, int i2, boolean z) throws IOException {
        if (i2 == 1) {
            int i_decodeSplitEscaped = _decodeSplitEscaped(0, -1);
            if (i_decodeSplitEscaped < 0) {
                this._minorState = 41;
                return false;
            }
            this._textBuffer.append((char) i_decodeSplitEscaped);
            return true;
        }
        if (i2 == 2) {
            if (z) {
                byte[] bArr = this._inputBuffer;
                int i3 = this._inputPtr;
                this._inputPtr = i3 + 1;
                this._textBuffer.append((char) _decodeUTF8_2(i, bArr[i3]));
                return true;
            }
            this._minorState = 42;
            this._pending32 = i;
            return false;
        }
        if (i2 == 3) {
            int i4 = i & 15;
            if (z) {
                byte[] bArr2 = this._inputBuffer;
                int i5 = this._inputPtr;
                this._inputPtr = i5 + 1;
                return _decodeSplitUTF8_3(i4, 1, bArr2[i5]);
            }
            this._minorState = 43;
            this._pending32 = i4;
            this._pendingBytes = 1;
            return false;
        }
        if (i2 != 4) {
            if (i < 32) {
                _throwUnquotedSpace(i, "string value");
            } else {
                _reportInvalidChar(i);
            }
            this._textBuffer.append((char) i);
            return true;
        }
        int i6 = i & 7;
        if (z) {
            byte[] bArr3 = this._inputBuffer;
            int i7 = this._inputPtr;
            this._inputPtr = i7 + 1;
            return _decodeSplitUTF8_4(i6, 1, bArr3[i7]);
        }
        this._pending32 = i6;
        this._pendingBytes = 1;
        this._minorState = 44;
        return false;
    }

    private final boolean _decodeSplitUTF8_3(int i, int i2, int i3) throws IOException {
        if (i2 == 1) {
            if ((i3 & 192) != 128) {
                _reportInvalidOther(i3 & 255, this._inputPtr);
            }
            i = (i << 6) | (i3 & 63);
            if (this._inputPtr >= this._inputEnd) {
                this._minorState = 43;
                this._pending32 = i;
                this._pendingBytes = 2;
                return false;
            }
            byte[] bArr = this._inputBuffer;
            int i4 = this._inputPtr;
            this._inputPtr = i4 + 1;
            i3 = bArr[i4];
        }
        if ((i3 & 192) != 128) {
            _reportInvalidOther(i3 & 255, this._inputPtr);
        }
        this._textBuffer.append((char) ((i << 6) | (i3 & 63)));
        return true;
    }

    private final boolean _decodeSplitUTF8_4(int i, int i2, int i3) throws IOException {
        if (i2 == 1) {
            if ((i3 & 192) != 128) {
                _reportInvalidOther(i3 & 255, this._inputPtr);
            }
            i = (i << 6) | (i3 & 63);
            if (this._inputPtr >= this._inputEnd) {
                this._minorState = 44;
                this._pending32 = i;
                this._pendingBytes = 2;
                return false;
            }
            byte[] bArr = this._inputBuffer;
            int i4 = this._inputPtr;
            this._inputPtr = i4 + 1;
            i3 = bArr[i4];
            i2 = 2;
        }
        if (i2 == 2) {
            if ((i3 & 192) != 128) {
                _reportInvalidOther(i3 & 255, this._inputPtr);
            }
            i = (i << 6) | (i3 & 63);
            if (this._inputPtr >= this._inputEnd) {
                this._minorState = 44;
                this._pending32 = i;
                this._pendingBytes = 3;
                return false;
            }
            byte[] bArr2 = this._inputBuffer;
            int i5 = this._inputPtr;
            this._inputPtr = i5 + 1;
            i3 = bArr2[i5];
        }
        if ((i3 & 192) != 128) {
            _reportInvalidOther(i3 & 255, this._inputPtr);
        }
        int i6 = ((i << 6) | (i3 & 63)) - 65536;
        this._textBuffer.append((char) ((i6 >> 10) | GeneratorBase.SURR1_FIRST));
        this._textBuffer.append((char) ((i6 & 1023) | 56320));
        return true;
    }

    private final int _decodeCharEscape() throws IOException {
        if (this._inputEnd - this._inputPtr < 5) {
            return _decodeSplitEscaped(0, -1);
        }
        return _decodeFastCharEscape();
    }

    private final int _decodeFastCharEscape() throws IOException {
        byte[] bArr = this._inputBuffer;
        int i = this._inputPtr;
        this._inputPtr = i + 1;
        byte b = bArr[i];
        if (b == 34 || b == 47 || b == 92) {
            return (char) b;
        }
        if (b == 98) {
            return 8;
        }
        if (b == 102) {
            return 12;
        }
        if (b == 110) {
            return 10;
        }
        if (b == 114) {
            return 13;
        }
        if (b == 116) {
            return 9;
        }
        if (b != 117) {
            return _handleUnrecognizedCharacterEscape((char) b);
        }
        byte[] bArr2 = this._inputBuffer;
        int i2 = this._inputPtr;
        this._inputPtr = i2 + 1;
        byte b2 = bArr2[i2];
        int iCharToHex = CharTypes.charToHex(b2);
        if (iCharToHex >= 0) {
            byte[] bArr3 = this._inputBuffer;
            int i3 = this._inputPtr;
            this._inputPtr = i3 + 1;
            b2 = bArr3[i3];
            int iCharToHex2 = CharTypes.charToHex(b2);
            if (iCharToHex2 >= 0) {
                int i4 = (iCharToHex << 4) | iCharToHex2;
                byte[] bArr4 = this._inputBuffer;
                int i5 = this._inputPtr;
                this._inputPtr = i5 + 1;
                byte b3 = bArr4[i5];
                int iCharToHex3 = CharTypes.charToHex(b3);
                if (iCharToHex3 >= 0) {
                    int i6 = (i4 << 4) | iCharToHex3;
                    byte[] bArr5 = this._inputBuffer;
                    int i7 = this._inputPtr;
                    this._inputPtr = i7 + 1;
                    b3 = bArr5[i7];
                    int iCharToHex4 = CharTypes.charToHex(b3);
                    if (iCharToHex4 >= 0) {
                        return (i6 << 4) | iCharToHex4;
                    }
                }
                b2 = b3;
            }
        }
        _reportUnexpectedChar(b2 & 255, "expected a hex-digit for character escape sequence");
        return -1;
    }

    private final int _decodeUTF8_2(int i, int i2) throws IOException {
        if ((i2 & 192) != 128) {
            _reportInvalidOther(i2 & 255, this._inputPtr);
        }
        return ((i & 31) << 6) | (i2 & 63);
    }

    private final int _decodeUTF8_3(int i, int i2, int i3) throws IOException {
        int i4 = i & 15;
        if ((i2 & 192) != 128) {
            _reportInvalidOther(i2 & 255, this._inputPtr);
        }
        int i5 = (i4 << 6) | (i2 & 63);
        if ((i3 & 192) != 128) {
            _reportInvalidOther(i3 & 255, this._inputPtr);
        }
        return (i5 << 6) | (i3 & 63);
    }

    private final int _decodeUTF8_4(int i, int i2, int i3, int i4) throws IOException {
        if ((i2 & 192) != 128) {
            _reportInvalidOther(i2 & 255, this._inputPtr);
        }
        int i5 = ((i & 7) << 6) | (i2 & 63);
        if ((i3 & 192) != 128) {
            _reportInvalidOther(i3 & 255, this._inputPtr);
        }
        int i6 = (i5 << 6) | (i3 & 63);
        if ((i4 & 192) != 128) {
            _reportInvalidOther(i4 & 255, this._inputPtr);
        }
        return ((i6 << 6) | (i4 & 63)) - 65536;
    }
}
