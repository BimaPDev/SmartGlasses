package com.fasterxml.jackson.databind.json;

import com.fasterxml.jackson.core.JsonFactory;
import com.fasterxml.jackson.core.Version;
import com.fasterxml.jackson.core.json.JsonReadFeature;
import com.fasterxml.jackson.core.json.JsonWriteFeature;
import com.fasterxml.jackson.databind.ObjectMapper;
import com.fasterxml.jackson.databind.cfg.MapperBuilder;
import com.fasterxml.jackson.databind.cfg.PackageVersion;

/* JADX INFO: loaded from: classes.dex */
public class JsonMapper extends ObjectMapper {
    private static final long serialVersionUID = 1;

    public static class Builder extends MapperBuilder<JsonMapper, Builder> {
        public Builder(JsonMapper jsonMapper) {
            super(jsonMapper);
        }

        public Builder enable(JsonReadFeature... jsonReadFeatureArr) {
            for (JsonReadFeature jsonReadFeature : jsonReadFeatureArr) {
                ((JsonMapper) this._mapper).enable(jsonReadFeature.mappedFeature());
            }
            return this;
        }

        public Builder disable(JsonReadFeature... jsonReadFeatureArr) {
            for (JsonReadFeature jsonReadFeature : jsonReadFeatureArr) {
                ((JsonMapper) this._mapper).disable(jsonReadFeature.mappedFeature());
            }
            return this;
        }

        public Builder configure(JsonReadFeature jsonReadFeature, boolean z) {
            if (z) {
                ((JsonMapper) this._mapper).enable(jsonReadFeature.mappedFeature());
            } else {
                ((JsonMapper) this._mapper).disable(jsonReadFeature.mappedFeature());
            }
            return this;
        }

        public Builder enable(JsonWriteFeature... jsonWriteFeatureArr) {
            for (JsonWriteFeature jsonWriteFeature : jsonWriteFeatureArr) {
                ((JsonMapper) this._mapper).enable(jsonWriteFeature.mappedFeature());
            }
            return this;
        }

        public Builder disable(JsonWriteFeature... jsonWriteFeatureArr) {
            for (JsonWriteFeature jsonWriteFeature : jsonWriteFeatureArr) {
                ((JsonMapper) this._mapper).disable(jsonWriteFeature.mappedFeature());
            }
            return this;
        }

        public Builder configure(JsonWriteFeature jsonWriteFeature, boolean z) {
            if (z) {
                ((JsonMapper) this._mapper).enable(jsonWriteFeature.mappedFeature());
            } else {
                ((JsonMapper) this._mapper).disable(jsonWriteFeature.mappedFeature());
            }
            return this;
        }
    }

    public JsonMapper() {
        this(new JsonFactory());
    }

    public JsonMapper(JsonFactory jsonFactory) {
        super(jsonFactory);
    }

    protected JsonMapper(JsonMapper jsonMapper) {
        super(jsonMapper);
    }

    @Override // com.fasterxml.jackson.databind.ObjectMapper
    public JsonMapper copy() {
        _checkInvalidCopy(JsonMapper.class);
        return new JsonMapper(this);
    }

    public static Builder builder() {
        return new Builder(new JsonMapper());
    }

    public static Builder builder(JsonFactory jsonFactory) {
        return new Builder(new JsonMapper(jsonFactory));
    }

    public Builder rebuild() {
        return new Builder(copy());
    }

    @Override // com.fasterxml.jackson.databind.ObjectMapper, com.fasterxml.jackson.core.ObjectCodec, com.fasterxml.jackson.core.Versioned
    public Version version() {
        return PackageVersion.VERSION;
    }

    @Override // com.fasterxml.jackson.databind.ObjectMapper, com.fasterxml.jackson.core.ObjectCodec
    public JsonFactory getFactory() {
        return this._jsonFactory;
    }

    public boolean isEnabled(JsonReadFeature jsonReadFeature) {
        return isEnabled(jsonReadFeature.mappedFeature());
    }

    public boolean isEnabled(JsonWriteFeature jsonWriteFeature) {
        return isEnabled(jsonWriteFeature.mappedFeature());
    }
}
