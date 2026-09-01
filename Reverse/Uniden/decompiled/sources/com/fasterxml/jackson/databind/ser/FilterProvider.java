package com.fasterxml.jackson.databind.ser;

import com.fasterxml.jackson.databind.ser.impl.SimpleBeanPropertyFilter;

/* JADX INFO: loaded from: classes.dex */
public abstract class FilterProvider {
    @Deprecated
    public abstract BeanPropertyFilter findFilter(Object obj);

    public PropertyFilter findPropertyFilter(Object obj, Object obj2) {
        BeanPropertyFilter beanPropertyFilterFindFilter = findFilter(obj);
        if (beanPropertyFilterFindFilter == null) {
            return null;
        }
        return SimpleBeanPropertyFilter.from(beanPropertyFilterFindFilter);
    }
}
