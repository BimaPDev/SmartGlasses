package com.fasterxml.jackson.databind.introspect;

import com.fasterxml.jackson.databind.util.Annotations;
import java.lang.annotation.Annotation;
import java.util.Collections;
import java.util.HashMap;

/* JADX INFO: loaded from: classes.dex */
public final class AnnotationMap implements Annotations {
    protected HashMap<Class<?>, Annotation> _annotations;

    public AnnotationMap() {
    }

    /* JADX INFO: renamed from: of */
    public static AnnotationMap m83of(Class<?> cls, Annotation annotation) {
        HashMap map = new HashMap(4);
        map.put(cls, annotation);
        return new AnnotationMap(map);
    }

    AnnotationMap(HashMap<Class<?>, Annotation> map) {
        this._annotations = map;
    }

    @Override // com.fasterxml.jackson.databind.util.Annotations
    public <A extends Annotation> A get(Class<A> cls) {
        HashMap<Class<?>, Annotation> map = this._annotations;
        if (map == null) {
            return null;
        }
        return (A) map.get(cls);
    }

    @Override // com.fasterxml.jackson.databind.util.Annotations
    public boolean has(Class<?> cls) {
        HashMap<Class<?>, Annotation> map = this._annotations;
        if (map == null) {
            return false;
        }
        return map.containsKey(cls);
    }

    @Override // com.fasterxml.jackson.databind.util.Annotations
    public boolean hasOneOf(Class<? extends Annotation>[] clsArr) {
        if (this._annotations != null) {
            for (Class<? extends Annotation> cls : clsArr) {
                if (this._annotations.containsKey(cls)) {
                    return true;
                }
            }
        }
        return false;
    }

    public Iterable<Annotation> annotations() {
        HashMap<Class<?>, Annotation> map = this._annotations;
        if (map == null || map.size() == 0) {
            return Collections.emptyList();
        }
        return this._annotations.values();
    }

    public static AnnotationMap merge(AnnotationMap annotationMap, AnnotationMap annotationMap2) {
        HashMap<Class<?>, Annotation> map;
        HashMap<Class<?>, Annotation> map2;
        if (annotationMap == null || (map = annotationMap._annotations) == null || map.isEmpty()) {
            return annotationMap2;
        }
        if (annotationMap2 == null || (map2 = annotationMap2._annotations) == null || map2.isEmpty()) {
            return annotationMap;
        }
        HashMap map3 = new HashMap();
        for (Annotation annotation : annotationMap2._annotations.values()) {
            map3.put(annotation.annotationType(), annotation);
        }
        for (Annotation annotation2 : annotationMap._annotations.values()) {
            map3.put(annotation2.annotationType(), annotation2);
        }
        return new AnnotationMap(map3);
    }

    @Override // com.fasterxml.jackson.databind.util.Annotations
    public int size() {
        HashMap<Class<?>, Annotation> map = this._annotations;
        if (map == null) {
            return 0;
        }
        return map.size();
    }

    public boolean addIfNotPresent(Annotation annotation) {
        HashMap<Class<?>, Annotation> map = this._annotations;
        if (map != null && map.containsKey(annotation.annotationType())) {
            return false;
        }
        _add(annotation);
        return true;
    }

    public boolean add(Annotation annotation) {
        return _add(annotation);
    }

    public String toString() {
        HashMap<Class<?>, Annotation> map = this._annotations;
        return map == null ? "[null]" : map.toString();
    }

    protected final boolean _add(Annotation annotation) {
        if (this._annotations == null) {
            this._annotations = new HashMap<>();
        }
        Annotation annotationPut = this._annotations.put(annotation.annotationType(), annotation);
        return annotationPut == null || !annotationPut.equals(annotation);
    }
}
