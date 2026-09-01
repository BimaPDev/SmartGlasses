package com.fasterxml.jackson.core.filter;

import com.fasterxml.jackson.core.Base64Variant;
import com.fasterxml.jackson.core.JsonGenerator;
import com.fasterxml.jackson.core.JsonStreamContext;
import com.fasterxml.jackson.core.SerializableString;
import com.fasterxml.jackson.core.util.JsonGeneratorDelegate;
import java.io.IOException;
import java.io.InputStream;
import java.io.Reader;
import java.math.BigDecimal;
import java.math.BigInteger;

/* JADX INFO: loaded from: classes.dex */
public class FilteringGeneratorDelegate extends JsonGeneratorDelegate {
    protected boolean _allowMultipleMatches;
    protected TokenFilterContext _filterContext;

    @Deprecated
    protected boolean _includeImmediateParent;
    protected boolean _includePath;
    protected TokenFilter _itemFilter;
    protected int _matchCount;
    protected TokenFilter rootFilter;

    public TokenFilter getFilter() {
        return this.rootFilter;
    }

    public JsonStreamContext getFilterContext() {
        return this._filterContext;
    }

    public int getMatchCount() {
        return this._matchCount;
    }

    @Override // com.fasterxml.jackson.core.util.JsonGeneratorDelegate, com.fasterxml.jackson.core.JsonGenerator
    public JsonStreamContext getOutputContext() {
        return this._filterContext;
    }

    public FilteringGeneratorDelegate(JsonGenerator jsonGenerator, TokenFilter tokenFilter, boolean z, boolean z2) {
        super(jsonGenerator, false);
        this.rootFilter = tokenFilter;
        this._itemFilter = tokenFilter;
        this._filterContext = TokenFilterContext.createRootContext(tokenFilter);
        this._includePath = z;
        this._allowMultipleMatches = z2;
    }

    @Override // com.fasterxml.jackson.core.util.JsonGeneratorDelegate, com.fasterxml.jackson.core.JsonGenerator
    public void writeStartArray() throws IOException {
        TokenFilter tokenFilter = this._itemFilter;
        if (tokenFilter == null) {
            this._filterContext = this._filterContext.createChildArrayContext(null, false);
            return;
        }
        if (tokenFilter == TokenFilter.INCLUDE_ALL) {
            this._filterContext = this._filterContext.createChildArrayContext(this._itemFilter, true);
            this.delegate.writeStartArray();
            return;
        }
        TokenFilter tokenFilterCheckValue = this._filterContext.checkValue(this._itemFilter);
        this._itemFilter = tokenFilterCheckValue;
        if (tokenFilterCheckValue == null) {
            this._filterContext = this._filterContext.createChildArrayContext(null, false);
            return;
        }
        if (tokenFilterCheckValue != TokenFilter.INCLUDE_ALL) {
            this._itemFilter = this._itemFilter.filterStartArray();
        }
        if (this._itemFilter == TokenFilter.INCLUDE_ALL) {
            _checkParentPath();
            this._filterContext = this._filterContext.createChildArrayContext(this._itemFilter, true);
            this.delegate.writeStartArray();
            return;
        }
        this._filterContext = this._filterContext.createChildArrayContext(this._itemFilter, false);
    }

    @Override // com.fasterxml.jackson.core.util.JsonGeneratorDelegate, com.fasterxml.jackson.core.JsonGenerator
    public void writeStartArray(int i) throws IOException {
        TokenFilter tokenFilter = this._itemFilter;
        if (tokenFilter == null) {
            this._filterContext = this._filterContext.createChildArrayContext(null, false);
            return;
        }
        if (tokenFilter == TokenFilter.INCLUDE_ALL) {
            this._filterContext = this._filterContext.createChildArrayContext(this._itemFilter, true);
            this.delegate.writeStartArray(i);
            return;
        }
        TokenFilter tokenFilterCheckValue = this._filterContext.checkValue(this._itemFilter);
        this._itemFilter = tokenFilterCheckValue;
        if (tokenFilterCheckValue == null) {
            this._filterContext = this._filterContext.createChildArrayContext(null, false);
            return;
        }
        if (tokenFilterCheckValue != TokenFilter.INCLUDE_ALL) {
            this._itemFilter = this._itemFilter.filterStartArray();
        }
        if (this._itemFilter == TokenFilter.INCLUDE_ALL) {
            _checkParentPath();
            this._filterContext = this._filterContext.createChildArrayContext(this._itemFilter, true);
            this.delegate.writeStartArray(i);
            return;
        }
        this._filterContext = this._filterContext.createChildArrayContext(this._itemFilter, false);
    }

    @Override // com.fasterxml.jackson.core.util.JsonGeneratorDelegate, com.fasterxml.jackson.core.JsonGenerator
    public void writeStartArray(Object obj) throws IOException {
        TokenFilter tokenFilter = this._itemFilter;
        if (tokenFilter == null) {
            this._filterContext = this._filterContext.createChildArrayContext(null, false);
            return;
        }
        if (tokenFilter == TokenFilter.INCLUDE_ALL) {
            this._filterContext = this._filterContext.createChildArrayContext(this._itemFilter, true);
            this.delegate.writeStartArray(obj);
            return;
        }
        TokenFilter tokenFilterCheckValue = this._filterContext.checkValue(this._itemFilter);
        this._itemFilter = tokenFilterCheckValue;
        if (tokenFilterCheckValue == null) {
            this._filterContext = this._filterContext.createChildArrayContext(null, false);
            return;
        }
        if (tokenFilterCheckValue != TokenFilter.INCLUDE_ALL) {
            this._itemFilter = this._itemFilter.filterStartArray();
        }
        if (this._itemFilter == TokenFilter.INCLUDE_ALL) {
            _checkParentPath();
            this._filterContext = this._filterContext.createChildArrayContext(this._itemFilter, true);
            this.delegate.writeStartArray(obj);
            return;
        }
        this._filterContext = this._filterContext.createChildArrayContext(this._itemFilter, false);
    }

    @Override // com.fasterxml.jackson.core.util.JsonGeneratorDelegate, com.fasterxml.jackson.core.JsonGenerator
    public void writeStartArray(Object obj, int i) throws IOException {
        TokenFilter tokenFilter = this._itemFilter;
        if (tokenFilter == null) {
            this._filterContext = this._filterContext.createChildArrayContext(null, false);
            return;
        }
        if (tokenFilter == TokenFilter.INCLUDE_ALL) {
            this._filterContext = this._filterContext.createChildArrayContext(this._itemFilter, true);
            this.delegate.writeStartArray(obj, i);
            return;
        }
        TokenFilter tokenFilterCheckValue = this._filterContext.checkValue(this._itemFilter);
        this._itemFilter = tokenFilterCheckValue;
        if (tokenFilterCheckValue == null) {
            this._filterContext = this._filterContext.createChildArrayContext(null, false);
            return;
        }
        if (tokenFilterCheckValue != TokenFilter.INCLUDE_ALL) {
            this._itemFilter = this._itemFilter.filterStartArray();
        }
        if (this._itemFilter == TokenFilter.INCLUDE_ALL) {
            _checkParentPath();
            this._filterContext = this._filterContext.createChildArrayContext(this._itemFilter, true);
            this.delegate.writeStartArray(obj, i);
            return;
        }
        this._filterContext = this._filterContext.createChildArrayContext(this._itemFilter, false);
    }

    @Override // com.fasterxml.jackson.core.util.JsonGeneratorDelegate, com.fasterxml.jackson.core.JsonGenerator
    public void writeEndArray() throws IOException {
        TokenFilterContext tokenFilterContextCloseArray = this._filterContext.closeArray(this.delegate);
        this._filterContext = tokenFilterContextCloseArray;
        if (tokenFilterContextCloseArray != null) {
            this._itemFilter = tokenFilterContextCloseArray.getFilter();
        }
    }

    @Override // com.fasterxml.jackson.core.util.JsonGeneratorDelegate, com.fasterxml.jackson.core.JsonGenerator
    public void writeStartObject() throws IOException {
        TokenFilter tokenFilter = this._itemFilter;
        if (tokenFilter == null) {
            this._filterContext = this._filterContext.createChildObjectContext(tokenFilter, false);
            return;
        }
        if (tokenFilter == TokenFilter.INCLUDE_ALL) {
            this._filterContext = this._filterContext.createChildObjectContext(this._itemFilter, true);
            this.delegate.writeStartObject();
            return;
        }
        TokenFilter tokenFilterCheckValue = this._filterContext.checkValue(this._itemFilter);
        if (tokenFilterCheckValue == null) {
            return;
        }
        if (tokenFilterCheckValue != TokenFilter.INCLUDE_ALL) {
            tokenFilterCheckValue = tokenFilterCheckValue.filterStartObject();
        }
        if (tokenFilterCheckValue == TokenFilter.INCLUDE_ALL) {
            _checkParentPath();
            this._filterContext = this._filterContext.createChildObjectContext(tokenFilterCheckValue, true);
            this.delegate.writeStartObject();
            return;
        }
        this._filterContext = this._filterContext.createChildObjectContext(tokenFilterCheckValue, false);
    }

    @Override // com.fasterxml.jackson.core.util.JsonGeneratorDelegate, com.fasterxml.jackson.core.JsonGenerator
    public void writeStartObject(Object obj) throws IOException {
        TokenFilter tokenFilter = this._itemFilter;
        if (tokenFilter == null) {
            this._filterContext = this._filterContext.createChildObjectContext(tokenFilter, false);
            return;
        }
        if (tokenFilter == TokenFilter.INCLUDE_ALL) {
            this._filterContext = this._filterContext.createChildObjectContext(this._itemFilter, true);
            this.delegate.writeStartObject(obj);
            return;
        }
        TokenFilter tokenFilterCheckValue = this._filterContext.checkValue(this._itemFilter);
        if (tokenFilterCheckValue == null) {
            return;
        }
        if (tokenFilterCheckValue != TokenFilter.INCLUDE_ALL) {
            tokenFilterCheckValue = tokenFilterCheckValue.filterStartObject();
        }
        if (tokenFilterCheckValue == TokenFilter.INCLUDE_ALL) {
            _checkParentPath();
            this._filterContext = this._filterContext.createChildObjectContext(tokenFilterCheckValue, true);
            this.delegate.writeStartObject(obj);
            return;
        }
        this._filterContext = this._filterContext.createChildObjectContext(tokenFilterCheckValue, false);
    }

    @Override // com.fasterxml.jackson.core.util.JsonGeneratorDelegate, com.fasterxml.jackson.core.JsonGenerator
    public void writeStartObject(Object obj, int i) throws IOException {
        TokenFilter tokenFilter = this._itemFilter;
        if (tokenFilter == null) {
            this._filterContext = this._filterContext.createChildObjectContext(tokenFilter, false);
            return;
        }
        if (tokenFilter == TokenFilter.INCLUDE_ALL) {
            this._filterContext = this._filterContext.createChildObjectContext(this._itemFilter, true);
            this.delegate.writeStartObject(obj, i);
            return;
        }
        TokenFilter tokenFilterCheckValue = this._filterContext.checkValue(this._itemFilter);
        if (tokenFilterCheckValue == null) {
            return;
        }
        if (tokenFilterCheckValue != TokenFilter.INCLUDE_ALL) {
            tokenFilterCheckValue = tokenFilterCheckValue.filterStartObject();
        }
        if (tokenFilterCheckValue == TokenFilter.INCLUDE_ALL) {
            _checkParentPath();
            this._filterContext = this._filterContext.createChildObjectContext(tokenFilterCheckValue, true);
            this.delegate.writeStartObject(obj, i);
            return;
        }
        this._filterContext = this._filterContext.createChildObjectContext(tokenFilterCheckValue, false);
    }

    @Override // com.fasterxml.jackson.core.util.JsonGeneratorDelegate, com.fasterxml.jackson.core.JsonGenerator
    public void writeEndObject() throws IOException {
        TokenFilterContext tokenFilterContextCloseObject = this._filterContext.closeObject(this.delegate);
        this._filterContext = tokenFilterContextCloseObject;
        if (tokenFilterContextCloseObject != null) {
            this._itemFilter = tokenFilterContextCloseObject.getFilter();
        }
    }

    @Override // com.fasterxml.jackson.core.util.JsonGeneratorDelegate, com.fasterxml.jackson.core.JsonGenerator
    public void writeFieldName(String str) throws IOException {
        TokenFilter fieldName = this._filterContext.setFieldName(str);
        if (fieldName == null) {
            this._itemFilter = null;
            return;
        }
        if (fieldName == TokenFilter.INCLUDE_ALL) {
            this._itemFilter = fieldName;
            this.delegate.writeFieldName(str);
            return;
        }
        TokenFilter tokenFilterIncludeProperty = fieldName.includeProperty(str);
        this._itemFilter = tokenFilterIncludeProperty;
        if (tokenFilterIncludeProperty == TokenFilter.INCLUDE_ALL) {
            _checkPropertyParentPath();
        }
    }

    @Override // com.fasterxml.jackson.core.util.JsonGeneratorDelegate, com.fasterxml.jackson.core.JsonGenerator
    public void writeFieldName(SerializableString serializableString) throws IOException {
        TokenFilter fieldName = this._filterContext.setFieldName(serializableString.getValue());
        if (fieldName == null) {
            this._itemFilter = null;
            return;
        }
        if (fieldName == TokenFilter.INCLUDE_ALL) {
            this._itemFilter = fieldName;
            this.delegate.writeFieldName(serializableString);
            return;
        }
        TokenFilter tokenFilterIncludeProperty = fieldName.includeProperty(serializableString.getValue());
        this._itemFilter = tokenFilterIncludeProperty;
        if (tokenFilterIncludeProperty == TokenFilter.INCLUDE_ALL) {
            _checkPropertyParentPath();
        }
    }

    @Override // com.fasterxml.jackson.core.util.JsonGeneratorDelegate, com.fasterxml.jackson.core.JsonGenerator
    public void writeFieldId(long j) throws IOException {
        writeFieldName(Long.toString(j));
    }

    @Override // com.fasterxml.jackson.core.util.JsonGeneratorDelegate, com.fasterxml.jackson.core.JsonGenerator
    public void writeString(String str) throws IOException {
        TokenFilter tokenFilter = this._itemFilter;
        if (tokenFilter == null) {
            return;
        }
        if (tokenFilter != TokenFilter.INCLUDE_ALL) {
            TokenFilter tokenFilterCheckValue = this._filterContext.checkValue(this._itemFilter);
            if (tokenFilterCheckValue == null) {
                return;
            }
            if (tokenFilterCheckValue != TokenFilter.INCLUDE_ALL && !tokenFilterCheckValue.includeString(str)) {
                return;
            } else {
                _checkParentPath();
            }
        }
        this.delegate.writeString(str);
    }

    @Override // com.fasterxml.jackson.core.util.JsonGeneratorDelegate, com.fasterxml.jackson.core.JsonGenerator
    public void writeString(char[] cArr, int i, int i2) throws IOException {
        TokenFilter tokenFilter = this._itemFilter;
        if (tokenFilter == null) {
            return;
        }
        if (tokenFilter != TokenFilter.INCLUDE_ALL) {
            String str = new String(cArr, i, i2);
            TokenFilter tokenFilterCheckValue = this._filterContext.checkValue(this._itemFilter);
            if (tokenFilterCheckValue == null) {
                return;
            }
            if (tokenFilterCheckValue != TokenFilter.INCLUDE_ALL && !tokenFilterCheckValue.includeString(str)) {
                return;
            } else {
                _checkParentPath();
            }
        }
        this.delegate.writeString(cArr, i, i2);
    }

    @Override // com.fasterxml.jackson.core.util.JsonGeneratorDelegate, com.fasterxml.jackson.core.JsonGenerator
    public void writeString(SerializableString serializableString) throws IOException {
        TokenFilter tokenFilter = this._itemFilter;
        if (tokenFilter == null) {
            return;
        }
        if (tokenFilter != TokenFilter.INCLUDE_ALL) {
            TokenFilter tokenFilterCheckValue = this._filterContext.checkValue(this._itemFilter);
            if (tokenFilterCheckValue == null) {
                return;
            }
            if (tokenFilterCheckValue != TokenFilter.INCLUDE_ALL && !tokenFilterCheckValue.includeString(serializableString.getValue())) {
                return;
            } else {
                _checkParentPath();
            }
        }
        this.delegate.writeString(serializableString);
    }

    @Override // com.fasterxml.jackson.core.util.JsonGeneratorDelegate, com.fasterxml.jackson.core.JsonGenerator
    public void writeString(Reader reader, int i) throws IOException {
        TokenFilter tokenFilter = this._itemFilter;
        if (tokenFilter == null) {
            return;
        }
        if (tokenFilter != TokenFilter.INCLUDE_ALL) {
            TokenFilter tokenFilterCheckValue = this._filterContext.checkValue(this._itemFilter);
            if (tokenFilterCheckValue == null) {
                return;
            }
            if (tokenFilterCheckValue != TokenFilter.INCLUDE_ALL && !tokenFilterCheckValue.includeString(reader, i)) {
                return;
            } else {
                _checkParentPath();
            }
        }
        this.delegate.writeString(reader, i);
    }

    @Override // com.fasterxml.jackson.core.util.JsonGeneratorDelegate, com.fasterxml.jackson.core.JsonGenerator
    public void writeRawUTF8String(byte[] bArr, int i, int i2) throws IOException {
        if (_checkRawValueWrite()) {
            this.delegate.writeRawUTF8String(bArr, i, i2);
        }
    }

    @Override // com.fasterxml.jackson.core.util.JsonGeneratorDelegate, com.fasterxml.jackson.core.JsonGenerator
    public void writeUTF8String(byte[] bArr, int i, int i2) throws IOException {
        if (_checkRawValueWrite()) {
            this.delegate.writeUTF8String(bArr, i, i2);
        }
    }

    @Override // com.fasterxml.jackson.core.util.JsonGeneratorDelegate, com.fasterxml.jackson.core.JsonGenerator
    public void writeRaw(String str) throws IOException {
        if (_checkRawValueWrite()) {
            this.delegate.writeRaw(str);
        }
    }

    @Override // com.fasterxml.jackson.core.util.JsonGeneratorDelegate, com.fasterxml.jackson.core.JsonGenerator
    public void writeRaw(String str, int i, int i2) throws IOException {
        if (_checkRawValueWrite()) {
            this.delegate.writeRaw(str, i, i2);
        }
    }

    @Override // com.fasterxml.jackson.core.util.JsonGeneratorDelegate, com.fasterxml.jackson.core.JsonGenerator
    public void writeRaw(SerializableString serializableString) throws IOException {
        if (_checkRawValueWrite()) {
            this.delegate.writeRaw(serializableString);
        }
    }

    @Override // com.fasterxml.jackson.core.util.JsonGeneratorDelegate, com.fasterxml.jackson.core.JsonGenerator
    public void writeRaw(char[] cArr, int i, int i2) throws IOException {
        if (_checkRawValueWrite()) {
            this.delegate.writeRaw(cArr, i, i2);
        }
    }

    @Override // com.fasterxml.jackson.core.util.JsonGeneratorDelegate, com.fasterxml.jackson.core.JsonGenerator
    public void writeRaw(char c) throws IOException {
        if (_checkRawValueWrite()) {
            this.delegate.writeRaw(c);
        }
    }

    @Override // com.fasterxml.jackson.core.util.JsonGeneratorDelegate, com.fasterxml.jackson.core.JsonGenerator
    public void writeRawValue(String str) throws IOException {
        if (_checkRawValueWrite()) {
            this.delegate.writeRawValue(str);
        }
    }

    @Override // com.fasterxml.jackson.core.util.JsonGeneratorDelegate, com.fasterxml.jackson.core.JsonGenerator
    public void writeRawValue(String str, int i, int i2) throws IOException {
        if (_checkRawValueWrite()) {
            this.delegate.writeRawValue(str, i, i2);
        }
    }

    @Override // com.fasterxml.jackson.core.util.JsonGeneratorDelegate, com.fasterxml.jackson.core.JsonGenerator
    public void writeRawValue(char[] cArr, int i, int i2) throws IOException {
        if (_checkRawValueWrite()) {
            this.delegate.writeRawValue(cArr, i, i2);
        }
    }

    @Override // com.fasterxml.jackson.core.util.JsonGeneratorDelegate, com.fasterxml.jackson.core.JsonGenerator
    public void writeBinary(Base64Variant base64Variant, byte[] bArr, int i, int i2) throws IOException {
        if (_checkBinaryWrite()) {
            this.delegate.writeBinary(base64Variant, bArr, i, i2);
        }
    }

    @Override // com.fasterxml.jackson.core.util.JsonGeneratorDelegate, com.fasterxml.jackson.core.JsonGenerator
    public int writeBinary(Base64Variant base64Variant, InputStream inputStream, int i) throws IOException {
        if (_checkBinaryWrite()) {
            return this.delegate.writeBinary(base64Variant, inputStream, i);
        }
        return -1;
    }

    @Override // com.fasterxml.jackson.core.util.JsonGeneratorDelegate, com.fasterxml.jackson.core.JsonGenerator
    public void writeNumber(short s) throws IOException {
        TokenFilter tokenFilter = this._itemFilter;
        if (tokenFilter == null) {
            return;
        }
        if (tokenFilter != TokenFilter.INCLUDE_ALL) {
            TokenFilter tokenFilterCheckValue = this._filterContext.checkValue(this._itemFilter);
            if (tokenFilterCheckValue == null) {
                return;
            }
            if (tokenFilterCheckValue != TokenFilter.INCLUDE_ALL && !tokenFilterCheckValue.includeNumber((int) s)) {
                return;
            } else {
                _checkParentPath();
            }
        }
        this.delegate.writeNumber(s);
    }

    @Override // com.fasterxml.jackson.core.util.JsonGeneratorDelegate, com.fasterxml.jackson.core.JsonGenerator
    public void writeNumber(int i) throws IOException {
        TokenFilter tokenFilter = this._itemFilter;
        if (tokenFilter == null) {
            return;
        }
        if (tokenFilter != TokenFilter.INCLUDE_ALL) {
            TokenFilter tokenFilterCheckValue = this._filterContext.checkValue(this._itemFilter);
            if (tokenFilterCheckValue == null) {
                return;
            }
            if (tokenFilterCheckValue != TokenFilter.INCLUDE_ALL && !tokenFilterCheckValue.includeNumber(i)) {
                return;
            } else {
                _checkParentPath();
            }
        }
        this.delegate.writeNumber(i);
    }

    @Override // com.fasterxml.jackson.core.util.JsonGeneratorDelegate, com.fasterxml.jackson.core.JsonGenerator
    public void writeNumber(long j) throws IOException {
        TokenFilter tokenFilter = this._itemFilter;
        if (tokenFilter == null) {
            return;
        }
        if (tokenFilter != TokenFilter.INCLUDE_ALL) {
            TokenFilter tokenFilterCheckValue = this._filterContext.checkValue(this._itemFilter);
            if (tokenFilterCheckValue == null) {
                return;
            }
            if (tokenFilterCheckValue != TokenFilter.INCLUDE_ALL && !tokenFilterCheckValue.includeNumber(j)) {
                return;
            } else {
                _checkParentPath();
            }
        }
        this.delegate.writeNumber(j);
    }

    @Override // com.fasterxml.jackson.core.util.JsonGeneratorDelegate, com.fasterxml.jackson.core.JsonGenerator
    public void writeNumber(BigInteger bigInteger) throws IOException {
        TokenFilter tokenFilter = this._itemFilter;
        if (tokenFilter == null) {
            return;
        }
        if (tokenFilter != TokenFilter.INCLUDE_ALL) {
            TokenFilter tokenFilterCheckValue = this._filterContext.checkValue(this._itemFilter);
            if (tokenFilterCheckValue == null) {
                return;
            }
            if (tokenFilterCheckValue != TokenFilter.INCLUDE_ALL && !tokenFilterCheckValue.includeNumber(bigInteger)) {
                return;
            } else {
                _checkParentPath();
            }
        }
        this.delegate.writeNumber(bigInteger);
    }

    @Override // com.fasterxml.jackson.core.util.JsonGeneratorDelegate, com.fasterxml.jackson.core.JsonGenerator
    public void writeNumber(double d) throws IOException {
        TokenFilter tokenFilter = this._itemFilter;
        if (tokenFilter == null) {
            return;
        }
        if (tokenFilter != TokenFilter.INCLUDE_ALL) {
            TokenFilter tokenFilterCheckValue = this._filterContext.checkValue(this._itemFilter);
            if (tokenFilterCheckValue == null) {
                return;
            }
            if (tokenFilterCheckValue != TokenFilter.INCLUDE_ALL && !tokenFilterCheckValue.includeNumber(d)) {
                return;
            } else {
                _checkParentPath();
            }
        }
        this.delegate.writeNumber(d);
    }

    @Override // com.fasterxml.jackson.core.util.JsonGeneratorDelegate, com.fasterxml.jackson.core.JsonGenerator
    public void writeNumber(float f) throws IOException {
        TokenFilter tokenFilter = this._itemFilter;
        if (tokenFilter == null) {
            return;
        }
        if (tokenFilter != TokenFilter.INCLUDE_ALL) {
            TokenFilter tokenFilterCheckValue = this._filterContext.checkValue(this._itemFilter);
            if (tokenFilterCheckValue == null) {
                return;
            }
            if (tokenFilterCheckValue != TokenFilter.INCLUDE_ALL && !tokenFilterCheckValue.includeNumber(f)) {
                return;
            } else {
                _checkParentPath();
            }
        }
        this.delegate.writeNumber(f);
    }

    @Override // com.fasterxml.jackson.core.util.JsonGeneratorDelegate, com.fasterxml.jackson.core.JsonGenerator
    public void writeNumber(BigDecimal bigDecimal) throws IOException {
        TokenFilter tokenFilter = this._itemFilter;
        if (tokenFilter == null) {
            return;
        }
        if (tokenFilter != TokenFilter.INCLUDE_ALL) {
            TokenFilter tokenFilterCheckValue = this._filterContext.checkValue(this._itemFilter);
            if (tokenFilterCheckValue == null) {
                return;
            }
            if (tokenFilterCheckValue != TokenFilter.INCLUDE_ALL && !tokenFilterCheckValue.includeNumber(bigDecimal)) {
                return;
            } else {
                _checkParentPath();
            }
        }
        this.delegate.writeNumber(bigDecimal);
    }

    @Override // com.fasterxml.jackson.core.util.JsonGeneratorDelegate, com.fasterxml.jackson.core.JsonGenerator
    public void writeNumber(String str) throws UnsupportedOperationException, IOException {
        TokenFilter tokenFilter = this._itemFilter;
        if (tokenFilter == null) {
            return;
        }
        if (tokenFilter != TokenFilter.INCLUDE_ALL) {
            TokenFilter tokenFilterCheckValue = this._filterContext.checkValue(this._itemFilter);
            if (tokenFilterCheckValue == null) {
                return;
            }
            if (tokenFilterCheckValue != TokenFilter.INCLUDE_ALL && !tokenFilterCheckValue.includeRawValue()) {
                return;
            } else {
                _checkParentPath();
            }
        }
        this.delegate.writeNumber(str);
    }

    @Override // com.fasterxml.jackson.core.util.JsonGeneratorDelegate, com.fasterxml.jackson.core.JsonGenerator
    public void writeNumber(char[] cArr, int i, int i2) throws UnsupportedOperationException, IOException {
        TokenFilter tokenFilter = this._itemFilter;
        if (tokenFilter == null) {
            return;
        }
        if (tokenFilter != TokenFilter.INCLUDE_ALL) {
            TokenFilter tokenFilterCheckValue = this._filterContext.checkValue(this._itemFilter);
            if (tokenFilterCheckValue == null) {
                return;
            }
            if (tokenFilterCheckValue != TokenFilter.INCLUDE_ALL && !tokenFilterCheckValue.includeRawValue()) {
                return;
            } else {
                _checkParentPath();
            }
        }
        this.delegate.writeNumber(cArr, i, i2);
    }

    @Override // com.fasterxml.jackson.core.util.JsonGeneratorDelegate, com.fasterxml.jackson.core.JsonGenerator
    public void writeBoolean(boolean z) throws IOException {
        TokenFilter tokenFilter = this._itemFilter;
        if (tokenFilter == null) {
            return;
        }
        if (tokenFilter != TokenFilter.INCLUDE_ALL) {
            TokenFilter tokenFilterCheckValue = this._filterContext.checkValue(this._itemFilter);
            if (tokenFilterCheckValue == null) {
                return;
            }
            if (tokenFilterCheckValue != TokenFilter.INCLUDE_ALL && !tokenFilterCheckValue.includeBoolean(z)) {
                return;
            } else {
                _checkParentPath();
            }
        }
        this.delegate.writeBoolean(z);
    }

    @Override // com.fasterxml.jackson.core.util.JsonGeneratorDelegate, com.fasterxml.jackson.core.JsonGenerator
    public void writeNull() throws IOException {
        TokenFilter tokenFilter = this._itemFilter;
        if (tokenFilter == null) {
            return;
        }
        if (tokenFilter != TokenFilter.INCLUDE_ALL) {
            TokenFilter tokenFilterCheckValue = this._filterContext.checkValue(this._itemFilter);
            if (tokenFilterCheckValue == null) {
                return;
            }
            if (tokenFilterCheckValue != TokenFilter.INCLUDE_ALL && !tokenFilterCheckValue.includeNull()) {
                return;
            } else {
                _checkParentPath();
            }
        }
        this.delegate.writeNull();
    }

    @Override // com.fasterxml.jackson.core.util.JsonGeneratorDelegate, com.fasterxml.jackson.core.JsonGenerator
    public void writeOmittedField(String str) throws IOException {
        if (this._itemFilter != null) {
            this.delegate.writeOmittedField(str);
        }
    }

    @Override // com.fasterxml.jackson.core.util.JsonGeneratorDelegate, com.fasterxml.jackson.core.JsonGenerator
    public void writeObjectId(Object obj) throws IOException {
        if (this._itemFilter != null) {
            this.delegate.writeObjectId(obj);
        }
    }

    @Override // com.fasterxml.jackson.core.util.JsonGeneratorDelegate, com.fasterxml.jackson.core.JsonGenerator
    public void writeObjectRef(Object obj) throws IOException {
        if (this._itemFilter != null) {
            this.delegate.writeObjectRef(obj);
        }
    }

    @Override // com.fasterxml.jackson.core.util.JsonGeneratorDelegate, com.fasterxml.jackson.core.JsonGenerator
    public void writeTypeId(Object obj) throws IOException {
        if (this._itemFilter != null) {
            this.delegate.writeTypeId(obj);
        }
    }

    protected void _checkParentPath() throws IOException {
        this._matchCount++;
        if (this._includePath) {
            this._filterContext.writePath(this.delegate);
        }
        if (this._allowMultipleMatches) {
            return;
        }
        this._filterContext.skipParentChecks();
    }

    protected void _checkPropertyParentPath() throws IOException {
        this._matchCount++;
        if (this._includePath) {
            this._filterContext.writePath(this.delegate);
        } else if (this._includeImmediateParent) {
            this._filterContext.writeImmediatePath(this.delegate);
        }
        if (this._allowMultipleMatches) {
            return;
        }
        this._filterContext.skipParentChecks();
    }

    protected boolean _checkBinaryWrite() throws IOException {
        TokenFilter tokenFilter = this._itemFilter;
        if (tokenFilter == null) {
            return false;
        }
        if (tokenFilter == TokenFilter.INCLUDE_ALL) {
            return true;
        }
        if (!this._itemFilter.includeBinary()) {
            return false;
        }
        _checkParentPath();
        return true;
    }

    protected boolean _checkRawValueWrite() throws IOException {
        TokenFilter tokenFilter = this._itemFilter;
        if (tokenFilter == null) {
            return false;
        }
        if (tokenFilter == TokenFilter.INCLUDE_ALL) {
            return true;
        }
        if (!this._itemFilter.includeRawValue()) {
            return false;
        }
        _checkParentPath();
        return true;
    }
}
