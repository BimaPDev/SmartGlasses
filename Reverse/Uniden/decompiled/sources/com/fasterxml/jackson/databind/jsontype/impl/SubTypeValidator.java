package com.fasterxml.jackson.databind.jsontype.impl;

import com.fasterxml.jackson.databind.BeanDescription;
import com.fasterxml.jackson.databind.DeserializationContext;
import com.fasterxml.jackson.databind.JavaType;
import com.fasterxml.jackson.databind.JsonMappingException;
import java.util.Collections;
import java.util.HashSet;
import java.util.Set;

/* JADX INFO: loaded from: classes.dex */
public class SubTypeValidator {
    protected static final Set<String> DEFAULT_NO_DESER_CLASS_NAMES;
    protected static final String PREFIX_C3P0 = "com.mchange.v2.c3p0.";
    protected static final String PREFIX_SPRING = "org.springframework.";
    private static final SubTypeValidator instance;
    protected Set<String> _cfgIllegalClassNames = DEFAULT_NO_DESER_CLASS_NAMES;

    public static SubTypeValidator instance() {
        return instance;
    }

    static {
        HashSet hashSet = new HashSet();
        hashSet.add("org.apache.commons.collections.functors.InvokerTransformer");
        hashSet.add("org.apache.commons.collections.functors.InstantiateTransformer");
        hashSet.add("org.apache.commons.collections4.functors.InvokerTransformer");
        hashSet.add("org.apache.commons.collections4.functors.InstantiateTransformer");
        hashSet.add("org.codehaus.groovy.runtime.ConvertedClosure");
        hashSet.add("org.codehaus.groovy.runtime.MethodClosure");
        hashSet.add("org.springframework.beans.factory.ObjectFactory");
        hashSet.add("com.sun.org.apache.xalan.internal.xsltc.trax.TemplatesImpl");
        hashSet.add("org.apache.xalan.xsltc.trax.TemplatesImpl");
        hashSet.add("com.sun.rowset.JdbcRowSetImpl");
        hashSet.add("java.util.logging.FileHandler");
        hashSet.add("java.rmi.server.UnicastRemoteObject");
        hashSet.add("org.springframework.beans.factory.config.PropertyPathFactoryBean");
        hashSet.add("org.springframework.aop.config.MethodLocatingFactoryBean");
        hashSet.add("org.springframework.beans.factory.config.BeanReferenceFactoryBean");
        hashSet.add("org.apache.tomcat.dbcp.dbcp2.BasicDataSource");
        hashSet.add("com.sun.org.apache.bcel.internal.util.ClassLoader");
        hashSet.add("org.hibernate.jmx.StatisticsService");
        hashSet.add("org.apache.ibatis.datasource.jndi.JndiDataSourceFactory");
        hashSet.add("org.apache.ibatis.parsing.XPathParser");
        hashSet.add("jodd.db.connection.DataSourceConnectionProvider");
        hashSet.add("oracle.jdbc.connector.OracleManagedConnectionFactory");
        hashSet.add("oracle.jdbc.rowset.OracleJDBCRowSet");
        hashSet.add("org.slf4j.ext.EventData");
        hashSet.add("flex.messaging.util.concurrent.AsynchBeansWorkManagerExecutor");
        hashSet.add("com.sun.deploy.security.ruleset.DRSHelper");
        hashSet.add("org.apache.axis2.jaxws.spi.handler.HandlerResolverImpl");
        hashSet.add("org.jboss.util.propertyeditor.DocumentEditor");
        hashSet.add("org.apache.openjpa.ee.RegistryManagedRuntime");
        hashSet.add("org.apache.openjpa.ee.JNDIManagedRuntime");
        hashSet.add("org.apache.openjpa.ee.WASRegistryManagedRuntime");
        hashSet.add("org.apache.axis2.transport.jms.JMSOutTransportInfo");
        hashSet.add("com.mysql.cj.jdbc.admin.MiniAdmin");
        hashSet.add("ch.qos.logback.core.db.DriverManagerConnectionSource");
        hashSet.add("org.jdom.transform.XSLTransformer");
        hashSet.add("org.jdom2.transform.XSLTransformer");
        hashSet.add("net.sf.ehcache.transaction.manager.DefaultTransactionManagerLookup");
        hashSet.add("net.sf.ehcache.hibernate.EhcacheJtaTransactionManagerLookup");
        hashSet.add("ch.qos.logback.core.db.JNDIConnectionSource");
        hashSet.add("com.zaxxer.hikari.HikariConfig");
        hashSet.add("com.zaxxer.hikari.HikariDataSource");
        hashSet.add("org.apache.cxf.jaxrs.provider.XSLTJaxbProvider");
        hashSet.add("org.apache.commons.configuration.JNDIConfiguration");
        hashSet.add("org.apache.commons.configuration2.JNDIConfiguration");
        hashSet.add("org.apache.xalan.lib.sql.JNDIConnectionPool");
        hashSet.add("com.sun.org.apache.xalan.internal.lib.sql.JNDIConnectionPool");
        hashSet.add("org.apache.commons.dbcp.datasources.PerUserPoolDataSource");
        hashSet.add("org.apache.commons.dbcp.datasources.SharedPoolDataSource");
        hashSet.add("com.p6spy.engine.spy.P6DataSource");
        hashSet.add("org.apache.log4j.receivers.db.DriverManagerConnectionSource");
        hashSet.add("org.apache.log4j.receivers.db.JNDIConnectionSource");
        hashSet.add("net.sf.ehcache.transaction.manager.selector.GenericJndiSelector");
        hashSet.add("net.sf.ehcache.transaction.manager.selector.GlassfishSelector");
        hashSet.add("org.apache.xbean.propertyeditor.JndiConverter");
        hashSet.add("org.apache.hadoop.shaded.com.zaxxer.hikari.HikariConfig");
        hashSet.add("com.ibatis.sqlmap.engine.transaction.jta.JtaTransactionConfig");
        hashSet.add("br.com.anteros.dbcp.AnterosDBCPConfig");
        hashSet.add("javax.swing.JEditorPane");
        hashSet.add("org.apache.shiro.realm.jndi.JndiRealmFactory");
        hashSet.add("org.apache.shiro.jndi.JndiObjectFactory");
        hashSet.add("org.apache.ignite.cache.jta.jndi.CacheJndiTmLookup");
        hashSet.add("org.apache.ignite.cache.jta.jndi.CacheJndiTmFactory");
        hashSet.add("org.quartz.utils.JNDIConnectionProvider");
        hashSet.add("org.apache.aries.transaction.jms.internal.XaPooledConnectionFactory");
        hashSet.add("org.apache.aries.transaction.jms.RecoverablePooledConnectionFactory");
        hashSet.add("com.caucho.config.types.ResourceRef");
        hashSet.add("org.aoju.bus.proxy.provider.RmiProvider");
        hashSet.add("org.aoju.bus.proxy.provider.remoting.RmiProvider");
        hashSet.add("org.apache.activemq.ActiveMQConnectionFactory");
        hashSet.add("org.apache.activemq.ActiveMQXAConnectionFactory");
        hashSet.add("org.apache.activemq.spring.ActiveMQConnectionFactory");
        hashSet.add("org.apache.activemq.spring.ActiveMQXAConnectionFactory");
        hashSet.add("org.apache.activemq.pool.JcaPooledConnectionFactory");
        hashSet.add("org.apache.activemq.pool.PooledConnectionFactory");
        hashSet.add("org.apache.activemq.pool.XaPooledConnectionFactory");
        hashSet.add("org.apache.activemq.jms.pool.XaPooledConnectionFactory");
        hashSet.add("org.apache.activemq.jms.pool.JcaPooledConnectionFactory");
        hashSet.add("org.apache.commons.proxy.provider.remoting.RmiProvider");
        hashSet.add("org.apache.commons.jelly.impl.Embedded");
        hashSet.add("oadd.org.apache.xalan.lib.sql.JNDIConnectionPool");
        hashSet.add("oracle.jms.AQjmsQueueConnectionFactory");
        hashSet.add("oracle.jms.AQjmsXATopicConnectionFactory");
        hashSet.add("oracle.jms.AQjmsTopicConnectionFactory");
        hashSet.add("oracle.jms.AQjmsXAQueueConnectionFactory");
        hashSet.add("oracle.jms.AQjmsXAConnectionFactory");
        hashSet.add("org.jsecurity.realm.jndi.JndiRealmFactory");
        DEFAULT_NO_DESER_CLASS_NAMES = Collections.unmodifiableSet(hashSet);
        instance = new SubTypeValidator();
    }

    protected SubTypeValidator() {
    }

    public void validateSubType(DeserializationContext deserializationContext, JavaType javaType, BeanDescription beanDescription) throws JsonMappingException {
        Class<?> rawClass = javaType.getRawClass();
        String name = rawClass.getName();
        if (!this._cfgIllegalClassNames.contains(name)) {
            if (rawClass.isInterface()) {
                return;
            }
            if (name.startsWith(PREFIX_SPRING)) {
                while (rawClass != null && rawClass != Object.class) {
                    String simpleName = rawClass.getSimpleName();
                    if (!"AbstractPointcutAdvisor".equals(simpleName) && !"AbstractApplicationContext".equals(simpleName)) {
                        rawClass = rawClass.getSuperclass();
                    }
                }
                return;
            }
            if (!name.startsWith(PREFIX_C3P0) || !name.endsWith("DataSource")) {
                return;
            }
        }
        deserializationContext.reportBadTypeDefinition(beanDescription, "Illegal type (%s) to deserialize: prevented for security reasons", name);
    }
}
