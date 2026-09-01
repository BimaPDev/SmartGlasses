package com.fasterxml.jackson.databind.introspect;

import com.fasterxml.jackson.databind.AnnotationIntrospector;
import com.fasterxml.jackson.databind.JavaType;
import com.fasterxml.jackson.databind.type.TypeFactory;
import com.fasterxml.jackson.databind.util.ClassUtil;
import java.lang.annotation.Annotation;
import java.lang.reflect.Method;
import java.lang.reflect.Modifier;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes.dex */
public class AnnotatedMethodCollector extends CollectorBase {
    private final boolean _collectAnnotations;
    private final ClassIntrospector.MixInResolver _mixInResolver;

    AnnotatedMethodCollector(AnnotationIntrospector annotationIntrospector, ClassIntrospector.MixInResolver mixInResolver, boolean z) {
        super(annotationIntrospector);
        this._mixInResolver = annotationIntrospector == null ? null : mixInResolver;
        this._collectAnnotations = z;
    }

    public static AnnotatedMethodMap collectMethods(AnnotationIntrospector annotationIntrospector, TypeResolutionContext typeResolutionContext, ClassIntrospector.MixInResolver mixInResolver, TypeFactory typeFactory, JavaType javaType, List<JavaType> list, Class<?> cls, boolean z) {
        return new AnnotatedMethodCollector(annotationIntrospector, mixInResolver, z).collect(typeFactory, typeResolutionContext, javaType, list, cls);
    }

    AnnotatedMethodMap collect(TypeFactory typeFactory, TypeResolutionContext typeResolutionContext, JavaType javaType, List<JavaType> list, Class<?> cls) {
        Class<?> clsFindMixInClassFor;
        LinkedHashMap linkedHashMap = new LinkedHashMap();
        _addMemberMethods(typeResolutionContext, javaType.getRawClass(), linkedHashMap, cls);
        for (JavaType javaType2 : list) {
            ClassIntrospector.MixInResolver mixInResolver = this._mixInResolver;
            _addMemberMethods(new TypeResolutionContext.Basic(typeFactory, javaType2.getBindings()), javaType2.getRawClass(), linkedHashMap, mixInResolver == null ? null : mixInResolver.findMixInClassFor(javaType2.getRawClass()));
        }
        ClassIntrospector.MixInResolver mixInResolver2 = this._mixInResolver;
        if (mixInResolver2 != null && (clsFindMixInClassFor = mixInResolver2.findMixInClassFor(Object.class)) != null) {
            _addMethodMixIns(typeResolutionContext, javaType.getRawClass(), linkedHashMap, clsFindMixInClassFor);
            if (this._intr != null && !linkedHashMap.isEmpty()) {
                for (Map.Entry<MemberKey, MethodBuilder> entry : linkedHashMap.entrySet()) {
                    MemberKey key = entry.getKey();
                    if ("hashCode".equals(key.getName()) && key.argCount() == 0) {
                        try {
                            Method declaredMethod = Object.class.getDeclaredMethod(key.getName(), new Class[0]);
                            if (declaredMethod != null) {
                                MethodBuilder value = entry.getValue();
                                value.annotations = collectDefaultAnnotations(value.annotations, declaredMethod.getDeclaredAnnotations());
                                value.method = declaredMethod;
                            }
                        } catch (Exception unused) {
                        }
                    }
                }
            }
        }
        if (linkedHashMap.isEmpty()) {
            return new AnnotatedMethodMap();
        }
        LinkedHashMap linkedHashMap2 = new LinkedHashMap(linkedHashMap.size());
        for (Map.Entry<MemberKey, MethodBuilder> entry2 : linkedHashMap.entrySet()) {
            AnnotatedMethod annotatedMethodBuild = entry2.getValue().build();
            if (annotatedMethodBuild != null) {
                linkedHashMap2.put(entry2.getKey(), annotatedMethodBuild);
            }
        }
        return new AnnotatedMethodMap(linkedHashMap2);
    }

    private void _addMemberMethods(TypeResolutionContext typeResolutionContext, Class<?> cls, Map<MemberKey, MethodBuilder> map, Class<?> cls2) {
        if (cls2 != null) {
            _addMethodMixIns(typeResolutionContext, cls, map, cls2);
        }
        if (cls == null) {
            return;
        }
        for (Method method : ClassUtil.getClassMethods(cls)) {
            if (_isIncludableMemberMethod(method)) {
                MemberKey memberKey = new MemberKey(method);
                MethodBuilder methodBuilder = map.get(memberKey);
                if (methodBuilder == null) {
                    map.put(memberKey, new MethodBuilder(typeResolutionContext, method, this._intr == null ? AnnotationCollector.emptyCollector() : collectAnnotations(method.getDeclaredAnnotations())));
                } else {
                    if (this._collectAnnotations) {
                        methodBuilder.annotations = collectDefaultAnnotations(methodBuilder.annotations, method.getDeclaredAnnotations());
                    }
                    Method method2 = methodBuilder.method;
                    if (method2 == null) {
                        methodBuilder.method = method;
                    } else if (Modifier.isAbstract(method2.getModifiers()) && !Modifier.isAbstract(method.getModifiers())) {
                        methodBuilder.method = method;
                        methodBuilder.typeContext = typeResolutionContext;
                    }
                }
            }
        }
    }

    protected void _addMethodMixIns(TypeResolutionContext typeResolutionContext, Class<?> cls, Map<MemberKey, MethodBuilder> map, Class<?> cls2) {
        if (this._intr == null) {
            return;
        }
        Iterator<Class<?>> it = ClassUtil.findRawSuperTypes(cls2, cls, true).iterator();
        while (it.hasNext()) {
            for (Method method : it.next().getDeclaredMethods()) {
                if (_isIncludableMemberMethod(method)) {
                    MemberKey memberKey = new MemberKey(method);
                    MethodBuilder methodBuilder = map.get(memberKey);
                    Annotation[] declaredAnnotations = method.getDeclaredAnnotations();
                    if (methodBuilder == null) {
                        map.put(memberKey, new MethodBuilder(typeResolutionContext, null, collectAnnotations(declaredAnnotations)));
                    } else {
                        methodBuilder.annotations = collectDefaultAnnotations(methodBuilder.annotations, declaredAnnotations);
                    }
                }
            }
        }
    }

    private boolean _isIncludableMemberMethod(Method method) {
        return (Modifier.isStatic(method.getModifiers()) || method.isSynthetic() || method.isBridge() || method.getParameterTypes().length > 2) ? false : true;
    }

    private static final class MethodBuilder {
        public AnnotationCollector annotations;
        public Method method;
        public TypeResolutionContext typeContext;

        public MethodBuilder(TypeResolutionContext typeResolutionContext, Method method, AnnotationCollector annotationCollector) {
            this.typeContext = typeResolutionContext;
            this.method = method;
            this.annotations = annotationCollector;
        }

        public AnnotatedMethod build() {
            if (this.method == null) {
                return null;
            }
            return new AnnotatedMethod(this.typeContext, this.method, this.annotations.asAnnotationMap(), null);
        }
    }
}
