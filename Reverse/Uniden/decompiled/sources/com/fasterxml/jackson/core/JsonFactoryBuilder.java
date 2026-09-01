package com.fasterxml.jackson.core;

import com.fasterxml.jackson.core.json.JsonReadFeature;
import com.fasterxml.jackson.core.json.JsonWriteFeature;
import com.fasterxml.jackson.core.p003io.CharacterEscapes;
import com.fasterxml.jackson.core.p003io.SerializedString;

/* JADX INFO: loaded from: classes.dex */
public class JsonFactoryBuilder extends TSFBuilder<JsonFactory, JsonFactoryBuilder> {
    protected CharacterEscapes _characterEscapes;
    protected int _maximumNonEscapedChar;
    protected char _quoteChar;
    protected SerializableString _rootValueSeparator;

    public JsonFactoryBuilder characterEscapes(CharacterEscapes characterEscapes) {
        this._characterEscapes = characterEscapes;
        return this;
    }

    public CharacterEscapes characterEscapes() {
        return this._characterEscapes;
    }

    public int highestNonEscapedChar() {
        return this._maximumNonEscapedChar;
    }

    public char quoteChar() {
        return this._quoteChar;
    }

    public JsonFactoryBuilder rootValueSeparator(SerializableString serializableString) {
        this._rootValueSeparator = serializableString;
        return this;
    }

    public SerializableString rootValueSeparator() {
        return this._rootValueSeparator;
    }

    public JsonFactoryBuilder() {
        this._quoteChar = '\"';
        this._rootValueSeparator = JsonFactory.DEFAULT_ROOT_VALUE_SEPARATOR;
        this._maximumNonEscapedChar = 0;
    }

    public JsonFactoryBuilder(JsonFactory jsonFactory) {
        super(jsonFactory);
        this._quoteChar = '\"';
        this._characterEscapes = jsonFactory.getCharacterEscapes();
        this._rootValueSeparator = jsonFactory._rootValueSeparator;
        this._maximumNonEscapedChar = jsonFactory._maximumNonEscapedChar;
    }

    @Override // com.fasterxml.jackson.core.TSFBuilder
    public JsonFactoryBuilder enable(JsonReadFeature jsonReadFeature) {
        _legacyEnable(jsonReadFeature.mappedFeature());
        return this;
    }

    @Override // com.fasterxml.jackson.core.TSFBuilder
    public JsonFactoryBuilder enable(JsonReadFeature jsonReadFeature, JsonReadFeature... jsonReadFeatureArr) {
        _legacyEnable(jsonReadFeature.mappedFeature());
        enable(jsonReadFeature);
        for (JsonReadFeature jsonReadFeature2 : jsonReadFeatureArr) {
            _legacyEnable(jsonReadFeature2.mappedFeature());
        }
        return this;
    }

    @Override // com.fasterxml.jackson.core.TSFBuilder
    public JsonFactoryBuilder disable(JsonReadFeature jsonReadFeature) {
        _legacyDisable(jsonReadFeature.mappedFeature());
        return this;
    }

    @Override // com.fasterxml.jackson.core.TSFBuilder
    public JsonFactoryBuilder disable(JsonReadFeature jsonReadFeature, JsonReadFeature... jsonReadFeatureArr) {
        _legacyDisable(jsonReadFeature.mappedFeature());
        for (JsonReadFeature jsonReadFeature2 : jsonReadFeatureArr) {
            _legacyEnable(jsonReadFeature2.mappedFeature());
        }
        return this;
    }

    @Override // com.fasterxml.jackson.core.TSFBuilder
    public JsonFactoryBuilder configure(JsonReadFeature jsonReadFeature, boolean z) {
        return z ? enable(jsonReadFeature) : disable(jsonReadFeature);
    }

    @Override // com.fasterxml.jackson.core.TSFBuilder
    public JsonFactoryBuilder enable(JsonWriteFeature jsonWriteFeature) {
        JsonGenerator.Feature featureMappedFeature = jsonWriteFeature.mappedFeature();
        if (featureMappedFeature != null) {
            _legacyEnable(featureMappedFeature);
        }
        return this;
    }

    @Override // com.fasterxml.jackson.core.TSFBuilder
    public JsonFactoryBuilder enable(JsonWriteFeature jsonWriteFeature, JsonWriteFeature... jsonWriteFeatureArr) {
        _legacyEnable(jsonWriteFeature.mappedFeature());
        for (JsonWriteFeature jsonWriteFeature2 : jsonWriteFeatureArr) {
            _legacyEnable(jsonWriteFeature2.mappedFeature());
        }
        return this;
    }

    @Override // com.fasterxml.jackson.core.TSFBuilder
    public JsonFactoryBuilder disable(JsonWriteFeature jsonWriteFeature) {
        _legacyDisable(jsonWriteFeature.mappedFeature());
        return this;
    }

    @Override // com.fasterxml.jackson.core.TSFBuilder
    public JsonFactoryBuilder disable(JsonWriteFeature jsonWriteFeature, JsonWriteFeature... jsonWriteFeatureArr) {
        _legacyDisable(jsonWriteFeature.mappedFeature());
        for (JsonWriteFeature jsonWriteFeature2 : jsonWriteFeatureArr) {
            _legacyDisable(jsonWriteFeature2.mappedFeature());
        }
        return this;
    }

    @Override // com.fasterxml.jackson.core.TSFBuilder
    public JsonFactoryBuilder configure(JsonWriteFeature jsonWriteFeature, boolean z) {
        return z ? enable(jsonWriteFeature) : disable(jsonWriteFeature);
    }

    public JsonFactoryBuilder rootValueSeparator(String str) {
        this._rootValueSeparator = str == null ? null : new SerializedString(str);
        return this;
    }

    public JsonFactoryBuilder highestNonEscapedChar(int i) {
        this._maximumNonEscapedChar = i <= 0 ? 0 : Math.max(127, i);
        return this;
    }

    public JsonFactoryBuilder quoteChar(char c) {
        if (c > 127) {
            throw new IllegalArgumentException("Can only use Unicode characters up to 0x7F as quote characters");
        }
        this._quoteChar = c;
        return this;
    }

    @Override // com.fasterxml.jackson.core.TSFBuilder
    public JsonFactory build() {
        return new JsonFactory(this);
    }
}
