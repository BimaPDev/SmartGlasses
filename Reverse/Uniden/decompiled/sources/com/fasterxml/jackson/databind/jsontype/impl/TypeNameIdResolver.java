package com.fasterxml.jackson.databind.jsontype.impl;

import com.fasterxml.jackson.annotation.JsonTypeInfo;
import com.fasterxml.jackson.databind.DatabindContext;
import com.fasterxml.jackson.databind.JavaType;
import com.fasterxml.jackson.databind.MapperFeature;
import com.fasterxml.jackson.databind.cfg.MapperConfig;
import com.fasterxml.jackson.databind.jsontype.NamedType;
import java.util.Collection;
import java.util.HashMap;
import java.util.Map;
import java.util.TreeSet;
import java.util.concurrent.ConcurrentHashMap;

/* JADX INFO: loaded from: classes.dex */
public class TypeNameIdResolver extends TypeIdResolverBase {
    protected final boolean _caseInsensitive;
    protected final MapperConfig<?> _config;
    protected final Map<String, JavaType> _idToType;
    protected final ConcurrentHashMap<String, String> _typeToId;

    protected TypeNameIdResolver(MapperConfig<?> mapperConfig, JavaType javaType, ConcurrentHashMap<String, String> concurrentHashMap, HashMap<String, JavaType> map) {
        super(javaType, mapperConfig.getTypeFactory());
        this._config = mapperConfig;
        this._typeToId = concurrentHashMap;
        this._idToType = map;
        this._caseInsensitive = mapperConfig.isEnabled(MapperFeature.ACCEPT_CASE_INSENSITIVE_VALUES);
    }

    public static TypeNameIdResolver construct(MapperConfig<?> mapperConfig, JavaType javaType, Collection<NamedType> collection, boolean z, boolean z2) {
        HashMap map;
        ConcurrentHashMap concurrentHashMap;
        if (z == z2) {
            throw new IllegalArgumentException();
        }
        if (z) {
            concurrentHashMap = new ConcurrentHashMap();
            map = null;
        } else {
            map = new HashMap();
            concurrentHashMap = new ConcurrentHashMap(4);
        }
        boolean zIsEnabled = mapperConfig.isEnabled(MapperFeature.ACCEPT_CASE_INSENSITIVE_VALUES);
        if (collection != null) {
            for (NamedType namedType : collection) {
                Class<?> type = namedType.getType();
                String name = namedType.hasName() ? namedType.getName() : _defaultTypeId(type);
                if (z) {
                    concurrentHashMap.put(type.getName(), name);
                }
                if (z2) {
                    if (zIsEnabled) {
                        name = name.toLowerCase();
                    }
                    JavaType javaType2 = (JavaType) map.get(name);
                    if (javaType2 == null || !type.isAssignableFrom(javaType2.getRawClass())) {
                        map.put(name, mapperConfig.constructType(type));
                    }
                }
            }
        }
        return new TypeNameIdResolver(mapperConfig, javaType, concurrentHashMap, map);
    }

    @Override // com.fasterxml.jackson.databind.jsontype.TypeIdResolver
    public JsonTypeInfo.EnumC0999Id getMechanism() {
        return JsonTypeInfo.EnumC0999Id.NAME;
    }

    @Override // com.fasterxml.jackson.databind.jsontype.TypeIdResolver
    public String idFromValue(Object obj) {
        return idFromClass(obj.getClass());
    }

    protected String idFromClass(Class<?> cls) {
        if (cls == null) {
            return null;
        }
        String name = cls.getName();
        String str_defaultTypeId = this._typeToId.get(name);
        if (str_defaultTypeId == null) {
            Class<?> rawClass = this._typeFactory.constructType(cls).getRawClass();
            if (this._config.isAnnotationProcessingEnabled()) {
                str_defaultTypeId = this._config.getAnnotationIntrospector().findTypeName(this._config.introspectClassAnnotations(rawClass).getClassInfo());
            }
            if (str_defaultTypeId == null) {
                str_defaultTypeId = _defaultTypeId(rawClass);
            }
            this._typeToId.put(name, str_defaultTypeId);
        }
        return str_defaultTypeId;
    }

    @Override // com.fasterxml.jackson.databind.jsontype.TypeIdResolver
    public String idFromValueAndType(Object obj, Class<?> cls) {
        if (obj == null) {
            return idFromClass(cls);
        }
        return idFromValue(obj);
    }

    @Override // com.fasterxml.jackson.databind.jsontype.impl.TypeIdResolverBase, com.fasterxml.jackson.databind.jsontype.TypeIdResolver
    public JavaType typeFromId(DatabindContext databindContext, String str) {
        return _typeFromId(str);
    }

    protected JavaType _typeFromId(String str) {
        if (this._caseInsensitive) {
            str = str.toLowerCase();
        }
        return this._idToType.get(str);
    }

    @Override // com.fasterxml.jackson.databind.jsontype.impl.TypeIdResolverBase, com.fasterxml.jackson.databind.jsontype.TypeIdResolver
    public String getDescForKnownTypeIds() {
        return new TreeSet(this._idToType.keySet()).toString();
    }

    public String toString() {
        return String.format("[%s; id-to-type=%s]", getClass().getName(), this._idToType);
    }

    protected static String _defaultTypeId(Class<?> cls) {
        String name = cls.getName();
        int iLastIndexOf = name.lastIndexOf(46);
        return iLastIndexOf < 0 ? name : name.substring(iLastIndexOf + 1);
    }
}
