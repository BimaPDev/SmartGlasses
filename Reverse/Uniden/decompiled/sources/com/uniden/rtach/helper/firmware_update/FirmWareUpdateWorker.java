package com.uniden.rtach.helper.firmware_update;

import android.bluetooth.BluetoothGatt;
import android.bluetooth.BluetoothGattCharacteristic;
import android.bluetooth.BluetoothGattDescriptor;
import android.bluetooth.BluetoothGattService;
import android.content.Context;
import android.content.SharedPreferences;
import android.os.Build;
import android.util.Log;
import androidx.constraintlayout.core.motion.utils.TypedValues;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.core.view.InputDeviceCompat;
import androidx.core.view.PointerIconCompat;
import androidx.recyclerview.widget.ItemTouchHelper;
import androidx.room.RoomDatabase;
import androidx.vectordrawable.graphics.drawable.PathInterpolatorCompat;
import androidx.work.CoroutineWorker;
import androidx.work.ListenableWorker;
import androidx.work.WorkerParameters;
import com.uniden.rtach.data.model.UpdateProgressModel;
import com.uniden.rtach.data.model.VersionUpdateModel;
import com.uniden.rtach.data.sharedpref.StoreUserData;
import com.uniden.rtach.helper.BaseApplication;
import com.uniden.rtach.helper.BluetoothManager;
import com.uniden.rtach.helper.BluetoothUtils;
import com.uniden.rtach.helper.Constant;
import com.uniden.rtach.helper.CustomLog;
import com.uniden.rtach.helper.FIrmWareUpdateProcess;
import com.uniden.rtach.helper.Utils;
import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.util.Arrays;
import java.util.List;
import java.util.UUID;
import kotlin.Lazy;
import kotlin.LazyKt;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.Boxing;
import kotlin.coroutines.jvm.internal.ContinuationImpl;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.SuspendLambda;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Ref;
import kotlin.jvm.internal.StringCompanionObject;
import kotlin.p006io.CloseableKt;
import kotlin.ranges.RangesKt;
import kotlin.text.Charsets;
import kotlin.text.StringsKt;
import kotlinx.coroutines.BuildersKt__BuildersKt;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.CoroutineScopeKt;
import kotlinx.coroutines.DelayKt;
import kotlinx.coroutines.TimeoutKt;

/* JADX INFO: compiled from: FirmWareUpdateWorker.kt */
/* JADX INFO: loaded from: classes2.dex */
@Metadata(m490d1 = {"\u0000~\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\b\n\u0002\b\u0004\n\u0002\u0010\u000e\n\u0002\b\b\n\u0002\u0018\u0002\n\u0002\b\u000b\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b}\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0004\n\u0002\u0010\u000b\n\u0002\b\u0006\n\u0002\u0010\u0012\n\u0002\b\u0010\n\u0002\u0010\t\n\u0002\b\u0003\u0018\u00002\u00020\u0001B\u0017\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005¢\u0006\u0004\b\u0006\u0010\u0007J\u0011\u0010¶\u0001\u001a\u00030·\u0001H\u0096@¢\u0006\u0003\u0010¸\u0001J\u001a\u0010¹\u0001\u001a\u00030º\u00012\u0007\u0010»\u0001\u001a\u000209H\u0082@¢\u0006\u0003\u0010¼\u0001J\u001a\u0010½\u0001\u001a\u00030º\u00012\u0007\u0010»\u0001\u001a\u000209H\u0082@¢\u0006\u0003\u0010¼\u0001J\u0011\u0010¾\u0001\u001a\u00030¿\u0001H\u0082@¢\u0006\u0003\u0010¸\u0001J\u0019\u0010À\u0001\u001a\u00030¿\u00012\u0006\u0010\f\u001a\u00020\rH\u0082@¢\u0006\u0003\u0010Á\u0001J\u0019\u0010Â\u0001\u001a\u00030¿\u00012\u0006\u0010\f\u001a\u00020\rH\u0082@¢\u0006\u0003\u0010Á\u0001J\n\u0010Ã\u0001\u001a\u00030¿\u0001H\u0002J\u0013\u0010Ä\u0001\u001a\u00020\u00182\b\u0010Å\u0001\u001a\u00030Æ\u0001H\u0002J\u0011\u0010Ç\u0001\u001a\u00030¿\u0001H\u0082@¢\u0006\u0003\u0010¸\u0001J,\u0010È\u0001\u001a\u00030¿\u00012\u0007\u0010É\u0001\u001a\u0002022\u0007\u0010Ê\u0001\u001a\u00020\u00182\u0007\u0010Ë\u0001\u001a\u00020\u0018H\u0082@¢\u0006\u0003\u0010Ì\u0001J/\u0010Í\u0001\u001a\u00030¿\u00012\u0007\u0010Î\u0001\u001a\u00020\u001d2\u0007\u0010Ï\u0001\u001a\u00020\u00182\n\b\u0002\u0010Ð\u0001\u001a\u00030¿\u0001H\u0082@¢\u0006\u0003\u0010Ñ\u0001J-\u0010Ò\u0001\u001a\u00030¿\u00012\u0007\u0010Ó\u0001\u001a\u0002092\u0007\u0010Ï\u0001\u001a\u00020\u00182\b\u0010Ô\u0001\u001a\u00030Æ\u0001H\u0082@¢\u0006\u0003\u0010Õ\u0001J\u001b\u0010Ö\u0001\u001a\u00030¿\u00012\b\u0010Ï\u0001\u001a\u00030×\u0001H\u0086@¢\u0006\u0003\u0010Ø\u0001J\u001b\u0010Ù\u0001\u001a\u00030¿\u00012\b\u0010Ï\u0001\u001a\u00030×\u0001H\u0086@¢\u0006\u0003\u0010Ø\u0001R\u001a\u0010\u0002\u001a\u00020\u0003X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\b\u0010\t\"\u0004\b\n\u0010\u000bR\u001d\u0010\f\u001a\u0004\u0018\u00010\r8BX\u0082\u0084\u0002¢\u0006\f\n\u0004\b\u0010\u0010\u0011\u001a\u0004\b\u000e\u0010\u000fR\u001b\u0010\u0012\u001a\u00020\u00138BX\u0082\u0084\u0002¢\u0006\f\n\u0004\b\u0016\u0010\u0011\u001a\u0004\b\u0014\u0010\u0015R\u000e\u0010\u0017\u001a\u00020\u0018X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0019\u001a\u00020\u0018X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u001a\u001a\u00020\u0018X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u001b\u001a\u00020\u0018X\u0082\u000e¢\u0006\u0002\n\u0000R\u001a\u0010\u001c\u001a\u00020\u001dX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u001e\u0010\u001f\"\u0004\b \u0010!R\u001a\u0010\"\u001a\u00020\u001dX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b#\u0010\u001f\"\u0004\b$\u0010!R\u001b\u0010%\u001a\u00020&8BX\u0082\u0084\u0002¢\u0006\f\n\u0004\b)\u0010\u0011\u001a\u0004\b'\u0010(R\u000e\u0010*\u001a\u00020\u0018X\u0082D¢\u0006\u0002\n\u0000R\u000e\u0010+\u001a\u00020\u0018X\u0082D¢\u0006\u0002\n\u0000R\u000e\u0010,\u001a\u00020\u0018X\u0082D¢\u0006\u0002\n\u0000R\u000e\u0010-\u001a\u00020\u0018X\u0082D¢\u0006\u0002\n\u0000R\u000e\u0010.\u001a\u00020\u0018X\u0082D¢\u0006\u0002\n\u0000R\u000e\u0010/\u001a\u00020\u0018X\u0082D¢\u0006\u0002\n\u0000R\u000e\u00100\u001a\u00020\u0018X\u0082D¢\u0006\u0002\n\u0000R\u000e\u00101\u001a\u000202X\u0082\u0004¢\u0006\u0002\n\u0000R\u001d\u00103\u001a\u0004\u0018\u0001048BX\u0082\u0084\u0002¢\u0006\f\n\u0004\b7\u0010\u0011\u001a\u0004\b5\u00106R\u000e\u00108\u001a\u000209X\u0082.¢\u0006\u0002\n\u0000R\u000e\u0010:\u001a\u000209X\u0082.¢\u0006\u0002\n\u0000R\u000e\u0010;\u001a\u000209X\u0082.¢\u0006\u0002\n\u0000R\u000e\u0010<\u001a\u000209X\u0082.¢\u0006\u0002\n\u0000R\u000e\u0010=\u001a\u000209X\u0082.¢\u0006\u0002\n\u0000R\u000e\u0010>\u001a\u000209X\u0082.¢\u0006\u0002\n\u0000R\u001a\u0010?\u001a\u00020\u0018X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b@\u0010A\"\u0004\bB\u0010CR\u001a\u0010D\u001a\u00020\u0018X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\bE\u0010A\"\u0004\bF\u0010CR\u001a\u0010G\u001a\u00020\u0018X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\bH\u0010A\"\u0004\bI\u0010CR\u001a\u0010J\u001a\u00020\u0018X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\bK\u0010A\"\u0004\bL\u0010CR\u001a\u0010M\u001a\u00020\u0018X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\bN\u0010A\"\u0004\bO\u0010CR\u001a\u0010P\u001a\u00020\u0018X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\bQ\u0010A\"\u0004\bR\u0010CR\u001a\u0010S\u001a\u00020\u0018X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\bT\u0010A\"\u0004\bU\u0010CR\u001a\u0010V\u001a\u00020\u0018X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\bW\u0010A\"\u0004\bX\u0010CR\u001a\u0010Y\u001a\u00020\u0018X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\bZ\u0010A\"\u0004\b[\u0010CR\u001a\u0010\\\u001a\u00020\u0018X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b]\u0010A\"\u0004\b^\u0010CR\u001a\u0010_\u001a\u00020\u0018X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b`\u0010A\"\u0004\ba\u0010CR\u001a\u0010b\u001a\u00020\u0018X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\bc\u0010A\"\u0004\bd\u0010CR\u001a\u0010e\u001a\u00020\u0018X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\bf\u0010A\"\u0004\bg\u0010CR\u001a\u0010h\u001a\u00020\u0018X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\bi\u0010A\"\u0004\bj\u0010CR\u001a\u0010k\u001a\u00020\u0018X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\bl\u0010A\"\u0004\bm\u0010CR\u001a\u0010n\u001a\u00020\u0018X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\bo\u0010A\"\u0004\bp\u0010CR\u001a\u0010q\u001a\u00020\u0018X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\br\u0010A\"\u0004\bs\u0010CR\u001a\u0010t\u001a\u00020\u0018X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\bu\u0010A\"\u0004\bv\u0010CR\u001a\u0010w\u001a\u00020\u0018X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\bx\u0010A\"\u0004\by\u0010CR\u001a\u0010z\u001a\u00020\u0018X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b{\u0010A\"\u0004\b|\u0010CR\u001a\u0010}\u001a\u00020\u0018X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b~\u0010A\"\u0004\b\u007f\u0010CR\u001d\u0010\u0080\u0001\u001a\u00020\u0018X\u0086\u000e¢\u0006\u0010\n\u0000\u001a\u0005\b\u0081\u0001\u0010A\"\u0005\b\u0082\u0001\u0010CR\u001d\u0010\u0083\u0001\u001a\u00020\u0018X\u0086\u000e¢\u0006\u0010\n\u0000\u001a\u0005\b\u0084\u0001\u0010A\"\u0005\b\u0085\u0001\u0010CR\u001d\u0010\u0086\u0001\u001a\u00020\u0018X\u0086\u000e¢\u0006\u0010\n\u0000\u001a\u0005\b\u0087\u0001\u0010A\"\u0005\b\u0088\u0001\u0010CR\u001d\u0010\u0089\u0001\u001a\u00020\u0018X\u0086\u000e¢\u0006\u0010\n\u0000\u001a\u0005\b\u008a\u0001\u0010A\"\u0005\b\u008b\u0001\u0010CR\u001d\u0010\u008c\u0001\u001a\u00020\u0018X\u0086\u000e¢\u0006\u0010\n\u0000\u001a\u0005\b\u008d\u0001\u0010A\"\u0005\b\u008e\u0001\u0010CR\u001d\u0010\u008f\u0001\u001a\u00020\u0018X\u0086\u000e¢\u0006\u0010\n\u0000\u001a\u0005\b\u0090\u0001\u0010A\"\u0005\b\u0091\u0001\u0010CR\u001d\u0010\u0092\u0001\u001a\u00020\u0018X\u0086\u000e¢\u0006\u0010\n\u0000\u001a\u0005\b\u0093\u0001\u0010A\"\u0005\b\u0094\u0001\u0010CR\u001d\u0010\u0095\u0001\u001a\u00020\u0018X\u0086\u000e¢\u0006\u0010\n\u0000\u001a\u0005\b\u0096\u0001\u0010A\"\u0005\b\u0097\u0001\u0010CR\u001d\u0010\u0098\u0001\u001a\u00020\u0018X\u0086\u000e¢\u0006\u0010\n\u0000\u001a\u0005\b\u0099\u0001\u0010A\"\u0005\b\u009a\u0001\u0010CR\u001d\u0010\u009b\u0001\u001a\u00020\u0018X\u0086\u000e¢\u0006\u0010\n\u0000\u001a\u0005\b\u009c\u0001\u0010A\"\u0005\b\u009d\u0001\u0010CR\u001d\u0010\u009e\u0001\u001a\u00020\u0018X\u0086\u000e¢\u0006\u0010\n\u0000\u001a\u0005\b\u009f\u0001\u0010A\"\u0005\b \u0001\u0010CR\u001d\u0010¡\u0001\u001a\u00020\u0018X\u0086\u000e¢\u0006\u0010\n\u0000\u001a\u0005\b¢\u0001\u0010A\"\u0005\b£\u0001\u0010CR\u001d\u0010¤\u0001\u001a\u00020\u0018X\u0086\u000e¢\u0006\u0010\n\u0000\u001a\u0005\b¥\u0001\u0010A\"\u0005\b¦\u0001\u0010CR\u001d\u0010§\u0001\u001a\u00020\u0018X\u0086\u000e¢\u0006\u0010\n\u0000\u001a\u0005\b¨\u0001\u0010A\"\u0005\b©\u0001\u0010CR\u001d\u0010ª\u0001\u001a\u00020\u0018X\u0086\u000e¢\u0006\u0010\n\u0000\u001a\u0005\b«\u0001\u0010A\"\u0005\b¬\u0001\u0010CR\u001d\u0010\u00ad\u0001\u001a\u00020\u0018X\u0086\u000e¢\u0006\u0010\n\u0000\u001a\u0005\b®\u0001\u0010A\"\u0005\b¯\u0001\u0010CR\u001d\u0010°\u0001\u001a\u00020\u0018X\u0086\u000e¢\u0006\u0010\n\u0000\u001a\u0005\b±\u0001\u0010A\"\u0005\b²\u0001\u0010CR\u001d\u0010³\u0001\u001a\u00020\u001dX\u0086\u000e¢\u0006\u0010\n\u0000\u001a\u0005\b´\u0001\u0010\u001f\"\u0005\bµ\u0001\u0010!¨\u0006Ú\u0001"}, m491d2 = {"Lcom/uniden/rtach/helper/firmware_update/FirmWareUpdateWorker;", "Landroidx/work/CoroutineWorker;", "context", "Landroid/content/Context;", "params", "Landroidx/work/WorkerParameters;", "<init>", "(Landroid/content/Context;Landroidx/work/WorkerParameters;)V", "getContext", "()Landroid/content/Context;", "setContext", "(Landroid/content/Context;)V", "versionUpdateModel", "Lcom/uniden/rtach/data/model/VersionUpdateModel;", "getVersionUpdateModel", "()Lcom/uniden/rtach/data/model/VersionUpdateModel;", "versionUpdateModel$delegate", "Lkotlin/Lazy;", "myApp", "Lcom/uniden/rtach/helper/BaseApplication;", "getMyApp", "()Lcom/uniden/rtach/helper/BaseApplication;", "myApp$delegate", "firmware_1_interval_size", "", "all_data_piece", "send_data_piece", "progress", "updateMode", "", "getUpdateMode", "()Ljava/lang/String;", "setUpdateMode", "(Ljava/lang/String;)V", "updateType", "getUpdateType", "setUpdateType", "sharePref", "Lcom/uniden/rtach/data/sharedpref/StoreUserData;", "getSharePref", "()Lcom/uniden/rtach/data/sharedpref/StoreUserData;", "sharePref$delegate", "DATA_SERVICE", "NOTIFICATION_SERVICE", "CHARACTERISTIC_1", "CHARACTERISTIC_2", "CHARACTERISTIC_3", "CHARACTERISTIC_4", "CHARACTERISTIC_5", "file", "Ljava/io/File;", "btGatt", "Landroid/bluetooth/BluetoothGatt;", "getBtGatt", "()Landroid/bluetooth/BluetoothGatt;", "btGatt$delegate", "data1Characteristic", "Landroid/bluetooth/BluetoothGattCharacteristic;", "data2Characteristic", "data3Characteristic", "data4Characteristic", "data5Characteristic", "comNotifyCharacteristic", "merge_ver", "getMerge_ver", "()I", "setMerge_ver", "(I)V", "model_number", "getModel_number", "setModel_number", "ui_file_offset", "getUi_file_offset", "setUi_file_offset", "ui_file_size", "getUi_file_size", "setUi_file_size", "ui_file_ver", "getUi_file_ver", "setUi_file_ver", "ui_file_checksum", "getUi_file_checksum", "setUi_file_checksum", "dsp_file_offset", "getDsp_file_offset", "setDsp_file_offset", "dsp_file_size", "getDsp_file_size", "setDsp_file_size", "dsp_file_ver", "getDsp_file_ver", "setDsp_file_ver", "dsp_file_checksum", "getDsp_file_checksum", "setDsp_file_checksum", "gps_file_offset", "getGps_file_offset", "setGps_file_offset", "gps_file_size", "getGps_file_size", "setGps_file_size", "gps_file_ver", "getGps_file_ver", "setGps_file_ver", "gps_file_checksum", "getGps_file_checksum", "setGps_file_checksum", "sound_db_file_offset", "getSound_db_file_offset", "setSound_db_file_offset", "sound_db_file_size", "getSound_db_file_size", "setSound_db_file_size", "sound_db_file_ver", "getSound_db_file_ver", "setSound_db_file_ver", "sound_db_file_checksum", "getSound_db_file_checksum", "setSound_db_file_checksum", "gps_db_file_offset", "getGps_db_file_offset", "setGps_db_file_offset", "gps_db_file_size", "getGps_db_file_size", "setGps_db_file_size", "gps_db_file_ver", "getGps_db_file_ver", "setGps_db_file_ver", "gps_db_file_checksum", "getGps_db_file_checksum", "setGps_db_file_checksum", "if1_file_offset", "getIf1_file_offset", "setIf1_file_offset", "if1_file_size", "getIf1_file_size", "setIf1_file_size", "if1_file_ver", "getIf1_file_ver", "setIf1_file_ver", "if1_file_checksum", "getIf1_file_checksum", "setIf1_file_checksum", "if2_file_offset", "getIf2_file_offset", "setIf2_file_offset", "if2_file_size", "getIf2_file_size", "setIf2_file_size", "if2_file_ver", "getIf2_file_ver", "setIf2_file_ver", "if2_file_checksum", "getIf2_file_checksum", "setIf2_file_checksum", "if3_file_offset", "getIf3_file_offset", "setIf3_file_offset", "if3_file_size", "getIf3_file_size", "setIf3_file_size", "if3_file_ver", "getIf3_file_ver", "setIf3_file_ver", "if3_file_checksum", "getIf3_file_checksum", "setIf3_file_checksum", "ble_file_offset", "getBle_file_offset", "setBle_file_offset", "ble_file_size", "getBle_file_size", "setBle_file_size", "ble_file_ver", "getBle_file_ver", "setBle_file_ver", "ble_file_checksum", "getBle_file_checksum", "setBle_file_checksum", "include_file_model_name_string", "getInclude_file_model_name_string", "setInclude_file_model_name_string", "doWork", "Landroidx/work/ListenableWorker$Result;", "(Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "readCharacteristic", "", "char", "(Landroid/bluetooth/BluetoothGattCharacteristic;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "enableNotificationCharacteristic", "updateFirmware", "", "doRecoveryUpdate", "(Lcom/uniden/rtach/data/model/VersionUpdateModel;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "doNormalUpdate", "readFirmwareFile", "readIntFrom4ByteBuffer", "b", "", "flashBLEFile", "writeFileData", "rdFile", TypedValues.CycleType.S_WAVE_OFFSET, "size", "(Ljava/io/File;IILkotlin/coroutines/Continuation;)Ljava/lang/Object;", "bleWriteDownloadCommand", "writeString", "millis", "isIgnore", "(Ljava/lang/String;IZLkotlin/coroutines/Continuation;)Ljava/lang/Object;", "bleWrite", "characteristic", "data", "(Landroid/bluetooth/BluetoothGattCharacteristic;I[BLkotlin/coroutines/Continuation;)Ljava/lang/Object;", "checkWriteFile", "", "(JLkotlin/coroutines/Continuation;)Ljava/lang/Object;", "checkCommandACK", "app_unidenRelease"}, m492k = 1, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
public final class FirmWareUpdateWorker extends CoroutineWorker {
    private final int CHARACTERISTIC_1;
    private final int CHARACTERISTIC_2;
    private final int CHARACTERISTIC_3;
    private final int CHARACTERISTIC_4;
    private final int CHARACTERISTIC_5;
    private final int DATA_SERVICE;
    private final int NOTIFICATION_SERVICE;
    private int all_data_piece;
    private int ble_file_checksum;
    private int ble_file_offset;
    private int ble_file_size;
    private int ble_file_ver;

    /* JADX INFO: renamed from: btGatt$delegate, reason: from kotlin metadata */
    private final Lazy btGatt;
    private BluetoothGattCharacteristic comNotifyCharacteristic;
    private Context context;
    private BluetoothGattCharacteristic data1Characteristic;
    private BluetoothGattCharacteristic data2Characteristic;
    private BluetoothGattCharacteristic data3Characteristic;
    private BluetoothGattCharacteristic data4Characteristic;
    private BluetoothGattCharacteristic data5Characteristic;
    private int dsp_file_checksum;
    private int dsp_file_offset;
    private int dsp_file_size;
    private int dsp_file_ver;
    private final File file;
    private int firmware_1_interval_size;
    private int gps_db_file_checksum;
    private int gps_db_file_offset;
    private int gps_db_file_size;
    private int gps_db_file_ver;
    private int gps_file_checksum;
    private int gps_file_offset;
    private int gps_file_size;
    private int gps_file_ver;
    private int if1_file_checksum;
    private int if1_file_offset;
    private int if1_file_size;
    private int if1_file_ver;
    private int if2_file_checksum;
    private int if2_file_offset;
    private int if2_file_size;
    private int if2_file_ver;
    private int if3_file_checksum;
    private int if3_file_offset;
    private int if3_file_size;
    private int if3_file_ver;
    private String include_file_model_name_string;
    private int merge_ver;
    private int model_number;

    /* JADX INFO: renamed from: myApp$delegate, reason: from kotlin metadata */
    private final Lazy myApp;
    private int progress;
    private int send_data_piece;

    /* JADX INFO: renamed from: sharePref$delegate, reason: from kotlin metadata */
    private final Lazy sharePref;
    private int sound_db_file_checksum;
    private int sound_db_file_offset;
    private int sound_db_file_size;
    private int sound_db_file_ver;
    private int ui_file_checksum;
    private int ui_file_offset;
    private int ui_file_size;
    private int ui_file_ver;
    private String updateMode;
    private String updateType;

    /* JADX INFO: renamed from: versionUpdateModel$delegate, reason: from kotlin metadata */
    private final Lazy versionUpdateModel;

    /* JADX INFO: renamed from: com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker$bleWriteDownloadCommand$1 */
    /* JADX INFO: compiled from: FirmWareUpdateWorker.kt */
    @Metadata(m492k = 3, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    @DebugMetadata(m503c = "com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker", m504f = "FirmWareUpdateWorker.kt", m505i = {0, 0, 0, 0}, m506l = {962}, m507m = "bleWriteDownloadCommand", m508n = {"this", "writeString", "millis", "isIgnore"}, m509s = {"L$0", "L$1", "I$0", "Z$0"})
    static final class C20841 extends ContinuationImpl {
        int I$0;
        Object L$0;
        Object L$1;
        boolean Z$0;
        int label;
        /* synthetic */ Object result;

        C20841(Continuation<? super C20841> continuation) {
            super(continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            this.result = obj;
            this.label |= Integer.MIN_VALUE;
            return FirmWareUpdateWorker.this.bleWriteDownloadCommand(null, 0, false, this);
        }
    }

    /* JADX INFO: renamed from: com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker$checkCommandACK$1 */
    /* JADX INFO: compiled from: FirmWareUpdateWorker.kt */
    @Metadata(m492k = 3, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    @DebugMetadata(m503c = "com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker", m504f = "FirmWareUpdateWorker.kt", m505i = {}, m506l = {1059}, m507m = "checkCommandACK", m508n = {}, m509s = {})
    static final class C20861 extends ContinuationImpl {
        int label;
        /* synthetic */ Object result;

        C20861(Continuation<? super C20861> continuation) {
            super(continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            this.result = obj;
            this.label |= Integer.MIN_VALUE;
            return FirmWareUpdateWorker.this.checkCommandACK(0L, this);
        }
    }

    /* JADX INFO: renamed from: com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker$checkWriteFile$1 */
    /* JADX INFO: compiled from: FirmWareUpdateWorker.kt */
    @Metadata(m492k = 3, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    @DebugMetadata(m503c = "com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker", m504f = "FirmWareUpdateWorker.kt", m505i = {}, m506l = {1045}, m507m = "checkWriteFile", m508n = {}, m509s = {})
    static final class C20881 extends ContinuationImpl {
        int label;
        /* synthetic */ Object result;

        C20881(Continuation<? super C20881> continuation) {
            super(continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            this.result = obj;
            this.label |= Integer.MIN_VALUE;
            return FirmWareUpdateWorker.this.checkWriteFile(0L, this);
        }
    }

    /* JADX INFO: renamed from: com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker$doNormalUpdate$1 */
    /* JADX INFO: compiled from: FirmWareUpdateWorker.kt */
    @Metadata(m492k = 3, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    @DebugMetadata(m503c = "com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker", m504f = "FirmWareUpdateWorker.kt", m505i = {0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 11, 11, 12, 12, 13, 13, 14, 14, 15, 15, 16, 16, 17, 17, 18, 18, 19, 19, 20, 20, 21, 21, 22, 22, 23, 23, 24, 24, 25, 26, 27, 28, 29, 30, 31, 32}, m506l = {471, 480, 482, 486, 496, 498, TypedValues.PositionType.TYPE_DRAWPATH, InputDeviceCompat.SOURCE_DPAD, 515, 519, 528, 530, 538, 547, 549, 557, 566, 568, 576, 585, 587, 596, TypedValues.MotionType.TYPE_PATHMOTION_ARC, TypedValues.MotionType.TYPE_POLAR_RELATIVETO, 618, 629, 631, 635, 647, 652, 668, 679, 691}, m507m = "doNormalUpdate", m508n = {"this", "versionUpdateModel", "this", "versionUpdateModel", "this", "versionUpdateModel", "this", "versionUpdateModel", "this", "versionUpdateModel", "this", "versionUpdateModel", "this", "versionUpdateModel", "this", "versionUpdateModel", "this", "versionUpdateModel", "this", "versionUpdateModel", "this", "versionUpdateModel", "this", "versionUpdateModel", "this", "versionUpdateModel", "this", "versionUpdateModel", "this", "versionUpdateModel", "this", "versionUpdateModel", "this", "versionUpdateModel", "this", "versionUpdateModel", "this", "versionUpdateModel", "this", "versionUpdateModel", "this", "versionUpdateModel", "this", "versionUpdateModel", "this", "versionUpdateModel", "this", "versionUpdateModel", "this", "versionUpdateModel", "this", "this", "this", "this", "this", "this", "this", "e"}, m509s = {"L$0", "L$1", "L$0", "L$1", "L$0", "L$1", "L$0", "L$1", "L$0", "L$1", "L$0", "L$1", "L$0", "L$1", "L$0", "L$1", "L$0", "L$1", "L$0", "L$1", "L$0", "L$1", "L$0", "L$1", "L$0", "L$1", "L$0", "L$1", "L$0", "L$1", "L$0", "L$1", "L$0", "L$1", "L$0", "L$1", "L$0", "L$1", "L$0", "L$1", "L$0", "L$1", "L$0", "L$1", "L$0", "L$1", "L$0", "L$1", "L$0", "L$1", "L$0", "L$0", "L$0", "L$0", "L$0", "L$0", "L$0", "L$0"})
    static final class C20901 extends ContinuationImpl {
        Object L$0;
        Object L$1;
        int label;
        /* synthetic */ Object result;

        C20901(Continuation<? super C20901> continuation) {
            super(continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            this.result = obj;
            this.label |= Integer.MIN_VALUE;
            return FirmWareUpdateWorker.this.doNormalUpdate(null, this);
        }
    }

    /* JADX INFO: renamed from: com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker$doRecoveryUpdate$1 */
    /* JADX INFO: compiled from: FirmWareUpdateWorker.kt */
    @Metadata(m492k = 3, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    @DebugMetadata(m503c = "com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker", m504f = "FirmWareUpdateWorker.kt", m505i = {0, 1, 2, 3, 4, 5, 6, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30}, m506l = {241, ItemTouchHelper.Callback.DEFAULT_SWIPE_ANIMATION_DURATION, 251, 254, 264, 265, 268, 277, 278, 281, 290, 291, 298, 307, 308, 311, 321, 322, 329, 338, 339, 346, 356, 357, 364, 374, 375, 378, 392, 397, TypedValues.CycleType.TYPE_EASING}, m507m = "doRecoveryUpdate", m508n = {"this", "this", "this", "this", "this", "this", "this", "writeString", "this", "this", "this", "this", "this", "this", "this", "this", "this", "this", "this", "this", "this", "this", "this", "this", "this", "this", "this", "this", "this", "this", "this", "e"}, m509s = {"L$0", "L$0", "L$0", "L$0", "L$0", "L$0", "L$0", "L$1", "L$0", "L$0", "L$0", "L$0", "L$0", "L$0", "L$0", "L$0", "L$0", "L$0", "L$0", "L$0", "L$0", "L$0", "L$0", "L$0", "L$0", "L$0", "L$0", "L$0", "L$0", "L$0", "L$0", "L$0"})
    static final class C20911 extends ContinuationImpl {
        Object L$0;
        Object L$1;
        int label;
        /* synthetic */ Object result;

        C20911(Continuation<? super C20911> continuation) {
            super(continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            this.result = obj;
            this.label |= Integer.MIN_VALUE;
            return FirmWareUpdateWorker.this.doRecoveryUpdate(null, this);
        }
    }

    /* JADX INFO: renamed from: com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker$doWork$1 */
    /* JADX INFO: compiled from: FirmWareUpdateWorker.kt */
    @Metadata(m492k = 3, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    @DebugMetadata(m503c = "com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker", m504f = "FirmWareUpdateWorker.kt", m505i = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, m506l = {149, 150, 151, 152, 153, 155, 156, 157, 158, 159, 167}, m507m = "doWork", m508n = {"this", "this", "this", "this", "this", "this", "this", "this", "this", "this"}, m509s = {"L$0", "L$0", "L$0", "L$0", "L$0", "L$0", "L$0", "L$0", "L$0", "L$0"})
    static final class C20921 extends ContinuationImpl {
        Object L$0;
        int label;
        /* synthetic */ Object result;

        C20921(Continuation<? super C20921> continuation) {
            super(continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            this.result = obj;
            this.label |= Integer.MIN_VALUE;
            return FirmWareUpdateWorker.this.doWork(this);
        }
    }

    /* JADX INFO: renamed from: com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker$writeFileData$1 */
    /* JADX INFO: compiled from: FirmWareUpdateWorker.kt */
    @Metadata(m492k = 3, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    @DebugMetadata(m503c = "com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker", m504f = "FirmWareUpdateWorker.kt", m505i = {0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 6, 6}, m506l = {850, 862, 874, 886, 898, 911, 940}, m507m = "writeFileData", m508n = {"this", "firmware_data", "binFileInput", "i", "writeCnt", "empty_len", "this", "firmware_data", "binFileInput", "i", "writeCnt", "empty_len", "this", "firmware_data", "binFileInput", "i", "writeCnt", "empty_len", "this", "firmware_data", "binFileInput", "i", "writeCnt", "empty_len", "this", "firmware_data", "binFileInput", "i", "writeCnt", "empty_len", "this", "firmware_data", "binFileInput", "i", "writeCnt", "empty_len", "this", "binFileInput"}, m509s = {"L$0", "L$1", "L$2", "I$0", "I$1", "I$2", "L$0", "L$1", "L$2", "I$0", "I$1", "I$2", "L$0", "L$1", "L$2", "I$0", "I$1", "I$2", "L$0", "L$1", "L$2", "I$0", "I$1", "I$2", "L$0", "L$1", "L$2", "I$0", "I$1", "I$2", "L$0", "L$1", "L$2", "I$0", "I$1", "I$2", "L$0", "L$1"})
    static final class C20931 extends ContinuationImpl {
        int I$0;
        int I$1;
        int I$2;
        Object L$0;
        Object L$1;
        Object L$2;
        int label;
        /* synthetic */ Object result;

        C20931(Continuation<? super C20931> continuation) {
            super(continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            this.result = obj;
            this.label |= Integer.MIN_VALUE;
            return FirmWareUpdateWorker.this.writeFileData(null, 0, 0, this);
        }
    }

    public final int getBle_file_checksum() {
        return this.ble_file_checksum;
    }

    public final int getBle_file_offset() {
        return this.ble_file_offset;
    }

    public final int getBle_file_size() {
        return this.ble_file_size;
    }

    public final int getBle_file_ver() {
        return this.ble_file_ver;
    }

    public final Context getContext() {
        return this.context;
    }

    public final int getDsp_file_checksum() {
        return this.dsp_file_checksum;
    }

    public final int getDsp_file_offset() {
        return this.dsp_file_offset;
    }

    public final int getDsp_file_size() {
        return this.dsp_file_size;
    }

    public final int getDsp_file_ver() {
        return this.dsp_file_ver;
    }

    public final int getGps_db_file_checksum() {
        return this.gps_db_file_checksum;
    }

    public final int getGps_db_file_offset() {
        return this.gps_db_file_offset;
    }

    public final int getGps_db_file_size() {
        return this.gps_db_file_size;
    }

    public final int getGps_db_file_ver() {
        return this.gps_db_file_ver;
    }

    public final int getGps_file_checksum() {
        return this.gps_file_checksum;
    }

    public final int getGps_file_offset() {
        return this.gps_file_offset;
    }

    public final int getGps_file_size() {
        return this.gps_file_size;
    }

    public final int getGps_file_ver() {
        return this.gps_file_ver;
    }

    public final int getIf1_file_checksum() {
        return this.if1_file_checksum;
    }

    public final int getIf1_file_offset() {
        return this.if1_file_offset;
    }

    public final int getIf1_file_size() {
        return this.if1_file_size;
    }

    public final int getIf1_file_ver() {
        return this.if1_file_ver;
    }

    public final int getIf2_file_checksum() {
        return this.if2_file_checksum;
    }

    public final int getIf2_file_offset() {
        return this.if2_file_offset;
    }

    public final int getIf2_file_size() {
        return this.if2_file_size;
    }

    public final int getIf2_file_ver() {
        return this.if2_file_ver;
    }

    public final int getIf3_file_checksum() {
        return this.if3_file_checksum;
    }

    public final int getIf3_file_offset() {
        return this.if3_file_offset;
    }

    public final int getIf3_file_size() {
        return this.if3_file_size;
    }

    public final int getIf3_file_ver() {
        return this.if3_file_ver;
    }

    public final String getInclude_file_model_name_string() {
        return this.include_file_model_name_string;
    }

    public final int getMerge_ver() {
        return this.merge_ver;
    }

    public final int getModel_number() {
        return this.model_number;
    }

    public final int getSound_db_file_checksum() {
        return this.sound_db_file_checksum;
    }

    public final int getSound_db_file_offset() {
        return this.sound_db_file_offset;
    }

    public final int getSound_db_file_size() {
        return this.sound_db_file_size;
    }

    public final int getSound_db_file_ver() {
        return this.sound_db_file_ver;
    }

    public final int getUi_file_checksum() {
        return this.ui_file_checksum;
    }

    public final int getUi_file_offset() {
        return this.ui_file_offset;
    }

    public final int getUi_file_size() {
        return this.ui_file_size;
    }

    public final int getUi_file_ver() {
        return this.ui_file_ver;
    }

    public final String getUpdateMode() {
        return this.updateMode;
    }

    public final String getUpdateType() {
        return this.updateType;
    }

    public final void setBle_file_checksum(int i) {
        this.ble_file_checksum = i;
    }

    public final void setBle_file_offset(int i) {
        this.ble_file_offset = i;
    }

    public final void setBle_file_size(int i) {
        this.ble_file_size = i;
    }

    public final void setBle_file_ver(int i) {
        this.ble_file_ver = i;
    }

    public final void setContext(Context context) {
        Intrinsics.checkNotNullParameter(context, "<set-?>");
        this.context = context;
    }

    public final void setDsp_file_checksum(int i) {
        this.dsp_file_checksum = i;
    }

    public final void setDsp_file_offset(int i) {
        this.dsp_file_offset = i;
    }

    public final void setDsp_file_size(int i) {
        this.dsp_file_size = i;
    }

    public final void setDsp_file_ver(int i) {
        this.dsp_file_ver = i;
    }

    public final void setGps_db_file_checksum(int i) {
        this.gps_db_file_checksum = i;
    }

    public final void setGps_db_file_offset(int i) {
        this.gps_db_file_offset = i;
    }

    public final void setGps_db_file_size(int i) {
        this.gps_db_file_size = i;
    }

    public final void setGps_db_file_ver(int i) {
        this.gps_db_file_ver = i;
    }

    public final void setGps_file_checksum(int i) {
        this.gps_file_checksum = i;
    }

    public final void setGps_file_offset(int i) {
        this.gps_file_offset = i;
    }

    public final void setGps_file_size(int i) {
        this.gps_file_size = i;
    }

    public final void setGps_file_ver(int i) {
        this.gps_file_ver = i;
    }

    public final void setIf1_file_checksum(int i) {
        this.if1_file_checksum = i;
    }

    public final void setIf1_file_offset(int i) {
        this.if1_file_offset = i;
    }

    public final void setIf1_file_size(int i) {
        this.if1_file_size = i;
    }

    public final void setIf1_file_ver(int i) {
        this.if1_file_ver = i;
    }

    public final void setIf2_file_checksum(int i) {
        this.if2_file_checksum = i;
    }

    public final void setIf2_file_offset(int i) {
        this.if2_file_offset = i;
    }

    public final void setIf2_file_size(int i) {
        this.if2_file_size = i;
    }

    public final void setIf2_file_ver(int i) {
        this.if2_file_ver = i;
    }

    public final void setIf3_file_checksum(int i) {
        this.if3_file_checksum = i;
    }

    public final void setIf3_file_offset(int i) {
        this.if3_file_offset = i;
    }

    public final void setIf3_file_size(int i) {
        this.if3_file_size = i;
    }

    public final void setIf3_file_ver(int i) {
        this.if3_file_ver = i;
    }

    public final void setInclude_file_model_name_string(String str) {
        Intrinsics.checkNotNullParameter(str, "<set-?>");
        this.include_file_model_name_string = str;
    }

    public final void setMerge_ver(int i) {
        this.merge_ver = i;
    }

    public final void setModel_number(int i) {
        this.model_number = i;
    }

    public final void setSound_db_file_checksum(int i) {
        this.sound_db_file_checksum = i;
    }

    public final void setSound_db_file_offset(int i) {
        this.sound_db_file_offset = i;
    }

    public final void setSound_db_file_size(int i) {
        this.sound_db_file_size = i;
    }

    public final void setSound_db_file_ver(int i) {
        this.sound_db_file_ver = i;
    }

    public final void setUi_file_checksum(int i) {
        this.ui_file_checksum = i;
    }

    public final void setUi_file_offset(int i) {
        this.ui_file_offset = i;
    }

    public final void setUi_file_size(int i) {
        this.ui_file_size = i;
    }

    public final void setUi_file_ver(int i) {
        this.ui_file_ver = i;
    }

    public final void setUpdateMode(String str) {
        Intrinsics.checkNotNullParameter(str, "<set-?>");
        this.updateMode = str;
    }

    public final void setUpdateType(String str) {
        Intrinsics.checkNotNullParameter(str, "<set-?>");
        this.updateType = str;
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public FirmWareUpdateWorker(Context context, WorkerParameters params) {
        super(context, params);
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(params, "params");
        this.context = context;
        this.versionUpdateModel = LazyKt.lazy(new Function0() { // from class: com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker$$ExternalSyntheticLambda0
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return FirmWareUpdateWorker.versionUpdateModel_delegate$lambda$0(this.f$0);
            }
        });
        this.myApp = LazyKt.lazy(new Function0() { // from class: com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker$$ExternalSyntheticLambda1
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return FirmWareUpdateWorker.myApp_delegate$lambda$1(this.f$0);
            }
        });
        this.firmware_1_interval_size = 1024;
        this.updateMode = "N";
        this.updateType = "F";
        this.sharePref = LazyKt.lazy(new Function0() { // from class: com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker$$ExternalSyntheticLambda2
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return FirmWareUpdateWorker.sharePref_delegate$lambda$2(this.f$0);
            }
        });
        this.DATA_SERVICE = 3;
        this.NOTIFICATION_SERVICE = 4;
        this.CHARACTERISTIC_2 = 1;
        this.CHARACTERISTIC_3 = 2;
        this.CHARACTERISTIC_4 = 3;
        this.CHARACTERISTIC_5 = 4;
        this.file = new File(new Utils().getFirmwareFilePath(this.context));
        this.btGatt = LazyKt.lazy(new Function0() { // from class: com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker$$ExternalSyntheticLambda3
            @Override // kotlin.jvm.functions.Function0
            public final Object invoke() {
                return FirmWareUpdateWorker.btGatt_delegate$lambda$3(this.f$0);
            }
        });
        this.include_file_model_name_string = "";
    }

    private final VersionUpdateModel getVersionUpdateModel() {
        return (VersionUpdateModel) this.versionUpdateModel.getValue();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final VersionUpdateModel versionUpdateModel_delegate$lambda$0(FirmWareUpdateWorker this$0) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        Utils utils = new Utils();
        Context applicationContext = this$0.getApplicationContext();
        Intrinsics.checkNotNullExpressionValue(applicationContext, "getApplicationContext(...)");
        return utils.checkIfUpdateAvailable(applicationContext);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final BaseApplication getMyApp() {
        return (BaseApplication) this.myApp.getValue();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final BaseApplication myApp_delegate$lambda$1(FirmWareUpdateWorker this$0) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        Context applicationContext = this$0.getApplicationContext();
        Intrinsics.checkNotNull(applicationContext, "null cannot be cast to non-null type com.uniden.rtach.helper.BaseApplication");
        return (BaseApplication) applicationContext;
    }

    private final StoreUserData getSharePref() {
        return (StoreUserData) this.sharePref.getValue();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final StoreUserData sharePref_delegate$lambda$2(FirmWareUpdateWorker this$0) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        Context context = this$0.context;
        StoreUserData.Companion companion = StoreUserData.INSTANCE;
        Context applicationContext = this$0.getApplicationContext();
        Intrinsics.checkNotNullExpressionValue(applicationContext, "getApplicationContext(...)");
        SharedPreferences sharedPreferences = context.getSharedPreferences(companion.getPrefName(applicationContext), 0);
        Intrinsics.checkNotNullExpressionValue(sharedPreferences, "getSharedPreferences(...)");
        return new StoreUserData(sharedPreferences);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final BluetoothGatt btGatt_delegate$lambda$3(FirmWareUpdateWorker this$0) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        return BluetoothManager.INSTANCE.getInstance(this$0.context).getBluetoothGatt();
    }

    private final BluetoothGatt getBtGatt() {
        return (BluetoothGatt) this.btGatt.getValue();
    }

    /* JADX WARN: Code duplicated, block: B:124:0x026f A[Catch: Exception -> 0x0040, TryCatch #0 {Exception -> 0x0040, blocks: (B:12:0x003b, B:182:0x0336, B:184:0x033e, B:185:0x0343, B:17:0x0047, B:177:0x0323, B:179:0x0329, B:186:0x0348, B:20:0x0050, B:170:0x030d, B:172:0x0311, B:173:0x0315, B:23:0x0059, B:164:0x02f8, B:166:0x02fc, B:167:0x0300, B:26:0x0062, B:158:0x02e3, B:160:0x02e7, B:161:0x02eb, B:29:0x006b, B:152:0x02cf, B:154:0x02d3, B:155:0x02d7, B:32:0x0074, B:146:0x02bb, B:148:0x02bf, B:149:0x02c3, B:35:0x007d, B:140:0x02a7, B:142:0x02ab, B:143:0x02af, B:38:0x0086, B:134:0x0293, B:136:0x0297, B:137:0x029b, B:41:0x008f, B:128:0x027f, B:130:0x0283, B:131:0x0287, B:44:0x0098, B:122:0x026b, B:124:0x026f, B:125:0x0273, B:47:0x00a0, B:49:0x00e9, B:51:0x00f3, B:53:0x00f9, B:55:0x0103, B:57:0x011d, B:59:0x0127, B:61:0x012d, B:63:0x0137, B:65:0x0151, B:67:0x015b, B:69:0x0161, B:71:0x016b, B:73:0x0185, B:75:0x018f, B:77:0x0195, B:79:0x019f, B:81:0x01b9, B:83:0x01c3, B:85:0x01c9, B:87:0x01d3, B:89:0x01ed, B:91:0x01f7, B:93:0x01fd, B:95:0x0207, B:97:0x0212, B:99:0x0216, B:100:0x021a, B:102:0x0222, B:103:0x0226, B:105:0x022d, B:106:0x0231, B:108:0x0238, B:109:0x023c, B:111:0x0243, B:112:0x0247, B:114:0x024e, B:115:0x0254, B:117:0x025b, B:118:0x025f), top: B:190:0x0030 }] */
    /* JADX WARN: Code duplicated, block: B:127:0x027e A[RETURN] */
    /* JADX WARN: Code duplicated, block: B:130:0x0283 A[Catch: Exception -> 0x0040, TryCatch #0 {Exception -> 0x0040, blocks: (B:12:0x003b, B:182:0x0336, B:184:0x033e, B:185:0x0343, B:17:0x0047, B:177:0x0323, B:179:0x0329, B:186:0x0348, B:20:0x0050, B:170:0x030d, B:172:0x0311, B:173:0x0315, B:23:0x0059, B:164:0x02f8, B:166:0x02fc, B:167:0x0300, B:26:0x0062, B:158:0x02e3, B:160:0x02e7, B:161:0x02eb, B:29:0x006b, B:152:0x02cf, B:154:0x02d3, B:155:0x02d7, B:32:0x0074, B:146:0x02bb, B:148:0x02bf, B:149:0x02c3, B:35:0x007d, B:140:0x02a7, B:142:0x02ab, B:143:0x02af, B:38:0x0086, B:134:0x0293, B:136:0x0297, B:137:0x029b, B:41:0x008f, B:128:0x027f, B:130:0x0283, B:131:0x0287, B:44:0x0098, B:122:0x026b, B:124:0x026f, B:125:0x0273, B:47:0x00a0, B:49:0x00e9, B:51:0x00f3, B:53:0x00f9, B:55:0x0103, B:57:0x011d, B:59:0x0127, B:61:0x012d, B:63:0x0137, B:65:0x0151, B:67:0x015b, B:69:0x0161, B:71:0x016b, B:73:0x0185, B:75:0x018f, B:77:0x0195, B:79:0x019f, B:81:0x01b9, B:83:0x01c3, B:85:0x01c9, B:87:0x01d3, B:89:0x01ed, B:91:0x01f7, B:93:0x01fd, B:95:0x0207, B:97:0x0212, B:99:0x0216, B:100:0x021a, B:102:0x0222, B:103:0x0226, B:105:0x022d, B:106:0x0231, B:108:0x0238, B:109:0x023c, B:111:0x0243, B:112:0x0247, B:114:0x024e, B:115:0x0254, B:117:0x025b, B:118:0x025f), top: B:190:0x0030 }] */
    /* JADX WARN: Code duplicated, block: B:133:0x0292 A[RETURN] */
    /* JADX WARN: Code duplicated, block: B:136:0x0297 A[Catch: Exception -> 0x0040, TryCatch #0 {Exception -> 0x0040, blocks: (B:12:0x003b, B:182:0x0336, B:184:0x033e, B:185:0x0343, B:17:0x0047, B:177:0x0323, B:179:0x0329, B:186:0x0348, B:20:0x0050, B:170:0x030d, B:172:0x0311, B:173:0x0315, B:23:0x0059, B:164:0x02f8, B:166:0x02fc, B:167:0x0300, B:26:0x0062, B:158:0x02e3, B:160:0x02e7, B:161:0x02eb, B:29:0x006b, B:152:0x02cf, B:154:0x02d3, B:155:0x02d7, B:32:0x0074, B:146:0x02bb, B:148:0x02bf, B:149:0x02c3, B:35:0x007d, B:140:0x02a7, B:142:0x02ab, B:143:0x02af, B:38:0x0086, B:134:0x0293, B:136:0x0297, B:137:0x029b, B:41:0x008f, B:128:0x027f, B:130:0x0283, B:131:0x0287, B:44:0x0098, B:122:0x026b, B:124:0x026f, B:125:0x0273, B:47:0x00a0, B:49:0x00e9, B:51:0x00f3, B:53:0x00f9, B:55:0x0103, B:57:0x011d, B:59:0x0127, B:61:0x012d, B:63:0x0137, B:65:0x0151, B:67:0x015b, B:69:0x0161, B:71:0x016b, B:73:0x0185, B:75:0x018f, B:77:0x0195, B:79:0x019f, B:81:0x01b9, B:83:0x01c3, B:85:0x01c9, B:87:0x01d3, B:89:0x01ed, B:91:0x01f7, B:93:0x01fd, B:95:0x0207, B:97:0x0212, B:99:0x0216, B:100:0x021a, B:102:0x0222, B:103:0x0226, B:105:0x022d, B:106:0x0231, B:108:0x0238, B:109:0x023c, B:111:0x0243, B:112:0x0247, B:114:0x024e, B:115:0x0254, B:117:0x025b, B:118:0x025f), top: B:190:0x0030 }] */
    /* JADX WARN: Code duplicated, block: B:139:0x02a6 A[RETURN] */
    /* JADX WARN: Code duplicated, block: B:142:0x02ab A[Catch: Exception -> 0x0040, TryCatch #0 {Exception -> 0x0040, blocks: (B:12:0x003b, B:182:0x0336, B:184:0x033e, B:185:0x0343, B:17:0x0047, B:177:0x0323, B:179:0x0329, B:186:0x0348, B:20:0x0050, B:170:0x030d, B:172:0x0311, B:173:0x0315, B:23:0x0059, B:164:0x02f8, B:166:0x02fc, B:167:0x0300, B:26:0x0062, B:158:0x02e3, B:160:0x02e7, B:161:0x02eb, B:29:0x006b, B:152:0x02cf, B:154:0x02d3, B:155:0x02d7, B:32:0x0074, B:146:0x02bb, B:148:0x02bf, B:149:0x02c3, B:35:0x007d, B:140:0x02a7, B:142:0x02ab, B:143:0x02af, B:38:0x0086, B:134:0x0293, B:136:0x0297, B:137:0x029b, B:41:0x008f, B:128:0x027f, B:130:0x0283, B:131:0x0287, B:44:0x0098, B:122:0x026b, B:124:0x026f, B:125:0x0273, B:47:0x00a0, B:49:0x00e9, B:51:0x00f3, B:53:0x00f9, B:55:0x0103, B:57:0x011d, B:59:0x0127, B:61:0x012d, B:63:0x0137, B:65:0x0151, B:67:0x015b, B:69:0x0161, B:71:0x016b, B:73:0x0185, B:75:0x018f, B:77:0x0195, B:79:0x019f, B:81:0x01b9, B:83:0x01c3, B:85:0x01c9, B:87:0x01d3, B:89:0x01ed, B:91:0x01f7, B:93:0x01fd, B:95:0x0207, B:97:0x0212, B:99:0x0216, B:100:0x021a, B:102:0x0222, B:103:0x0226, B:105:0x022d, B:106:0x0231, B:108:0x0238, B:109:0x023c, B:111:0x0243, B:112:0x0247, B:114:0x024e, B:115:0x0254, B:117:0x025b, B:118:0x025f), top: B:190:0x0030 }] */
    /* JADX WARN: Code duplicated, block: B:145:0x02ba A[RETURN] */
    /* JADX WARN: Code duplicated, block: B:148:0x02bf A[Catch: Exception -> 0x0040, TryCatch #0 {Exception -> 0x0040, blocks: (B:12:0x003b, B:182:0x0336, B:184:0x033e, B:185:0x0343, B:17:0x0047, B:177:0x0323, B:179:0x0329, B:186:0x0348, B:20:0x0050, B:170:0x030d, B:172:0x0311, B:173:0x0315, B:23:0x0059, B:164:0x02f8, B:166:0x02fc, B:167:0x0300, B:26:0x0062, B:158:0x02e3, B:160:0x02e7, B:161:0x02eb, B:29:0x006b, B:152:0x02cf, B:154:0x02d3, B:155:0x02d7, B:32:0x0074, B:146:0x02bb, B:148:0x02bf, B:149:0x02c3, B:35:0x007d, B:140:0x02a7, B:142:0x02ab, B:143:0x02af, B:38:0x0086, B:134:0x0293, B:136:0x0297, B:137:0x029b, B:41:0x008f, B:128:0x027f, B:130:0x0283, B:131:0x0287, B:44:0x0098, B:122:0x026b, B:124:0x026f, B:125:0x0273, B:47:0x00a0, B:49:0x00e9, B:51:0x00f3, B:53:0x00f9, B:55:0x0103, B:57:0x011d, B:59:0x0127, B:61:0x012d, B:63:0x0137, B:65:0x0151, B:67:0x015b, B:69:0x0161, B:71:0x016b, B:73:0x0185, B:75:0x018f, B:77:0x0195, B:79:0x019f, B:81:0x01b9, B:83:0x01c3, B:85:0x01c9, B:87:0x01d3, B:89:0x01ed, B:91:0x01f7, B:93:0x01fd, B:95:0x0207, B:97:0x0212, B:99:0x0216, B:100:0x021a, B:102:0x0222, B:103:0x0226, B:105:0x022d, B:106:0x0231, B:108:0x0238, B:109:0x023c, B:111:0x0243, B:112:0x0247, B:114:0x024e, B:115:0x0254, B:117:0x025b, B:118:0x025f), top: B:190:0x0030 }] */
    /* JADX WARN: Code duplicated, block: B:151:0x02ce A[RETURN] */
    /* JADX WARN: Code duplicated, block: B:154:0x02d3 A[Catch: Exception -> 0x0040, TryCatch #0 {Exception -> 0x0040, blocks: (B:12:0x003b, B:182:0x0336, B:184:0x033e, B:185:0x0343, B:17:0x0047, B:177:0x0323, B:179:0x0329, B:186:0x0348, B:20:0x0050, B:170:0x030d, B:172:0x0311, B:173:0x0315, B:23:0x0059, B:164:0x02f8, B:166:0x02fc, B:167:0x0300, B:26:0x0062, B:158:0x02e3, B:160:0x02e7, B:161:0x02eb, B:29:0x006b, B:152:0x02cf, B:154:0x02d3, B:155:0x02d7, B:32:0x0074, B:146:0x02bb, B:148:0x02bf, B:149:0x02c3, B:35:0x007d, B:140:0x02a7, B:142:0x02ab, B:143:0x02af, B:38:0x0086, B:134:0x0293, B:136:0x0297, B:137:0x029b, B:41:0x008f, B:128:0x027f, B:130:0x0283, B:131:0x0287, B:44:0x0098, B:122:0x026b, B:124:0x026f, B:125:0x0273, B:47:0x00a0, B:49:0x00e9, B:51:0x00f3, B:53:0x00f9, B:55:0x0103, B:57:0x011d, B:59:0x0127, B:61:0x012d, B:63:0x0137, B:65:0x0151, B:67:0x015b, B:69:0x0161, B:71:0x016b, B:73:0x0185, B:75:0x018f, B:77:0x0195, B:79:0x019f, B:81:0x01b9, B:83:0x01c3, B:85:0x01c9, B:87:0x01d3, B:89:0x01ed, B:91:0x01f7, B:93:0x01fd, B:95:0x0207, B:97:0x0212, B:99:0x0216, B:100:0x021a, B:102:0x0222, B:103:0x0226, B:105:0x022d, B:106:0x0231, B:108:0x0238, B:109:0x023c, B:111:0x0243, B:112:0x0247, B:114:0x024e, B:115:0x0254, B:117:0x025b, B:118:0x025f), top: B:190:0x0030 }] */
    /* JADX WARN: Code duplicated, block: B:157:0x02e2 A[RETURN] */
    /* JADX WARN: Code duplicated, block: B:160:0x02e7 A[Catch: Exception -> 0x0040, TryCatch #0 {Exception -> 0x0040, blocks: (B:12:0x003b, B:182:0x0336, B:184:0x033e, B:185:0x0343, B:17:0x0047, B:177:0x0323, B:179:0x0329, B:186:0x0348, B:20:0x0050, B:170:0x030d, B:172:0x0311, B:173:0x0315, B:23:0x0059, B:164:0x02f8, B:166:0x02fc, B:167:0x0300, B:26:0x0062, B:158:0x02e3, B:160:0x02e7, B:161:0x02eb, B:29:0x006b, B:152:0x02cf, B:154:0x02d3, B:155:0x02d7, B:32:0x0074, B:146:0x02bb, B:148:0x02bf, B:149:0x02c3, B:35:0x007d, B:140:0x02a7, B:142:0x02ab, B:143:0x02af, B:38:0x0086, B:134:0x0293, B:136:0x0297, B:137:0x029b, B:41:0x008f, B:128:0x027f, B:130:0x0283, B:131:0x0287, B:44:0x0098, B:122:0x026b, B:124:0x026f, B:125:0x0273, B:47:0x00a0, B:49:0x00e9, B:51:0x00f3, B:53:0x00f9, B:55:0x0103, B:57:0x011d, B:59:0x0127, B:61:0x012d, B:63:0x0137, B:65:0x0151, B:67:0x015b, B:69:0x0161, B:71:0x016b, B:73:0x0185, B:75:0x018f, B:77:0x0195, B:79:0x019f, B:81:0x01b9, B:83:0x01c3, B:85:0x01c9, B:87:0x01d3, B:89:0x01ed, B:91:0x01f7, B:93:0x01fd, B:95:0x0207, B:97:0x0212, B:99:0x0216, B:100:0x021a, B:102:0x0222, B:103:0x0226, B:105:0x022d, B:106:0x0231, B:108:0x0238, B:109:0x023c, B:111:0x0243, B:112:0x0247, B:114:0x024e, B:115:0x0254, B:117:0x025b, B:118:0x025f), top: B:190:0x0030 }] */
    /* JADX WARN: Code duplicated, block: B:163:0x02f7 A[RETURN] */
    /* JADX WARN: Code duplicated, block: B:166:0x02fc A[Catch: Exception -> 0x0040, TryCatch #0 {Exception -> 0x0040, blocks: (B:12:0x003b, B:182:0x0336, B:184:0x033e, B:185:0x0343, B:17:0x0047, B:177:0x0323, B:179:0x0329, B:186:0x0348, B:20:0x0050, B:170:0x030d, B:172:0x0311, B:173:0x0315, B:23:0x0059, B:164:0x02f8, B:166:0x02fc, B:167:0x0300, B:26:0x0062, B:158:0x02e3, B:160:0x02e7, B:161:0x02eb, B:29:0x006b, B:152:0x02cf, B:154:0x02d3, B:155:0x02d7, B:32:0x0074, B:146:0x02bb, B:148:0x02bf, B:149:0x02c3, B:35:0x007d, B:140:0x02a7, B:142:0x02ab, B:143:0x02af, B:38:0x0086, B:134:0x0293, B:136:0x0297, B:137:0x029b, B:41:0x008f, B:128:0x027f, B:130:0x0283, B:131:0x0287, B:44:0x0098, B:122:0x026b, B:124:0x026f, B:125:0x0273, B:47:0x00a0, B:49:0x00e9, B:51:0x00f3, B:53:0x00f9, B:55:0x0103, B:57:0x011d, B:59:0x0127, B:61:0x012d, B:63:0x0137, B:65:0x0151, B:67:0x015b, B:69:0x0161, B:71:0x016b, B:73:0x0185, B:75:0x018f, B:77:0x0195, B:79:0x019f, B:81:0x01b9, B:83:0x01c3, B:85:0x01c9, B:87:0x01d3, B:89:0x01ed, B:91:0x01f7, B:93:0x01fd, B:95:0x0207, B:97:0x0212, B:99:0x0216, B:100:0x021a, B:102:0x0222, B:103:0x0226, B:105:0x022d, B:106:0x0231, B:108:0x0238, B:109:0x023c, B:111:0x0243, B:112:0x0247, B:114:0x024e, B:115:0x0254, B:117:0x025b, B:118:0x025f), top: B:190:0x0030 }] */
    /* JADX WARN: Code duplicated, block: B:169:0x030c A[RETURN] */
    /* JADX WARN: Code duplicated, block: B:172:0x0311 A[Catch: Exception -> 0x0040, TryCatch #0 {Exception -> 0x0040, blocks: (B:12:0x003b, B:182:0x0336, B:184:0x033e, B:185:0x0343, B:17:0x0047, B:177:0x0323, B:179:0x0329, B:186:0x0348, B:20:0x0050, B:170:0x030d, B:172:0x0311, B:173:0x0315, B:23:0x0059, B:164:0x02f8, B:166:0x02fc, B:167:0x0300, B:26:0x0062, B:158:0x02e3, B:160:0x02e7, B:161:0x02eb, B:29:0x006b, B:152:0x02cf, B:154:0x02d3, B:155:0x02d7, B:32:0x0074, B:146:0x02bb, B:148:0x02bf, B:149:0x02c3, B:35:0x007d, B:140:0x02a7, B:142:0x02ab, B:143:0x02af, B:38:0x0086, B:134:0x0293, B:136:0x0297, B:137:0x029b, B:41:0x008f, B:128:0x027f, B:130:0x0283, B:131:0x0287, B:44:0x0098, B:122:0x026b, B:124:0x026f, B:125:0x0273, B:47:0x00a0, B:49:0x00e9, B:51:0x00f3, B:53:0x00f9, B:55:0x0103, B:57:0x011d, B:59:0x0127, B:61:0x012d, B:63:0x0137, B:65:0x0151, B:67:0x015b, B:69:0x0161, B:71:0x016b, B:73:0x0185, B:75:0x018f, B:77:0x0195, B:79:0x019f, B:81:0x01b9, B:83:0x01c3, B:85:0x01c9, B:87:0x01d3, B:89:0x01ed, B:91:0x01f7, B:93:0x01fd, B:95:0x0207, B:97:0x0212, B:99:0x0216, B:100:0x021a, B:102:0x0222, B:103:0x0226, B:105:0x022d, B:106:0x0231, B:108:0x0238, B:109:0x023c, B:111:0x0243, B:112:0x0247, B:114:0x024e, B:115:0x0254, B:117:0x025b, B:118:0x025f), top: B:190:0x0030 }] */
    /* JADX WARN: Code duplicated, block: B:175:0x0321 A[RETURN] */
    /* JADX WARN: Code duplicated, block: B:179:0x0329 A[Catch: Exception -> 0x0040, TryCatch #0 {Exception -> 0x0040, blocks: (B:12:0x003b, B:182:0x0336, B:184:0x033e, B:185:0x0343, B:17:0x0047, B:177:0x0323, B:179:0x0329, B:186:0x0348, B:20:0x0050, B:170:0x030d, B:172:0x0311, B:173:0x0315, B:23:0x0059, B:164:0x02f8, B:166:0x02fc, B:167:0x0300, B:26:0x0062, B:158:0x02e3, B:160:0x02e7, B:161:0x02eb, B:29:0x006b, B:152:0x02cf, B:154:0x02d3, B:155:0x02d7, B:32:0x0074, B:146:0x02bb, B:148:0x02bf, B:149:0x02c3, B:35:0x007d, B:140:0x02a7, B:142:0x02ab, B:143:0x02af, B:38:0x0086, B:134:0x0293, B:136:0x0297, B:137:0x029b, B:41:0x008f, B:128:0x027f, B:130:0x0283, B:131:0x0287, B:44:0x0098, B:122:0x026b, B:124:0x026f, B:125:0x0273, B:47:0x00a0, B:49:0x00e9, B:51:0x00f3, B:53:0x00f9, B:55:0x0103, B:57:0x011d, B:59:0x0127, B:61:0x012d, B:63:0x0137, B:65:0x0151, B:67:0x015b, B:69:0x0161, B:71:0x016b, B:73:0x0185, B:75:0x018f, B:77:0x0195, B:79:0x019f, B:81:0x01b9, B:83:0x01c3, B:85:0x01c9, B:87:0x01d3, B:89:0x01ed, B:91:0x01f7, B:93:0x01fd, B:95:0x0207, B:97:0x0212, B:99:0x0216, B:100:0x021a, B:102:0x0222, B:103:0x0226, B:105:0x022d, B:106:0x0231, B:108:0x0238, B:109:0x023c, B:111:0x0243, B:112:0x0247, B:114:0x024e, B:115:0x0254, B:117:0x025b, B:118:0x025f), top: B:190:0x0030 }] */
    /* JADX WARN: Code duplicated, block: B:181:0x0335 A[RETURN] */
    /* JADX WARN: Code duplicated, block: B:184:0x033e A[Catch: Exception -> 0x0040, TryCatch #0 {Exception -> 0x0040, blocks: (B:12:0x003b, B:182:0x0336, B:184:0x033e, B:185:0x0343, B:17:0x0047, B:177:0x0323, B:179:0x0329, B:186:0x0348, B:20:0x0050, B:170:0x030d, B:172:0x0311, B:173:0x0315, B:23:0x0059, B:164:0x02f8, B:166:0x02fc, B:167:0x0300, B:26:0x0062, B:158:0x02e3, B:160:0x02e7, B:161:0x02eb, B:29:0x006b, B:152:0x02cf, B:154:0x02d3, B:155:0x02d7, B:32:0x0074, B:146:0x02bb, B:148:0x02bf, B:149:0x02c3, B:35:0x007d, B:140:0x02a7, B:142:0x02ab, B:143:0x02af, B:38:0x0086, B:134:0x0293, B:136:0x0297, B:137:0x029b, B:41:0x008f, B:128:0x027f, B:130:0x0283, B:131:0x0287, B:44:0x0098, B:122:0x026b, B:124:0x026f, B:125:0x0273, B:47:0x00a0, B:49:0x00e9, B:51:0x00f3, B:53:0x00f9, B:55:0x0103, B:57:0x011d, B:59:0x0127, B:61:0x012d, B:63:0x0137, B:65:0x0151, B:67:0x015b, B:69:0x0161, B:71:0x016b, B:73:0x0185, B:75:0x018f, B:77:0x0195, B:79:0x019f, B:81:0x01b9, B:83:0x01c3, B:85:0x01c9, B:87:0x01d3, B:89:0x01ed, B:91:0x01f7, B:93:0x01fd, B:95:0x0207, B:97:0x0212, B:99:0x0216, B:100:0x021a, B:102:0x0222, B:103:0x0226, B:105:0x022d, B:106:0x0231, B:108:0x0238, B:109:0x023c, B:111:0x0243, B:112:0x0247, B:114:0x024e, B:115:0x0254, B:117:0x025b, B:118:0x025f), top: B:190:0x0030 }] */
    /* JADX WARN: Code duplicated, block: B:185:0x0343 A[Catch: Exception -> 0x0040, TryCatch #0 {Exception -> 0x0040, blocks: (B:12:0x003b, B:182:0x0336, B:184:0x033e, B:185:0x0343, B:17:0x0047, B:177:0x0323, B:179:0x0329, B:186:0x0348, B:20:0x0050, B:170:0x030d, B:172:0x0311, B:173:0x0315, B:23:0x0059, B:164:0x02f8, B:166:0x02fc, B:167:0x0300, B:26:0x0062, B:158:0x02e3, B:160:0x02e7, B:161:0x02eb, B:29:0x006b, B:152:0x02cf, B:154:0x02d3, B:155:0x02d7, B:32:0x0074, B:146:0x02bb, B:148:0x02bf, B:149:0x02c3, B:35:0x007d, B:140:0x02a7, B:142:0x02ab, B:143:0x02af, B:38:0x0086, B:134:0x0293, B:136:0x0297, B:137:0x029b, B:41:0x008f, B:128:0x027f, B:130:0x0283, B:131:0x0287, B:44:0x0098, B:122:0x026b, B:124:0x026f, B:125:0x0273, B:47:0x00a0, B:49:0x00e9, B:51:0x00f3, B:53:0x00f9, B:55:0x0103, B:57:0x011d, B:59:0x0127, B:61:0x012d, B:63:0x0137, B:65:0x0151, B:67:0x015b, B:69:0x0161, B:71:0x016b, B:73:0x0185, B:75:0x018f, B:77:0x0195, B:79:0x019f, B:81:0x01b9, B:83:0x01c3, B:85:0x01c9, B:87:0x01d3, B:89:0x01ed, B:91:0x01f7, B:93:0x01fd, B:95:0x0207, B:97:0x0212, B:99:0x0216, B:100:0x021a, B:102:0x0222, B:103:0x0226, B:105:0x022d, B:106:0x0231, B:108:0x0238, B:109:0x023c, B:111:0x0243, B:112:0x0247, B:114:0x024e, B:115:0x0254, B:117:0x025b, B:118:0x025f), top: B:190:0x0030 }] */
    /* JADX WARN: Code duplicated, block: B:186:0x0348 A[Catch: Exception -> 0x0040, TRY_LEAVE, TryCatch #0 {Exception -> 0x0040, blocks: (B:12:0x003b, B:182:0x0336, B:184:0x033e, B:185:0x0343, B:17:0x0047, B:177:0x0323, B:179:0x0329, B:186:0x0348, B:20:0x0050, B:170:0x030d, B:172:0x0311, B:173:0x0315, B:23:0x0059, B:164:0x02f8, B:166:0x02fc, B:167:0x0300, B:26:0x0062, B:158:0x02e3, B:160:0x02e7, B:161:0x02eb, B:29:0x006b, B:152:0x02cf, B:154:0x02d3, B:155:0x02d7, B:32:0x0074, B:146:0x02bb, B:148:0x02bf, B:149:0x02c3, B:35:0x007d, B:140:0x02a7, B:142:0x02ab, B:143:0x02af, B:38:0x0086, B:134:0x0293, B:136:0x0297, B:137:0x029b, B:41:0x008f, B:128:0x027f, B:130:0x0283, B:131:0x0287, B:44:0x0098, B:122:0x026b, B:124:0x026f, B:125:0x0273, B:47:0x00a0, B:49:0x00e9, B:51:0x00f3, B:53:0x00f9, B:55:0x0103, B:57:0x011d, B:59:0x0127, B:61:0x012d, B:63:0x0137, B:65:0x0151, B:67:0x015b, B:69:0x0161, B:71:0x016b, B:73:0x0185, B:75:0x018f, B:77:0x0195, B:79:0x019f, B:81:0x01b9, B:83:0x01c3, B:85:0x01c9, B:87:0x01d3, B:89:0x01ed, B:91:0x01f7, B:93:0x01fd, B:95:0x0207, B:97:0x0212, B:99:0x0216, B:100:0x021a, B:102:0x0222, B:103:0x0226, B:105:0x022d, B:106:0x0231, B:108:0x0238, B:109:0x023c, B:111:0x0243, B:112:0x0247, B:114:0x024e, B:115:0x0254, B:117:0x025b, B:118:0x025f), top: B:190:0x0030 }] */
    /* JADX WARN: Code duplicated, block: B:7:0x0018  */
    @Override // androidx.work.CoroutineWorker
    public Object doWork(Continuation<? super ListenableWorker.Result> continuation) {
        C20921 c20921;
        FirmWareUpdateWorker firmWareUpdateWorker;
        BluetoothGattService bluetoothGattService;
        List<BluetoothGattCharacteristic> characteristics;
        BluetoothGattService bluetoothGattService2;
        List<BluetoothGattCharacteristic> characteristics2;
        BluetoothGattService bluetoothGattService3;
        List<BluetoothGattCharacteristic> characteristics3;
        BluetoothGattService bluetoothGattService4;
        List<BluetoothGattCharacteristic> characteristics4;
        BluetoothGattService bluetoothGattService5;
        List<BluetoothGattCharacteristic> characteristics5;
        BluetoothGattService bluetoothGattService6;
        List<BluetoothGattCharacteristic> characteristics6;
        BluetoothGattCharacteristic bluetoothGattCharacteristic;
        BluetoothGattCharacteristic bluetoothGattCharacteristic2;
        BluetoothGattCharacteristic bluetoothGattCharacteristic3;
        BluetoothGattCharacteristic bluetoothGattCharacteristic4;
        BluetoothGattCharacteristic bluetoothGattCharacteristic5;
        BluetoothGattCharacteristic bluetoothGattCharacteristic6;
        BluetoothGattCharacteristic bluetoothGattCharacteristic7;
        BluetoothGattCharacteristic bluetoothGattCharacteristic8;
        BluetoothGattCharacteristic bluetoothGattCharacteristic9;
        if (continuation instanceof C20921) {
            c20921 = (C20921) continuation;
            if ((c20921.label & Integer.MIN_VALUE) != 0) {
                c20921.label -= Integer.MIN_VALUE;
            } else {
                c20921 = new C20921(continuation);
            }
        } else {
            c20921 = new C20921(continuation);
        }
        Object objUpdateFirmware = c20921.result;
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        try {
            switch (c20921.label) {
                case 0:
                    ResultKt.throwOnFailure(objUpdateFirmware);
                    this.updateMode = String.valueOf(getInputData().getString("updateMode"));
                    this.updateType = String.valueOf(getInputData().getString("updateType"));
                    Log.d("TAG_FW", "updateMode: " + this.updateMode);
                    BluetoothManager.Companion companion = BluetoothManager.INSTANCE;
                    Context applicationContext = getApplicationContext();
                    Intrinsics.checkNotNullExpressionValue(applicationContext, "getApplicationContext(...)");
                    List<BluetoothGattService> supportedGattServices = companion.getInstance(applicationContext).getSupportedGattServices();
                    BluetoothGattCharacteristic bluetoothGattCharacteristic10 = (supportedGattServices == null || (bluetoothGattService6 = supportedGattServices.get(this.DATA_SERVICE)) == null || (characteristics6 = bluetoothGattService6.getCharacteristics()) == null) ? null : characteristics6.get(this.CHARACTERISTIC_1);
                    Intrinsics.checkNotNull(bluetoothGattCharacteristic10);
                    this.data1Characteristic = bluetoothGattCharacteristic10;
                    BluetoothManager.Companion companion2 = BluetoothManager.INSTANCE;
                    Context applicationContext2 = getApplicationContext();
                    Intrinsics.checkNotNullExpressionValue(applicationContext2, "getApplicationContext(...)");
                    List<BluetoothGattService> supportedGattServices2 = companion2.getInstance(applicationContext2).getSupportedGattServices();
                    BluetoothGattCharacteristic bluetoothGattCharacteristic11 = (supportedGattServices2 == null || (bluetoothGattService5 = supportedGattServices2.get(this.DATA_SERVICE)) == null || (characteristics5 = bluetoothGattService5.getCharacteristics()) == null) ? null : characteristics5.get(this.CHARACTERISTIC_2);
                    Intrinsics.checkNotNull(bluetoothGattCharacteristic11);
                    this.data2Characteristic = bluetoothGattCharacteristic11;
                    BluetoothManager.Companion companion3 = BluetoothManager.INSTANCE;
                    Context applicationContext3 = getApplicationContext();
                    Intrinsics.checkNotNullExpressionValue(applicationContext3, "getApplicationContext(...)");
                    List<BluetoothGattService> supportedGattServices3 = companion3.getInstance(applicationContext3).getSupportedGattServices();
                    BluetoothGattCharacteristic bluetoothGattCharacteristic12 = (supportedGattServices3 == null || (bluetoothGattService4 = supportedGattServices3.get(this.DATA_SERVICE)) == null || (characteristics4 = bluetoothGattService4.getCharacteristics()) == null) ? null : characteristics4.get(this.CHARACTERISTIC_3);
                    Intrinsics.checkNotNull(bluetoothGattCharacteristic12);
                    this.data3Characteristic = bluetoothGattCharacteristic12;
                    BluetoothManager.Companion companion4 = BluetoothManager.INSTANCE;
                    Context applicationContext4 = getApplicationContext();
                    Intrinsics.checkNotNullExpressionValue(applicationContext4, "getApplicationContext(...)");
                    List<BluetoothGattService> supportedGattServices4 = companion4.getInstance(applicationContext4).getSupportedGattServices();
                    BluetoothGattCharacteristic bluetoothGattCharacteristic13 = (supportedGattServices4 == null || (bluetoothGattService3 = supportedGattServices4.get(this.DATA_SERVICE)) == null || (characteristics3 = bluetoothGattService3.getCharacteristics()) == null) ? null : characteristics3.get(this.CHARACTERISTIC_4);
                    Intrinsics.checkNotNull(bluetoothGattCharacteristic13);
                    this.data4Characteristic = bluetoothGattCharacteristic13;
                    BluetoothManager.Companion companion5 = BluetoothManager.INSTANCE;
                    Context applicationContext5 = getApplicationContext();
                    Intrinsics.checkNotNullExpressionValue(applicationContext5, "getApplicationContext(...)");
                    List<BluetoothGattService> supportedGattServices5 = companion5.getInstance(applicationContext5).getSupportedGattServices();
                    BluetoothGattCharacteristic bluetoothGattCharacteristic14 = (supportedGattServices5 == null || (bluetoothGattService2 = supportedGattServices5.get(this.DATA_SERVICE)) == null || (characteristics2 = bluetoothGattService2.getCharacteristics()) == null) ? null : characteristics2.get(this.CHARACTERISTIC_5);
                    Intrinsics.checkNotNull(bluetoothGattCharacteristic14);
                    this.data5Characteristic = bluetoothGattCharacteristic14;
                    BluetoothManager.Companion companion6 = BluetoothManager.INSTANCE;
                    Context applicationContext6 = getApplicationContext();
                    Intrinsics.checkNotNullExpressionValue(applicationContext6, "getApplicationContext(...)");
                    List<BluetoothGattService> supportedGattServices6 = companion6.getInstance(applicationContext6).getSupportedGattServices();
                    BluetoothGattCharacteristic bluetoothGattCharacteristic15 = (supportedGattServices6 == null || (bluetoothGattService = supportedGattServices6.get(this.NOTIFICATION_SERVICE)) == null || (characteristics = bluetoothGattService.getCharacteristics()) == null) ? null : characteristics.get(this.CHARACTERISTIC_1);
                    Intrinsics.checkNotNull(bluetoothGattCharacteristic15);
                    this.comNotifyCharacteristic = bluetoothGattCharacteristic15;
                    if (Build.VERSION.SDK_INT < 33) {
                        BluetoothGattCharacteristic bluetoothGattCharacteristic16 = this.data1Characteristic;
                        if (bluetoothGattCharacteristic16 == null) {
                            Intrinsics.throwUninitializedPropertyAccessException("data1Characteristic");
                            bluetoothGattCharacteristic16 = null;
                        }
                        bluetoothGattCharacteristic16.setWriteType(1);
                        BluetoothGattCharacteristic bluetoothGattCharacteristic17 = this.data2Characteristic;
                        if (bluetoothGattCharacteristic17 == null) {
                            Intrinsics.throwUninitializedPropertyAccessException("data2Characteristic");
                            bluetoothGattCharacteristic17 = null;
                        }
                        bluetoothGattCharacteristic17.setWriteType(1);
                        BluetoothGattCharacteristic bluetoothGattCharacteristic18 = this.data3Characteristic;
                        if (bluetoothGattCharacteristic18 == null) {
                            Intrinsics.throwUninitializedPropertyAccessException("data3Characteristic");
                            bluetoothGattCharacteristic18 = null;
                        }
                        bluetoothGattCharacteristic18.setWriteType(1);
                        BluetoothGattCharacteristic bluetoothGattCharacteristic19 = this.data4Characteristic;
                        if (bluetoothGattCharacteristic19 == null) {
                            Intrinsics.throwUninitializedPropertyAccessException("data4Characteristic");
                            bluetoothGattCharacteristic19 = null;
                        }
                        bluetoothGattCharacteristic19.setWriteType(1);
                        BluetoothGattCharacteristic bluetoothGattCharacteristic20 = this.data5Characteristic;
                        if (bluetoothGattCharacteristic20 == null) {
                            Intrinsics.throwUninitializedPropertyAccessException("data5Characteristic");
                            bluetoothGattCharacteristic20 = null;
                        }
                        bluetoothGattCharacteristic20.setWriteType(1);
                        BluetoothGattCharacteristic bluetoothGattCharacteristic21 = this.comNotifyCharacteristic;
                        if (bluetoothGattCharacteristic21 == null) {
                            Intrinsics.throwUninitializedPropertyAccessException("comNotifyCharacteristic");
                            bluetoothGattCharacteristic21 = null;
                        }
                        bluetoothGattCharacteristic21.setWriteType(1);
                        BluetoothGattCharacteristic bluetoothGattCharacteristic22 = this.data1Characteristic;
                        if (bluetoothGattCharacteristic22 == null) {
                            Intrinsics.throwUninitializedPropertyAccessException("data1Characteristic");
                            bluetoothGattCharacteristic22 = null;
                        }
                        c20921.L$0 = this;
                        c20921.label = 1;
                        if (readCharacteristic(bluetoothGattCharacteristic22, c20921) == coroutine_suspended) {
                            return coroutine_suspended;
                        }
                        firmWareUpdateWorker = this;
                        bluetoothGattCharacteristic = firmWareUpdateWorker.data2Characteristic;
                        if (bluetoothGattCharacteristic == null) {
                            Intrinsics.throwUninitializedPropertyAccessException("data2Characteristic");
                            bluetoothGattCharacteristic = null;
                        }
                        c20921.L$0 = firmWareUpdateWorker;
                        c20921.label = 2;
                        if (firmWareUpdateWorker.readCharacteristic(bluetoothGattCharacteristic, c20921) == coroutine_suspended) {
                            return coroutine_suspended;
                        }
                        bluetoothGattCharacteristic2 = firmWareUpdateWorker.data3Characteristic;
                        if (bluetoothGattCharacteristic2 == null) {
                            Intrinsics.throwUninitializedPropertyAccessException("data3Characteristic");
                            bluetoothGattCharacteristic2 = null;
                        }
                        c20921.L$0 = firmWareUpdateWorker;
                        c20921.label = 3;
                        if (firmWareUpdateWorker.readCharacteristic(bluetoothGattCharacteristic2, c20921) == coroutine_suspended) {
                            return coroutine_suspended;
                        }
                        bluetoothGattCharacteristic3 = firmWareUpdateWorker.data4Characteristic;
                        if (bluetoothGattCharacteristic3 == null) {
                            Intrinsics.throwUninitializedPropertyAccessException("data4Characteristic");
                            bluetoothGattCharacteristic3 = null;
                        }
                        c20921.L$0 = firmWareUpdateWorker;
                        c20921.label = 4;
                        if (firmWareUpdateWorker.readCharacteristic(bluetoothGattCharacteristic3, c20921) == coroutine_suspended) {
                            return coroutine_suspended;
                        }
                        bluetoothGattCharacteristic4 = firmWareUpdateWorker.data5Characteristic;
                        if (bluetoothGattCharacteristic4 == null) {
                            Intrinsics.throwUninitializedPropertyAccessException("data5Characteristic");
                            bluetoothGattCharacteristic4 = null;
                        }
                        c20921.L$0 = firmWareUpdateWorker;
                        c20921.label = 5;
                        if (firmWareUpdateWorker.readCharacteristic(bluetoothGattCharacteristic4, c20921) == coroutine_suspended) {
                            return coroutine_suspended;
                        }
                        bluetoothGattCharacteristic5 = firmWareUpdateWorker.data1Characteristic;
                        if (bluetoothGattCharacteristic5 == null) {
                            Intrinsics.throwUninitializedPropertyAccessException("data1Characteristic");
                            bluetoothGattCharacteristic5 = null;
                        }
                        c20921.L$0 = firmWareUpdateWorker;
                        c20921.label = 6;
                        if (firmWareUpdateWorker.enableNotificationCharacteristic(bluetoothGattCharacteristic5, c20921) == coroutine_suspended) {
                            return coroutine_suspended;
                        }
                        bluetoothGattCharacteristic6 = firmWareUpdateWorker.data2Characteristic;
                        if (bluetoothGattCharacteristic6 == null) {
                            Intrinsics.throwUninitializedPropertyAccessException("data2Characteristic");
                            bluetoothGattCharacteristic6 = null;
                        }
                        c20921.L$0 = firmWareUpdateWorker;
                        c20921.label = 7;
                        if (firmWareUpdateWorker.enableNotificationCharacteristic(bluetoothGattCharacteristic6, c20921) == coroutine_suspended) {
                            return coroutine_suspended;
                        }
                        bluetoothGattCharacteristic7 = firmWareUpdateWorker.data3Characteristic;
                        if (bluetoothGattCharacteristic7 == null) {
                            Intrinsics.throwUninitializedPropertyAccessException("data3Characteristic");
                            bluetoothGattCharacteristic7 = null;
                        }
                        c20921.L$0 = firmWareUpdateWorker;
                        c20921.label = 8;
                        if (firmWareUpdateWorker.enableNotificationCharacteristic(bluetoothGattCharacteristic7, c20921) == coroutine_suspended) {
                            return coroutine_suspended;
                        }
                        bluetoothGattCharacteristic8 = firmWareUpdateWorker.data4Characteristic;
                        if (bluetoothGattCharacteristic8 == null) {
                            Intrinsics.throwUninitializedPropertyAccessException("data4Characteristic");
                            bluetoothGattCharacteristic8 = null;
                        }
                        c20921.L$0 = firmWareUpdateWorker;
                        c20921.label = 9;
                        if (firmWareUpdateWorker.enableNotificationCharacteristic(bluetoothGattCharacteristic8, c20921) == coroutine_suspended) {
                            return coroutine_suspended;
                        }
                        bluetoothGattCharacteristic9 = firmWareUpdateWorker.data5Characteristic;
                        if (bluetoothGattCharacteristic9 == null) {
                            Intrinsics.throwUninitializedPropertyAccessException("data5Characteristic");
                            bluetoothGattCharacteristic9 = null;
                        }
                        c20921.L$0 = firmWareUpdateWorker;
                        c20921.label = 10;
                        if (firmWareUpdateWorker.enableNotificationCharacteristic(bluetoothGattCharacteristic9, c20921) == coroutine_suspended) {
                            return coroutine_suspended;
                        }
                    } else {
                        firmWareUpdateWorker = this;
                    }
                    if (firmWareUpdateWorker.readFirmwareFile()) {
                        c20921.L$0 = null;
                        c20921.label = 11;
                        objUpdateFirmware = firmWareUpdateWorker.updateFirmware(c20921);
                        if (objUpdateFirmware == coroutine_suspended) {
                            return coroutine_suspended;
                        }
                        if (((Boolean) objUpdateFirmware).booleanValue()) {
                            return ListenableWorker.Result.success();
                        }
                        return ListenableWorker.Result.failure();
                    }
                    return ListenableWorker.Result.failure();
                case 1:
                    firmWareUpdateWorker = (FirmWareUpdateWorker) c20921.L$0;
                    ResultKt.throwOnFailure(objUpdateFirmware);
                    bluetoothGattCharacteristic = firmWareUpdateWorker.data2Characteristic;
                    if (bluetoothGattCharacteristic == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("data2Characteristic");
                        bluetoothGattCharacteristic = null;
                    }
                    c20921.L$0 = firmWareUpdateWorker;
                    c20921.label = 2;
                    if (firmWareUpdateWorker.readCharacteristic(bluetoothGattCharacteristic, c20921) == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    bluetoothGattCharacteristic2 = firmWareUpdateWorker.data3Characteristic;
                    if (bluetoothGattCharacteristic2 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("data3Characteristic");
                        bluetoothGattCharacteristic2 = null;
                    }
                    c20921.L$0 = firmWareUpdateWorker;
                    c20921.label = 3;
                    if (firmWareUpdateWorker.readCharacteristic(bluetoothGattCharacteristic2, c20921) == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    bluetoothGattCharacteristic3 = firmWareUpdateWorker.data4Characteristic;
                    if (bluetoothGattCharacteristic3 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("data4Characteristic");
                        bluetoothGattCharacteristic3 = null;
                    }
                    c20921.L$0 = firmWareUpdateWorker;
                    c20921.label = 4;
                    if (firmWareUpdateWorker.readCharacteristic(bluetoothGattCharacteristic3, c20921) == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    bluetoothGattCharacteristic4 = firmWareUpdateWorker.data5Characteristic;
                    if (bluetoothGattCharacteristic4 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("data5Characteristic");
                        bluetoothGattCharacteristic4 = null;
                    }
                    c20921.L$0 = firmWareUpdateWorker;
                    c20921.label = 5;
                    if (firmWareUpdateWorker.readCharacteristic(bluetoothGattCharacteristic4, c20921) == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    bluetoothGattCharacteristic5 = firmWareUpdateWorker.data1Characteristic;
                    if (bluetoothGattCharacteristic5 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("data1Characteristic");
                        bluetoothGattCharacteristic5 = null;
                    }
                    c20921.L$0 = firmWareUpdateWorker;
                    c20921.label = 6;
                    if (firmWareUpdateWorker.enableNotificationCharacteristic(bluetoothGattCharacteristic5, c20921) == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    bluetoothGattCharacteristic6 = firmWareUpdateWorker.data2Characteristic;
                    if (bluetoothGattCharacteristic6 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("data2Characteristic");
                        bluetoothGattCharacteristic6 = null;
                    }
                    c20921.L$0 = firmWareUpdateWorker;
                    c20921.label = 7;
                    if (firmWareUpdateWorker.enableNotificationCharacteristic(bluetoothGattCharacteristic6, c20921) == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    bluetoothGattCharacteristic7 = firmWareUpdateWorker.data3Characteristic;
                    if (bluetoothGattCharacteristic7 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("data3Characteristic");
                        bluetoothGattCharacteristic7 = null;
                    }
                    c20921.L$0 = firmWareUpdateWorker;
                    c20921.label = 8;
                    if (firmWareUpdateWorker.enableNotificationCharacteristic(bluetoothGattCharacteristic7, c20921) == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    bluetoothGattCharacteristic8 = firmWareUpdateWorker.data4Characteristic;
                    if (bluetoothGattCharacteristic8 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("data4Characteristic");
                        bluetoothGattCharacteristic8 = null;
                    }
                    c20921.L$0 = firmWareUpdateWorker;
                    c20921.label = 9;
                    if (firmWareUpdateWorker.enableNotificationCharacteristic(bluetoothGattCharacteristic8, c20921) == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    bluetoothGattCharacteristic9 = firmWareUpdateWorker.data5Characteristic;
                    if (bluetoothGattCharacteristic9 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("data5Characteristic");
                        bluetoothGattCharacteristic9 = null;
                    }
                    c20921.L$0 = firmWareUpdateWorker;
                    c20921.label = 10;
                    if (firmWareUpdateWorker.enableNotificationCharacteristic(bluetoothGattCharacteristic9, c20921) == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (firmWareUpdateWorker.readFirmwareFile()) {
                        c20921.L$0 = null;
                        c20921.label = 11;
                        objUpdateFirmware = firmWareUpdateWorker.updateFirmware(c20921);
                        if (objUpdateFirmware == coroutine_suspended) {
                            return coroutine_suspended;
                        }
                        if (((Boolean) objUpdateFirmware).booleanValue()) {
                            return ListenableWorker.Result.success();
                        }
                        return ListenableWorker.Result.failure();
                    }
                    return ListenableWorker.Result.failure();
                case 2:
                    firmWareUpdateWorker = (FirmWareUpdateWorker) c20921.L$0;
                    ResultKt.throwOnFailure(objUpdateFirmware);
                    bluetoothGattCharacteristic2 = firmWareUpdateWorker.data3Characteristic;
                    if (bluetoothGattCharacteristic2 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("data3Characteristic");
                        bluetoothGattCharacteristic2 = null;
                    }
                    c20921.L$0 = firmWareUpdateWorker;
                    c20921.label = 3;
                    if (firmWareUpdateWorker.readCharacteristic(bluetoothGattCharacteristic2, c20921) == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    bluetoothGattCharacteristic3 = firmWareUpdateWorker.data4Characteristic;
                    if (bluetoothGattCharacteristic3 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("data4Characteristic");
                        bluetoothGattCharacteristic3 = null;
                    }
                    c20921.L$0 = firmWareUpdateWorker;
                    c20921.label = 4;
                    if (firmWareUpdateWorker.readCharacteristic(bluetoothGattCharacteristic3, c20921) == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    bluetoothGattCharacteristic4 = firmWareUpdateWorker.data5Characteristic;
                    if (bluetoothGattCharacteristic4 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("data5Characteristic");
                        bluetoothGattCharacteristic4 = null;
                    }
                    c20921.L$0 = firmWareUpdateWorker;
                    c20921.label = 5;
                    if (firmWareUpdateWorker.readCharacteristic(bluetoothGattCharacteristic4, c20921) == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    bluetoothGattCharacteristic5 = firmWareUpdateWorker.data1Characteristic;
                    if (bluetoothGattCharacteristic5 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("data1Characteristic");
                        bluetoothGattCharacteristic5 = null;
                    }
                    c20921.L$0 = firmWareUpdateWorker;
                    c20921.label = 6;
                    if (firmWareUpdateWorker.enableNotificationCharacteristic(bluetoothGattCharacteristic5, c20921) == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    bluetoothGattCharacteristic6 = firmWareUpdateWorker.data2Characteristic;
                    if (bluetoothGattCharacteristic6 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("data2Characteristic");
                        bluetoothGattCharacteristic6 = null;
                    }
                    c20921.L$0 = firmWareUpdateWorker;
                    c20921.label = 7;
                    if (firmWareUpdateWorker.enableNotificationCharacteristic(bluetoothGattCharacteristic6, c20921) == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    bluetoothGattCharacteristic7 = firmWareUpdateWorker.data3Characteristic;
                    if (bluetoothGattCharacteristic7 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("data3Characteristic");
                        bluetoothGattCharacteristic7 = null;
                    }
                    c20921.L$0 = firmWareUpdateWorker;
                    c20921.label = 8;
                    if (firmWareUpdateWorker.enableNotificationCharacteristic(bluetoothGattCharacteristic7, c20921) == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    bluetoothGattCharacteristic8 = firmWareUpdateWorker.data4Characteristic;
                    if (bluetoothGattCharacteristic8 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("data4Characteristic");
                        bluetoothGattCharacteristic8 = null;
                    }
                    c20921.L$0 = firmWareUpdateWorker;
                    c20921.label = 9;
                    if (firmWareUpdateWorker.enableNotificationCharacteristic(bluetoothGattCharacteristic8, c20921) == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    bluetoothGattCharacteristic9 = firmWareUpdateWorker.data5Characteristic;
                    if (bluetoothGattCharacteristic9 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("data5Characteristic");
                        bluetoothGattCharacteristic9 = null;
                    }
                    c20921.L$0 = firmWareUpdateWorker;
                    c20921.label = 10;
                    if (firmWareUpdateWorker.enableNotificationCharacteristic(bluetoothGattCharacteristic9, c20921) == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (firmWareUpdateWorker.readFirmwareFile()) {
                        c20921.L$0 = null;
                        c20921.label = 11;
                        objUpdateFirmware = firmWareUpdateWorker.updateFirmware(c20921);
                        if (objUpdateFirmware == coroutine_suspended) {
                            return coroutine_suspended;
                        }
                        if (((Boolean) objUpdateFirmware).booleanValue()) {
                            return ListenableWorker.Result.success();
                        }
                        return ListenableWorker.Result.failure();
                    }
                    return ListenableWorker.Result.failure();
                case 3:
                    firmWareUpdateWorker = (FirmWareUpdateWorker) c20921.L$0;
                    ResultKt.throwOnFailure(objUpdateFirmware);
                    bluetoothGattCharacteristic3 = firmWareUpdateWorker.data4Characteristic;
                    if (bluetoothGattCharacteristic3 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("data4Characteristic");
                        bluetoothGattCharacteristic3 = null;
                    }
                    c20921.L$0 = firmWareUpdateWorker;
                    c20921.label = 4;
                    if (firmWareUpdateWorker.readCharacteristic(bluetoothGattCharacteristic3, c20921) == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    bluetoothGattCharacteristic4 = firmWareUpdateWorker.data5Characteristic;
                    if (bluetoothGattCharacteristic4 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("data5Characteristic");
                        bluetoothGattCharacteristic4 = null;
                    }
                    c20921.L$0 = firmWareUpdateWorker;
                    c20921.label = 5;
                    if (firmWareUpdateWorker.readCharacteristic(bluetoothGattCharacteristic4, c20921) == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    bluetoothGattCharacteristic5 = firmWareUpdateWorker.data1Characteristic;
                    if (bluetoothGattCharacteristic5 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("data1Characteristic");
                        bluetoothGattCharacteristic5 = null;
                    }
                    c20921.L$0 = firmWareUpdateWorker;
                    c20921.label = 6;
                    if (firmWareUpdateWorker.enableNotificationCharacteristic(bluetoothGattCharacteristic5, c20921) == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    bluetoothGattCharacteristic6 = firmWareUpdateWorker.data2Characteristic;
                    if (bluetoothGattCharacteristic6 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("data2Characteristic");
                        bluetoothGattCharacteristic6 = null;
                    }
                    c20921.L$0 = firmWareUpdateWorker;
                    c20921.label = 7;
                    if (firmWareUpdateWorker.enableNotificationCharacteristic(bluetoothGattCharacteristic6, c20921) == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    bluetoothGattCharacteristic7 = firmWareUpdateWorker.data3Characteristic;
                    if (bluetoothGattCharacteristic7 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("data3Characteristic");
                        bluetoothGattCharacteristic7 = null;
                    }
                    c20921.L$0 = firmWareUpdateWorker;
                    c20921.label = 8;
                    if (firmWareUpdateWorker.enableNotificationCharacteristic(bluetoothGattCharacteristic7, c20921) == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    bluetoothGattCharacteristic8 = firmWareUpdateWorker.data4Characteristic;
                    if (bluetoothGattCharacteristic8 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("data4Characteristic");
                        bluetoothGattCharacteristic8 = null;
                    }
                    c20921.L$0 = firmWareUpdateWorker;
                    c20921.label = 9;
                    if (firmWareUpdateWorker.enableNotificationCharacteristic(bluetoothGattCharacteristic8, c20921) == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    bluetoothGattCharacteristic9 = firmWareUpdateWorker.data5Characteristic;
                    if (bluetoothGattCharacteristic9 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("data5Characteristic");
                        bluetoothGattCharacteristic9 = null;
                    }
                    c20921.L$0 = firmWareUpdateWorker;
                    c20921.label = 10;
                    if (firmWareUpdateWorker.enableNotificationCharacteristic(bluetoothGattCharacteristic9, c20921) == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (firmWareUpdateWorker.readFirmwareFile()) {
                        c20921.L$0 = null;
                        c20921.label = 11;
                        objUpdateFirmware = firmWareUpdateWorker.updateFirmware(c20921);
                        if (objUpdateFirmware == coroutine_suspended) {
                            return coroutine_suspended;
                        }
                        if (((Boolean) objUpdateFirmware).booleanValue()) {
                            return ListenableWorker.Result.success();
                        }
                        return ListenableWorker.Result.failure();
                    }
                    return ListenableWorker.Result.failure();
                case 4:
                    firmWareUpdateWorker = (FirmWareUpdateWorker) c20921.L$0;
                    ResultKt.throwOnFailure(objUpdateFirmware);
                    bluetoothGattCharacteristic4 = firmWareUpdateWorker.data5Characteristic;
                    if (bluetoothGattCharacteristic4 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("data5Characteristic");
                        bluetoothGattCharacteristic4 = null;
                    }
                    c20921.L$0 = firmWareUpdateWorker;
                    c20921.label = 5;
                    if (firmWareUpdateWorker.readCharacteristic(bluetoothGattCharacteristic4, c20921) == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    bluetoothGattCharacteristic5 = firmWareUpdateWorker.data1Characteristic;
                    if (bluetoothGattCharacteristic5 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("data1Characteristic");
                        bluetoothGattCharacteristic5 = null;
                    }
                    c20921.L$0 = firmWareUpdateWorker;
                    c20921.label = 6;
                    if (firmWareUpdateWorker.enableNotificationCharacteristic(bluetoothGattCharacteristic5, c20921) == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    bluetoothGattCharacteristic6 = firmWareUpdateWorker.data2Characteristic;
                    if (bluetoothGattCharacteristic6 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("data2Characteristic");
                        bluetoothGattCharacteristic6 = null;
                    }
                    c20921.L$0 = firmWareUpdateWorker;
                    c20921.label = 7;
                    if (firmWareUpdateWorker.enableNotificationCharacteristic(bluetoothGattCharacteristic6, c20921) == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    bluetoothGattCharacteristic7 = firmWareUpdateWorker.data3Characteristic;
                    if (bluetoothGattCharacteristic7 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("data3Characteristic");
                        bluetoothGattCharacteristic7 = null;
                    }
                    c20921.L$0 = firmWareUpdateWorker;
                    c20921.label = 8;
                    if (firmWareUpdateWorker.enableNotificationCharacteristic(bluetoothGattCharacteristic7, c20921) == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    bluetoothGattCharacteristic8 = firmWareUpdateWorker.data4Characteristic;
                    if (bluetoothGattCharacteristic8 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("data4Characteristic");
                        bluetoothGattCharacteristic8 = null;
                    }
                    c20921.L$0 = firmWareUpdateWorker;
                    c20921.label = 9;
                    if (firmWareUpdateWorker.enableNotificationCharacteristic(bluetoothGattCharacteristic8, c20921) == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    bluetoothGattCharacteristic9 = firmWareUpdateWorker.data5Characteristic;
                    if (bluetoothGattCharacteristic9 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("data5Characteristic");
                        bluetoothGattCharacteristic9 = null;
                    }
                    c20921.L$0 = firmWareUpdateWorker;
                    c20921.label = 10;
                    if (firmWareUpdateWorker.enableNotificationCharacteristic(bluetoothGattCharacteristic9, c20921) == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (firmWareUpdateWorker.readFirmwareFile()) {
                        c20921.L$0 = null;
                        c20921.label = 11;
                        objUpdateFirmware = firmWareUpdateWorker.updateFirmware(c20921);
                        if (objUpdateFirmware == coroutine_suspended) {
                            return coroutine_suspended;
                        }
                        if (((Boolean) objUpdateFirmware).booleanValue()) {
                            return ListenableWorker.Result.success();
                        }
                        return ListenableWorker.Result.failure();
                    }
                    return ListenableWorker.Result.failure();
                case 5:
                    firmWareUpdateWorker = (FirmWareUpdateWorker) c20921.L$0;
                    ResultKt.throwOnFailure(objUpdateFirmware);
                    bluetoothGattCharacteristic5 = firmWareUpdateWorker.data1Characteristic;
                    if (bluetoothGattCharacteristic5 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("data1Characteristic");
                        bluetoothGattCharacteristic5 = null;
                    }
                    c20921.L$0 = firmWareUpdateWorker;
                    c20921.label = 6;
                    if (firmWareUpdateWorker.enableNotificationCharacteristic(bluetoothGattCharacteristic5, c20921) == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    bluetoothGattCharacteristic6 = firmWareUpdateWorker.data2Characteristic;
                    if (bluetoothGattCharacteristic6 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("data2Characteristic");
                        bluetoothGattCharacteristic6 = null;
                    }
                    c20921.L$0 = firmWareUpdateWorker;
                    c20921.label = 7;
                    if (firmWareUpdateWorker.enableNotificationCharacteristic(bluetoothGattCharacteristic6, c20921) == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    bluetoothGattCharacteristic7 = firmWareUpdateWorker.data3Characteristic;
                    if (bluetoothGattCharacteristic7 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("data3Characteristic");
                        bluetoothGattCharacteristic7 = null;
                    }
                    c20921.L$0 = firmWareUpdateWorker;
                    c20921.label = 8;
                    if (firmWareUpdateWorker.enableNotificationCharacteristic(bluetoothGattCharacteristic7, c20921) == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    bluetoothGattCharacteristic8 = firmWareUpdateWorker.data4Characteristic;
                    if (bluetoothGattCharacteristic8 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("data4Characteristic");
                        bluetoothGattCharacteristic8 = null;
                    }
                    c20921.L$0 = firmWareUpdateWorker;
                    c20921.label = 9;
                    if (firmWareUpdateWorker.enableNotificationCharacteristic(bluetoothGattCharacteristic8, c20921) == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    bluetoothGattCharacteristic9 = firmWareUpdateWorker.data5Characteristic;
                    if (bluetoothGattCharacteristic9 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("data5Characteristic");
                        bluetoothGattCharacteristic9 = null;
                    }
                    c20921.L$0 = firmWareUpdateWorker;
                    c20921.label = 10;
                    if (firmWareUpdateWorker.enableNotificationCharacteristic(bluetoothGattCharacteristic9, c20921) == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (firmWareUpdateWorker.readFirmwareFile()) {
                        c20921.L$0 = null;
                        c20921.label = 11;
                        objUpdateFirmware = firmWareUpdateWorker.updateFirmware(c20921);
                        if (objUpdateFirmware == coroutine_suspended) {
                            return coroutine_suspended;
                        }
                        if (((Boolean) objUpdateFirmware).booleanValue()) {
                            return ListenableWorker.Result.success();
                        }
                        return ListenableWorker.Result.failure();
                    }
                    return ListenableWorker.Result.failure();
                case 6:
                    firmWareUpdateWorker = (FirmWareUpdateWorker) c20921.L$0;
                    ResultKt.throwOnFailure(objUpdateFirmware);
                    bluetoothGattCharacteristic6 = firmWareUpdateWorker.data2Characteristic;
                    if (bluetoothGattCharacteristic6 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("data2Characteristic");
                        bluetoothGattCharacteristic6 = null;
                    }
                    c20921.L$0 = firmWareUpdateWorker;
                    c20921.label = 7;
                    if (firmWareUpdateWorker.enableNotificationCharacteristic(bluetoothGattCharacteristic6, c20921) == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    bluetoothGattCharacteristic7 = firmWareUpdateWorker.data3Characteristic;
                    if (bluetoothGattCharacteristic7 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("data3Characteristic");
                        bluetoothGattCharacteristic7 = null;
                    }
                    c20921.L$0 = firmWareUpdateWorker;
                    c20921.label = 8;
                    if (firmWareUpdateWorker.enableNotificationCharacteristic(bluetoothGattCharacteristic7, c20921) == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    bluetoothGattCharacteristic8 = firmWareUpdateWorker.data4Characteristic;
                    if (bluetoothGattCharacteristic8 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("data4Characteristic");
                        bluetoothGattCharacteristic8 = null;
                    }
                    c20921.L$0 = firmWareUpdateWorker;
                    c20921.label = 9;
                    if (firmWareUpdateWorker.enableNotificationCharacteristic(bluetoothGattCharacteristic8, c20921) == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    bluetoothGattCharacteristic9 = firmWareUpdateWorker.data5Characteristic;
                    if (bluetoothGattCharacteristic9 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("data5Characteristic");
                        bluetoothGattCharacteristic9 = null;
                    }
                    c20921.L$0 = firmWareUpdateWorker;
                    c20921.label = 10;
                    if (firmWareUpdateWorker.enableNotificationCharacteristic(bluetoothGattCharacteristic9, c20921) == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (firmWareUpdateWorker.readFirmwareFile()) {
                        c20921.L$0 = null;
                        c20921.label = 11;
                        objUpdateFirmware = firmWareUpdateWorker.updateFirmware(c20921);
                        if (objUpdateFirmware == coroutine_suspended) {
                            return coroutine_suspended;
                        }
                        if (((Boolean) objUpdateFirmware).booleanValue()) {
                            return ListenableWorker.Result.success();
                        }
                        return ListenableWorker.Result.failure();
                    }
                    return ListenableWorker.Result.failure();
                case 7:
                    firmWareUpdateWorker = (FirmWareUpdateWorker) c20921.L$0;
                    ResultKt.throwOnFailure(objUpdateFirmware);
                    bluetoothGattCharacteristic7 = firmWareUpdateWorker.data3Characteristic;
                    if (bluetoothGattCharacteristic7 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("data3Characteristic");
                        bluetoothGattCharacteristic7 = null;
                    }
                    c20921.L$0 = firmWareUpdateWorker;
                    c20921.label = 8;
                    if (firmWareUpdateWorker.enableNotificationCharacteristic(bluetoothGattCharacteristic7, c20921) == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    bluetoothGattCharacteristic8 = firmWareUpdateWorker.data4Characteristic;
                    if (bluetoothGattCharacteristic8 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("data4Characteristic");
                        bluetoothGattCharacteristic8 = null;
                    }
                    c20921.L$0 = firmWareUpdateWorker;
                    c20921.label = 9;
                    if (firmWareUpdateWorker.enableNotificationCharacteristic(bluetoothGattCharacteristic8, c20921) == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    bluetoothGattCharacteristic9 = firmWareUpdateWorker.data5Characteristic;
                    if (bluetoothGattCharacteristic9 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("data5Characteristic");
                        bluetoothGattCharacteristic9 = null;
                    }
                    c20921.L$0 = firmWareUpdateWorker;
                    c20921.label = 10;
                    if (firmWareUpdateWorker.enableNotificationCharacteristic(bluetoothGattCharacteristic9, c20921) == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (firmWareUpdateWorker.readFirmwareFile()) {
                        c20921.L$0 = null;
                        c20921.label = 11;
                        objUpdateFirmware = firmWareUpdateWorker.updateFirmware(c20921);
                        if (objUpdateFirmware == coroutine_suspended) {
                            return coroutine_suspended;
                        }
                        if (((Boolean) objUpdateFirmware).booleanValue()) {
                            return ListenableWorker.Result.success();
                        }
                        return ListenableWorker.Result.failure();
                    }
                    return ListenableWorker.Result.failure();
                case 8:
                    firmWareUpdateWorker = (FirmWareUpdateWorker) c20921.L$0;
                    ResultKt.throwOnFailure(objUpdateFirmware);
                    bluetoothGattCharacteristic8 = firmWareUpdateWorker.data4Characteristic;
                    if (bluetoothGattCharacteristic8 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("data4Characteristic");
                        bluetoothGattCharacteristic8 = null;
                    }
                    c20921.L$0 = firmWareUpdateWorker;
                    c20921.label = 9;
                    if (firmWareUpdateWorker.enableNotificationCharacteristic(bluetoothGattCharacteristic8, c20921) == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    bluetoothGattCharacteristic9 = firmWareUpdateWorker.data5Characteristic;
                    if (bluetoothGattCharacteristic9 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("data5Characteristic");
                        bluetoothGattCharacteristic9 = null;
                    }
                    c20921.L$0 = firmWareUpdateWorker;
                    c20921.label = 10;
                    if (firmWareUpdateWorker.enableNotificationCharacteristic(bluetoothGattCharacteristic9, c20921) == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (firmWareUpdateWorker.readFirmwareFile()) {
                        c20921.L$0 = null;
                        c20921.label = 11;
                        objUpdateFirmware = firmWareUpdateWorker.updateFirmware(c20921);
                        if (objUpdateFirmware == coroutine_suspended) {
                            return coroutine_suspended;
                        }
                        if (((Boolean) objUpdateFirmware).booleanValue()) {
                            return ListenableWorker.Result.success();
                        }
                        return ListenableWorker.Result.failure();
                    }
                    return ListenableWorker.Result.failure();
                case 9:
                    firmWareUpdateWorker = (FirmWareUpdateWorker) c20921.L$0;
                    ResultKt.throwOnFailure(objUpdateFirmware);
                    bluetoothGattCharacteristic9 = firmWareUpdateWorker.data5Characteristic;
                    if (bluetoothGattCharacteristic9 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("data5Characteristic");
                        bluetoothGattCharacteristic9 = null;
                    }
                    c20921.L$0 = firmWareUpdateWorker;
                    c20921.label = 10;
                    if (firmWareUpdateWorker.enableNotificationCharacteristic(bluetoothGattCharacteristic9, c20921) == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (firmWareUpdateWorker.readFirmwareFile()) {
                        c20921.L$0 = null;
                        c20921.label = 11;
                        objUpdateFirmware = firmWareUpdateWorker.updateFirmware(c20921);
                        if (objUpdateFirmware == coroutine_suspended) {
                            return coroutine_suspended;
                        }
                        if (((Boolean) objUpdateFirmware).booleanValue()) {
                            return ListenableWorker.Result.success();
                        }
                        return ListenableWorker.Result.failure();
                    }
                    return ListenableWorker.Result.failure();
                case 10:
                    firmWareUpdateWorker = (FirmWareUpdateWorker) c20921.L$0;
                    ResultKt.throwOnFailure(objUpdateFirmware);
                    if (firmWareUpdateWorker.readFirmwareFile()) {
                        c20921.L$0 = null;
                        c20921.label = 11;
                        objUpdateFirmware = firmWareUpdateWorker.updateFirmware(c20921);
                        if (objUpdateFirmware == coroutine_suspended) {
                            return coroutine_suspended;
                        }
                        if (((Boolean) objUpdateFirmware).booleanValue()) {
                            return ListenableWorker.Result.success();
                        }
                        return ListenableWorker.Result.failure();
                    }
                    return ListenableWorker.Result.failure();
                case 11:
                    ResultKt.throwOnFailure(objUpdateFirmware);
                    if (((Boolean) objUpdateFirmware).booleanValue()) {
                        return ListenableWorker.Result.success();
                    }
                    return ListenableWorker.Result.failure();
                default:
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
        } catch (Exception e) {
            e.printStackTrace();
            return ListenableWorker.Result.failure();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final Object readCharacteristic(BluetoothGattCharacteristic bluetoothGattCharacteristic, Continuation<? super Unit> continuation) {
        BluetoothGatt btGatt = getBtGatt();
        if (btGatt != null) {
            Boxing.boxBoolean(btGatt.readCharacteristic(bluetoothGattCharacteristic));
        }
        Object objDelay = DelayKt.delay(30L, continuation);
        return objDelay == IntrinsicsKt.getCOROUTINE_SUSPENDED() ? objDelay : Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final Object enableNotificationCharacteristic(BluetoothGattCharacteristic bluetoothGattCharacteristic, Continuation<? super Unit> continuation) {
        BluetoothGatt btGatt = getBtGatt();
        if (btGatt != null) {
            Boxing.boxBoolean(btGatt.setCharacteristicNotification(bluetoothGattCharacteristic, true));
        }
        BluetoothGattDescriptor descriptor = bluetoothGattCharacteristic.getDescriptor(UUID.fromString(Constant.INSTANCE.getCLIENT_CHARACTERISTIC_CONFIG()));
        if (Build.VERSION.SDK_INT >= 33) {
            BluetoothGatt btGatt2 = getBtGatt();
            if (btGatt2 != null) {
                Boxing.boxInt(btGatt2.writeDescriptor(descriptor, BluetoothGattDescriptor.ENABLE_NOTIFICATION_VALUE));
            }
        } else {
            descriptor.setValue(BluetoothGattDescriptor.ENABLE_NOTIFICATION_VALUE);
            BluetoothGatt btGatt3 = getBtGatt();
            if (btGatt3 != null) {
                Boxing.boxBoolean(btGatt3.writeDescriptor(descriptor));
            }
        }
        Object objDelay = DelayKt.delay(30L, continuation);
        return objDelay == IntrinsicsKt.getCOROUTINE_SUSPENDED() ? objDelay : Unit.INSTANCE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final Object updateFirmware(Continuation<? super Boolean> continuation) {
        this.progress = 0;
        this.all_data_piece = 0;
        this.send_data_piece = 0;
        getSharePref().setFwDownloadComplete(false);
        getSharePref().setFwFlashing(false);
        if (Intrinsics.areEqual(this.updateMode, "N") || Intrinsics.areEqual(this.updateType, "D")) {
            VersionUpdateModel versionUpdateModel = getVersionUpdateModel();
            Intrinsics.checkNotNull(versionUpdateModel);
            return doNormalUpdate(versionUpdateModel, continuation);
        }
        VersionUpdateModel versionUpdateModel2 = getVersionUpdateModel();
        Intrinsics.checkNotNull(versionUpdateModel2);
        return doRecoveryUpdate(versionUpdateModel2, continuation);
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Code duplicated, block: B:173:0x0402 A[Catch: Exception -> 0x0c1c, TryCatch #4 {Exception -> 0x0c1c, blocks: (B:171:0x03fa, B:173:0x0402, B:175:0x0407), top: B:396:0x03fa }] */
    /* JADX WARN: Code duplicated, block: B:175:0x0407 A[Catch: Exception -> 0x0c1c, TRY_LEAVE, TryCatch #4 {Exception -> 0x0c1c, blocks: (B:171:0x03fa, B:173:0x0402, B:175:0x0407), top: B:396:0x03fa }] */
    /* JADX WARN: Code duplicated, block: B:181:0x0468 A[RETURN] */
    /* JADX WARN: Code duplicated, block: B:184:0x0471 A[Catch: Exception -> 0x0c16, TryCatch #8 {Exception -> 0x0c16, blocks: (B:351:0x0be5, B:353:0x0bed, B:354:0x0bf9, B:344:0x0bba, B:346:0x0bc2, B:348:0x0bd8, B:356:0x0bff, B:358:0x0c05, B:337:0x0b63, B:339:0x0b6b, B:341:0x0b70, B:334:0x0b1a, B:327:0x0afa, B:329:0x0b02, B:331:0x0b07, B:320:0x0a98, B:322:0x0aa0, B:324:0x0aa5, B:317:0x0a4f, B:310:0x0a2f, B:312:0x0a37, B:314:0x0a3c, B:299:0x09a4, B:301:0x09ac, B:303:0x09b1, B:305:0x09c6, B:307:0x09da, B:296:0x095b, B:289:0x093b, B:291:0x0943, B:293:0x0948, B:282:0x08d9, B:284:0x08e1, B:286:0x08e6, B:279:0x0890, B:272:0x0870, B:274:0x0878, B:276:0x087d, B:265:0x080e, B:267:0x0816, B:269:0x081b, B:262:0x07c5, B:255:0x07a5, B:257:0x07ad, B:259:0x07b2, B:248:0x0743, B:250:0x074b, B:252:0x0750, B:245:0x06fa, B:238:0x06da, B:240:0x06e2, B:242:0x06e7, B:231:0x0678, B:233:0x0680, B:235:0x0685, B:228:0x062f, B:221:0x060f, B:223:0x0617, B:225:0x061c, B:218:0x0608, B:206:0x0550, B:199:0x0531, B:201:0x0539, B:203:0x053e, B:192:0x04d0, B:194:0x04d8, B:196:0x04dd, B:189:0x0488, B:182:0x0469, B:184:0x0471, B:186:0x0476, B:179:0x0462), top: B:402:0x0462 }] */
    /* JADX WARN: Code duplicated, block: B:186:0x0476 A[Catch: Exception -> 0x0c16, TryCatch #8 {Exception -> 0x0c16, blocks: (B:351:0x0be5, B:353:0x0bed, B:354:0x0bf9, B:344:0x0bba, B:346:0x0bc2, B:348:0x0bd8, B:356:0x0bff, B:358:0x0c05, B:337:0x0b63, B:339:0x0b6b, B:341:0x0b70, B:334:0x0b1a, B:327:0x0afa, B:329:0x0b02, B:331:0x0b07, B:320:0x0a98, B:322:0x0aa0, B:324:0x0aa5, B:317:0x0a4f, B:310:0x0a2f, B:312:0x0a37, B:314:0x0a3c, B:299:0x09a4, B:301:0x09ac, B:303:0x09b1, B:305:0x09c6, B:307:0x09da, B:296:0x095b, B:289:0x093b, B:291:0x0943, B:293:0x0948, B:282:0x08d9, B:284:0x08e1, B:286:0x08e6, B:279:0x0890, B:272:0x0870, B:274:0x0878, B:276:0x087d, B:265:0x080e, B:267:0x0816, B:269:0x081b, B:262:0x07c5, B:255:0x07a5, B:257:0x07ad, B:259:0x07b2, B:248:0x0743, B:250:0x074b, B:252:0x0750, B:245:0x06fa, B:238:0x06da, B:240:0x06e2, B:242:0x06e7, B:231:0x0678, B:233:0x0680, B:235:0x0685, B:228:0x062f, B:221:0x060f, B:223:0x0617, B:225:0x061c, B:218:0x0608, B:206:0x0550, B:199:0x0531, B:201:0x0539, B:203:0x053e, B:192:0x04d0, B:194:0x04d8, B:196:0x04dd, B:189:0x0488, B:182:0x0469, B:184:0x0471, B:186:0x0476, B:179:0x0462), top: B:402:0x0462 }] */
    /* JADX WARN: Code duplicated, block: B:188:0x0487 A[RETURN] */
    /* JADX WARN: Code duplicated, block: B:191:0x04cf A[RETURN] */
    /* JADX WARN: Code duplicated, block: B:194:0x04d8 A[Catch: Exception -> 0x0c16, TryCatch #8 {Exception -> 0x0c16, blocks: (B:351:0x0be5, B:353:0x0bed, B:354:0x0bf9, B:344:0x0bba, B:346:0x0bc2, B:348:0x0bd8, B:356:0x0bff, B:358:0x0c05, B:337:0x0b63, B:339:0x0b6b, B:341:0x0b70, B:334:0x0b1a, B:327:0x0afa, B:329:0x0b02, B:331:0x0b07, B:320:0x0a98, B:322:0x0aa0, B:324:0x0aa5, B:317:0x0a4f, B:310:0x0a2f, B:312:0x0a37, B:314:0x0a3c, B:299:0x09a4, B:301:0x09ac, B:303:0x09b1, B:305:0x09c6, B:307:0x09da, B:296:0x095b, B:289:0x093b, B:291:0x0943, B:293:0x0948, B:282:0x08d9, B:284:0x08e1, B:286:0x08e6, B:279:0x0890, B:272:0x0870, B:274:0x0878, B:276:0x087d, B:265:0x080e, B:267:0x0816, B:269:0x081b, B:262:0x07c5, B:255:0x07a5, B:257:0x07ad, B:259:0x07b2, B:248:0x0743, B:250:0x074b, B:252:0x0750, B:245:0x06fa, B:238:0x06da, B:240:0x06e2, B:242:0x06e7, B:231:0x0678, B:233:0x0680, B:235:0x0685, B:228:0x062f, B:221:0x060f, B:223:0x0617, B:225:0x061c, B:218:0x0608, B:206:0x0550, B:199:0x0531, B:201:0x0539, B:203:0x053e, B:192:0x04d0, B:194:0x04d8, B:196:0x04dd, B:189:0x0488, B:182:0x0469, B:184:0x0471, B:186:0x0476, B:179:0x0462), top: B:402:0x0462 }] */
    /* JADX WARN: Code duplicated, block: B:196:0x04dd A[Catch: Exception -> 0x0c16, TryCatch #8 {Exception -> 0x0c16, blocks: (B:351:0x0be5, B:353:0x0bed, B:354:0x0bf9, B:344:0x0bba, B:346:0x0bc2, B:348:0x0bd8, B:356:0x0bff, B:358:0x0c05, B:337:0x0b63, B:339:0x0b6b, B:341:0x0b70, B:334:0x0b1a, B:327:0x0afa, B:329:0x0b02, B:331:0x0b07, B:320:0x0a98, B:322:0x0aa0, B:324:0x0aa5, B:317:0x0a4f, B:310:0x0a2f, B:312:0x0a37, B:314:0x0a3c, B:299:0x09a4, B:301:0x09ac, B:303:0x09b1, B:305:0x09c6, B:307:0x09da, B:296:0x095b, B:289:0x093b, B:291:0x0943, B:293:0x0948, B:282:0x08d9, B:284:0x08e1, B:286:0x08e6, B:279:0x0890, B:272:0x0870, B:274:0x0878, B:276:0x087d, B:265:0x080e, B:267:0x0816, B:269:0x081b, B:262:0x07c5, B:255:0x07a5, B:257:0x07ad, B:259:0x07b2, B:248:0x0743, B:250:0x074b, B:252:0x0750, B:245:0x06fa, B:238:0x06da, B:240:0x06e2, B:242:0x06e7, B:231:0x0678, B:233:0x0680, B:235:0x0685, B:228:0x062f, B:221:0x060f, B:223:0x0617, B:225:0x061c, B:218:0x0608, B:206:0x0550, B:199:0x0531, B:201:0x0539, B:203:0x053e, B:192:0x04d0, B:194:0x04d8, B:196:0x04dd, B:189:0x0488, B:182:0x0469, B:184:0x0471, B:186:0x0476, B:179:0x0462), top: B:402:0x0462 }] */
    /* JADX WARN: Code duplicated, block: B:198:0x0530 A[RETURN] */
    /* JADX WARN: Code duplicated, block: B:201:0x0539 A[Catch: Exception -> 0x0c16, TryCatch #8 {Exception -> 0x0c16, blocks: (B:351:0x0be5, B:353:0x0bed, B:354:0x0bf9, B:344:0x0bba, B:346:0x0bc2, B:348:0x0bd8, B:356:0x0bff, B:358:0x0c05, B:337:0x0b63, B:339:0x0b6b, B:341:0x0b70, B:334:0x0b1a, B:327:0x0afa, B:329:0x0b02, B:331:0x0b07, B:320:0x0a98, B:322:0x0aa0, B:324:0x0aa5, B:317:0x0a4f, B:310:0x0a2f, B:312:0x0a37, B:314:0x0a3c, B:299:0x09a4, B:301:0x09ac, B:303:0x09b1, B:305:0x09c6, B:307:0x09da, B:296:0x095b, B:289:0x093b, B:291:0x0943, B:293:0x0948, B:282:0x08d9, B:284:0x08e1, B:286:0x08e6, B:279:0x0890, B:272:0x0870, B:274:0x0878, B:276:0x087d, B:265:0x080e, B:267:0x0816, B:269:0x081b, B:262:0x07c5, B:255:0x07a5, B:257:0x07ad, B:259:0x07b2, B:248:0x0743, B:250:0x074b, B:252:0x0750, B:245:0x06fa, B:238:0x06da, B:240:0x06e2, B:242:0x06e7, B:231:0x0678, B:233:0x0680, B:235:0x0685, B:228:0x062f, B:221:0x060f, B:223:0x0617, B:225:0x061c, B:218:0x0608, B:206:0x0550, B:199:0x0531, B:201:0x0539, B:203:0x053e, B:192:0x04d0, B:194:0x04d8, B:196:0x04dd, B:189:0x0488, B:182:0x0469, B:184:0x0471, B:186:0x0476, B:179:0x0462), top: B:402:0x0462 }] */
    /* JADX WARN: Code duplicated, block: B:203:0x053e A[Catch: Exception -> 0x0c16, TryCatch #8 {Exception -> 0x0c16, blocks: (B:351:0x0be5, B:353:0x0bed, B:354:0x0bf9, B:344:0x0bba, B:346:0x0bc2, B:348:0x0bd8, B:356:0x0bff, B:358:0x0c05, B:337:0x0b63, B:339:0x0b6b, B:341:0x0b70, B:334:0x0b1a, B:327:0x0afa, B:329:0x0b02, B:331:0x0b07, B:320:0x0a98, B:322:0x0aa0, B:324:0x0aa5, B:317:0x0a4f, B:310:0x0a2f, B:312:0x0a37, B:314:0x0a3c, B:299:0x09a4, B:301:0x09ac, B:303:0x09b1, B:305:0x09c6, B:307:0x09da, B:296:0x095b, B:289:0x093b, B:291:0x0943, B:293:0x0948, B:282:0x08d9, B:284:0x08e1, B:286:0x08e6, B:279:0x0890, B:272:0x0870, B:274:0x0878, B:276:0x087d, B:265:0x080e, B:267:0x0816, B:269:0x081b, B:262:0x07c5, B:255:0x07a5, B:257:0x07ad, B:259:0x07b2, B:248:0x0743, B:250:0x074b, B:252:0x0750, B:245:0x06fa, B:238:0x06da, B:240:0x06e2, B:242:0x06e7, B:231:0x0678, B:233:0x0680, B:235:0x0685, B:228:0x062f, B:221:0x060f, B:223:0x0617, B:225:0x061c, B:218:0x0608, B:206:0x0550, B:199:0x0531, B:201:0x0539, B:203:0x053e, B:192:0x04d0, B:194:0x04d8, B:196:0x04dd, B:189:0x0488, B:182:0x0469, B:184:0x0471, B:186:0x0476, B:179:0x0462), top: B:402:0x0462 }] */
    /* JADX WARN: Code duplicated, block: B:205:0x054f A[RETURN] */
    /* JADX WARN: Code duplicated, block: B:208:0x059c A[RETURN] */
    /* JADX WARN: Code duplicated, block: B:209:0x059d  */
    /* JADX WARN: Code duplicated, block: B:216:0x05b2 A[Catch: Exception -> 0x0c12, TRY_ENTER, TRY_LEAVE, TryCatch #9 {Exception -> 0x0c12, blocks: (B:210:0x05a0, B:216:0x05b2), top: B:403:0x05a0 }] */
    /* JADX WARN: Code duplicated, block: B:220:0x060e A[RETURN] */
    /* JADX WARN: Code duplicated, block: B:223:0x0617 A[Catch: Exception -> 0x0c16, TryCatch #8 {Exception -> 0x0c16, blocks: (B:351:0x0be5, B:353:0x0bed, B:354:0x0bf9, B:344:0x0bba, B:346:0x0bc2, B:348:0x0bd8, B:356:0x0bff, B:358:0x0c05, B:337:0x0b63, B:339:0x0b6b, B:341:0x0b70, B:334:0x0b1a, B:327:0x0afa, B:329:0x0b02, B:331:0x0b07, B:320:0x0a98, B:322:0x0aa0, B:324:0x0aa5, B:317:0x0a4f, B:310:0x0a2f, B:312:0x0a37, B:314:0x0a3c, B:299:0x09a4, B:301:0x09ac, B:303:0x09b1, B:305:0x09c6, B:307:0x09da, B:296:0x095b, B:289:0x093b, B:291:0x0943, B:293:0x0948, B:282:0x08d9, B:284:0x08e1, B:286:0x08e6, B:279:0x0890, B:272:0x0870, B:274:0x0878, B:276:0x087d, B:265:0x080e, B:267:0x0816, B:269:0x081b, B:262:0x07c5, B:255:0x07a5, B:257:0x07ad, B:259:0x07b2, B:248:0x0743, B:250:0x074b, B:252:0x0750, B:245:0x06fa, B:238:0x06da, B:240:0x06e2, B:242:0x06e7, B:231:0x0678, B:233:0x0680, B:235:0x0685, B:228:0x062f, B:221:0x060f, B:223:0x0617, B:225:0x061c, B:218:0x0608, B:206:0x0550, B:199:0x0531, B:201:0x0539, B:203:0x053e, B:192:0x04d0, B:194:0x04d8, B:196:0x04dd, B:189:0x0488, B:182:0x0469, B:184:0x0471, B:186:0x0476, B:179:0x0462), top: B:402:0x0462 }] */
    /* JADX WARN: Code duplicated, block: B:225:0x061c A[Catch: Exception -> 0x0c16, TryCatch #8 {Exception -> 0x0c16, blocks: (B:351:0x0be5, B:353:0x0bed, B:354:0x0bf9, B:344:0x0bba, B:346:0x0bc2, B:348:0x0bd8, B:356:0x0bff, B:358:0x0c05, B:337:0x0b63, B:339:0x0b6b, B:341:0x0b70, B:334:0x0b1a, B:327:0x0afa, B:329:0x0b02, B:331:0x0b07, B:320:0x0a98, B:322:0x0aa0, B:324:0x0aa5, B:317:0x0a4f, B:310:0x0a2f, B:312:0x0a37, B:314:0x0a3c, B:299:0x09a4, B:301:0x09ac, B:303:0x09b1, B:305:0x09c6, B:307:0x09da, B:296:0x095b, B:289:0x093b, B:291:0x0943, B:293:0x0948, B:282:0x08d9, B:284:0x08e1, B:286:0x08e6, B:279:0x0890, B:272:0x0870, B:274:0x0878, B:276:0x087d, B:265:0x080e, B:267:0x0816, B:269:0x081b, B:262:0x07c5, B:255:0x07a5, B:257:0x07ad, B:259:0x07b2, B:248:0x0743, B:250:0x074b, B:252:0x0750, B:245:0x06fa, B:238:0x06da, B:240:0x06e2, B:242:0x06e7, B:231:0x0678, B:233:0x0680, B:235:0x0685, B:228:0x062f, B:221:0x060f, B:223:0x0617, B:225:0x061c, B:218:0x0608, B:206:0x0550, B:199:0x0531, B:201:0x0539, B:203:0x053e, B:192:0x04d0, B:194:0x04d8, B:196:0x04dd, B:189:0x0488, B:182:0x0469, B:184:0x0471, B:186:0x0476, B:179:0x0462), top: B:402:0x0462 }] */
    /* JADX WARN: Code duplicated, block: B:227:0x062e A[RETURN] */
    /* JADX WARN: Code duplicated, block: B:230:0x0677 A[RETURN] */
    /* JADX WARN: Code duplicated, block: B:233:0x0680 A[Catch: Exception -> 0x0c16, TryCatch #8 {Exception -> 0x0c16, blocks: (B:351:0x0be5, B:353:0x0bed, B:354:0x0bf9, B:344:0x0bba, B:346:0x0bc2, B:348:0x0bd8, B:356:0x0bff, B:358:0x0c05, B:337:0x0b63, B:339:0x0b6b, B:341:0x0b70, B:334:0x0b1a, B:327:0x0afa, B:329:0x0b02, B:331:0x0b07, B:320:0x0a98, B:322:0x0aa0, B:324:0x0aa5, B:317:0x0a4f, B:310:0x0a2f, B:312:0x0a37, B:314:0x0a3c, B:299:0x09a4, B:301:0x09ac, B:303:0x09b1, B:305:0x09c6, B:307:0x09da, B:296:0x095b, B:289:0x093b, B:291:0x0943, B:293:0x0948, B:282:0x08d9, B:284:0x08e1, B:286:0x08e6, B:279:0x0890, B:272:0x0870, B:274:0x0878, B:276:0x087d, B:265:0x080e, B:267:0x0816, B:269:0x081b, B:262:0x07c5, B:255:0x07a5, B:257:0x07ad, B:259:0x07b2, B:248:0x0743, B:250:0x074b, B:252:0x0750, B:245:0x06fa, B:238:0x06da, B:240:0x06e2, B:242:0x06e7, B:231:0x0678, B:233:0x0680, B:235:0x0685, B:228:0x062f, B:221:0x060f, B:223:0x0617, B:225:0x061c, B:218:0x0608, B:206:0x0550, B:199:0x0531, B:201:0x0539, B:203:0x053e, B:192:0x04d0, B:194:0x04d8, B:196:0x04dd, B:189:0x0488, B:182:0x0469, B:184:0x0471, B:186:0x0476, B:179:0x0462), top: B:402:0x0462 }] */
    /* JADX WARN: Code duplicated, block: B:235:0x0685 A[Catch: Exception -> 0x0c16, TryCatch #8 {Exception -> 0x0c16, blocks: (B:351:0x0be5, B:353:0x0bed, B:354:0x0bf9, B:344:0x0bba, B:346:0x0bc2, B:348:0x0bd8, B:356:0x0bff, B:358:0x0c05, B:337:0x0b63, B:339:0x0b6b, B:341:0x0b70, B:334:0x0b1a, B:327:0x0afa, B:329:0x0b02, B:331:0x0b07, B:320:0x0a98, B:322:0x0aa0, B:324:0x0aa5, B:317:0x0a4f, B:310:0x0a2f, B:312:0x0a37, B:314:0x0a3c, B:299:0x09a4, B:301:0x09ac, B:303:0x09b1, B:305:0x09c6, B:307:0x09da, B:296:0x095b, B:289:0x093b, B:291:0x0943, B:293:0x0948, B:282:0x08d9, B:284:0x08e1, B:286:0x08e6, B:279:0x0890, B:272:0x0870, B:274:0x0878, B:276:0x087d, B:265:0x080e, B:267:0x0816, B:269:0x081b, B:262:0x07c5, B:255:0x07a5, B:257:0x07ad, B:259:0x07b2, B:248:0x0743, B:250:0x074b, B:252:0x0750, B:245:0x06fa, B:238:0x06da, B:240:0x06e2, B:242:0x06e7, B:231:0x0678, B:233:0x0680, B:235:0x0685, B:228:0x062f, B:221:0x060f, B:223:0x0617, B:225:0x061c, B:218:0x0608, B:206:0x0550, B:199:0x0531, B:201:0x0539, B:203:0x053e, B:192:0x04d0, B:194:0x04d8, B:196:0x04dd, B:189:0x0488, B:182:0x0469, B:184:0x0471, B:186:0x0476, B:179:0x0462), top: B:402:0x0462 }] */
    /* JADX WARN: Code duplicated, block: B:237:0x06d9 A[RETURN] */
    /* JADX WARN: Code duplicated, block: B:240:0x06e2 A[Catch: Exception -> 0x0c16, TryCatch #8 {Exception -> 0x0c16, blocks: (B:351:0x0be5, B:353:0x0bed, B:354:0x0bf9, B:344:0x0bba, B:346:0x0bc2, B:348:0x0bd8, B:356:0x0bff, B:358:0x0c05, B:337:0x0b63, B:339:0x0b6b, B:341:0x0b70, B:334:0x0b1a, B:327:0x0afa, B:329:0x0b02, B:331:0x0b07, B:320:0x0a98, B:322:0x0aa0, B:324:0x0aa5, B:317:0x0a4f, B:310:0x0a2f, B:312:0x0a37, B:314:0x0a3c, B:299:0x09a4, B:301:0x09ac, B:303:0x09b1, B:305:0x09c6, B:307:0x09da, B:296:0x095b, B:289:0x093b, B:291:0x0943, B:293:0x0948, B:282:0x08d9, B:284:0x08e1, B:286:0x08e6, B:279:0x0890, B:272:0x0870, B:274:0x0878, B:276:0x087d, B:265:0x080e, B:267:0x0816, B:269:0x081b, B:262:0x07c5, B:255:0x07a5, B:257:0x07ad, B:259:0x07b2, B:248:0x0743, B:250:0x074b, B:252:0x0750, B:245:0x06fa, B:238:0x06da, B:240:0x06e2, B:242:0x06e7, B:231:0x0678, B:233:0x0680, B:235:0x0685, B:228:0x062f, B:221:0x060f, B:223:0x0617, B:225:0x061c, B:218:0x0608, B:206:0x0550, B:199:0x0531, B:201:0x0539, B:203:0x053e, B:192:0x04d0, B:194:0x04d8, B:196:0x04dd, B:189:0x0488, B:182:0x0469, B:184:0x0471, B:186:0x0476, B:179:0x0462), top: B:402:0x0462 }] */
    /* JADX WARN: Code duplicated, block: B:242:0x06e7 A[Catch: Exception -> 0x0c16, TryCatch #8 {Exception -> 0x0c16, blocks: (B:351:0x0be5, B:353:0x0bed, B:354:0x0bf9, B:344:0x0bba, B:346:0x0bc2, B:348:0x0bd8, B:356:0x0bff, B:358:0x0c05, B:337:0x0b63, B:339:0x0b6b, B:341:0x0b70, B:334:0x0b1a, B:327:0x0afa, B:329:0x0b02, B:331:0x0b07, B:320:0x0a98, B:322:0x0aa0, B:324:0x0aa5, B:317:0x0a4f, B:310:0x0a2f, B:312:0x0a37, B:314:0x0a3c, B:299:0x09a4, B:301:0x09ac, B:303:0x09b1, B:305:0x09c6, B:307:0x09da, B:296:0x095b, B:289:0x093b, B:291:0x0943, B:293:0x0948, B:282:0x08d9, B:284:0x08e1, B:286:0x08e6, B:279:0x0890, B:272:0x0870, B:274:0x0878, B:276:0x087d, B:265:0x080e, B:267:0x0816, B:269:0x081b, B:262:0x07c5, B:255:0x07a5, B:257:0x07ad, B:259:0x07b2, B:248:0x0743, B:250:0x074b, B:252:0x0750, B:245:0x06fa, B:238:0x06da, B:240:0x06e2, B:242:0x06e7, B:231:0x0678, B:233:0x0680, B:235:0x0685, B:228:0x062f, B:221:0x060f, B:223:0x0617, B:225:0x061c, B:218:0x0608, B:206:0x0550, B:199:0x0531, B:201:0x0539, B:203:0x053e, B:192:0x04d0, B:194:0x04d8, B:196:0x04dd, B:189:0x0488, B:182:0x0469, B:184:0x0471, B:186:0x0476, B:179:0x0462), top: B:402:0x0462 }] */
    /* JADX WARN: Code duplicated, block: B:244:0x06f9 A[RETURN] */
    /* JADX WARN: Code duplicated, block: B:247:0x0742 A[RETURN] */
    /* JADX WARN: Code duplicated, block: B:250:0x074b A[Catch: Exception -> 0x0c16, TryCatch #8 {Exception -> 0x0c16, blocks: (B:351:0x0be5, B:353:0x0bed, B:354:0x0bf9, B:344:0x0bba, B:346:0x0bc2, B:348:0x0bd8, B:356:0x0bff, B:358:0x0c05, B:337:0x0b63, B:339:0x0b6b, B:341:0x0b70, B:334:0x0b1a, B:327:0x0afa, B:329:0x0b02, B:331:0x0b07, B:320:0x0a98, B:322:0x0aa0, B:324:0x0aa5, B:317:0x0a4f, B:310:0x0a2f, B:312:0x0a37, B:314:0x0a3c, B:299:0x09a4, B:301:0x09ac, B:303:0x09b1, B:305:0x09c6, B:307:0x09da, B:296:0x095b, B:289:0x093b, B:291:0x0943, B:293:0x0948, B:282:0x08d9, B:284:0x08e1, B:286:0x08e6, B:279:0x0890, B:272:0x0870, B:274:0x0878, B:276:0x087d, B:265:0x080e, B:267:0x0816, B:269:0x081b, B:262:0x07c5, B:255:0x07a5, B:257:0x07ad, B:259:0x07b2, B:248:0x0743, B:250:0x074b, B:252:0x0750, B:245:0x06fa, B:238:0x06da, B:240:0x06e2, B:242:0x06e7, B:231:0x0678, B:233:0x0680, B:235:0x0685, B:228:0x062f, B:221:0x060f, B:223:0x0617, B:225:0x061c, B:218:0x0608, B:206:0x0550, B:199:0x0531, B:201:0x0539, B:203:0x053e, B:192:0x04d0, B:194:0x04d8, B:196:0x04dd, B:189:0x0488, B:182:0x0469, B:184:0x0471, B:186:0x0476, B:179:0x0462), top: B:402:0x0462 }] */
    /* JADX WARN: Code duplicated, block: B:252:0x0750 A[Catch: Exception -> 0x0c16, TryCatch #8 {Exception -> 0x0c16, blocks: (B:351:0x0be5, B:353:0x0bed, B:354:0x0bf9, B:344:0x0bba, B:346:0x0bc2, B:348:0x0bd8, B:356:0x0bff, B:358:0x0c05, B:337:0x0b63, B:339:0x0b6b, B:341:0x0b70, B:334:0x0b1a, B:327:0x0afa, B:329:0x0b02, B:331:0x0b07, B:320:0x0a98, B:322:0x0aa0, B:324:0x0aa5, B:317:0x0a4f, B:310:0x0a2f, B:312:0x0a37, B:314:0x0a3c, B:299:0x09a4, B:301:0x09ac, B:303:0x09b1, B:305:0x09c6, B:307:0x09da, B:296:0x095b, B:289:0x093b, B:291:0x0943, B:293:0x0948, B:282:0x08d9, B:284:0x08e1, B:286:0x08e6, B:279:0x0890, B:272:0x0870, B:274:0x0878, B:276:0x087d, B:265:0x080e, B:267:0x0816, B:269:0x081b, B:262:0x07c5, B:255:0x07a5, B:257:0x07ad, B:259:0x07b2, B:248:0x0743, B:250:0x074b, B:252:0x0750, B:245:0x06fa, B:238:0x06da, B:240:0x06e2, B:242:0x06e7, B:231:0x0678, B:233:0x0680, B:235:0x0685, B:228:0x062f, B:221:0x060f, B:223:0x0617, B:225:0x061c, B:218:0x0608, B:206:0x0550, B:199:0x0531, B:201:0x0539, B:203:0x053e, B:192:0x04d0, B:194:0x04d8, B:196:0x04dd, B:189:0x0488, B:182:0x0469, B:184:0x0471, B:186:0x0476, B:179:0x0462), top: B:402:0x0462 }] */
    /* JADX WARN: Code duplicated, block: B:254:0x07a4 A[RETURN] */
    /* JADX WARN: Code duplicated, block: B:257:0x07ad A[Catch: Exception -> 0x0c16, TryCatch #8 {Exception -> 0x0c16, blocks: (B:351:0x0be5, B:353:0x0bed, B:354:0x0bf9, B:344:0x0bba, B:346:0x0bc2, B:348:0x0bd8, B:356:0x0bff, B:358:0x0c05, B:337:0x0b63, B:339:0x0b6b, B:341:0x0b70, B:334:0x0b1a, B:327:0x0afa, B:329:0x0b02, B:331:0x0b07, B:320:0x0a98, B:322:0x0aa0, B:324:0x0aa5, B:317:0x0a4f, B:310:0x0a2f, B:312:0x0a37, B:314:0x0a3c, B:299:0x09a4, B:301:0x09ac, B:303:0x09b1, B:305:0x09c6, B:307:0x09da, B:296:0x095b, B:289:0x093b, B:291:0x0943, B:293:0x0948, B:282:0x08d9, B:284:0x08e1, B:286:0x08e6, B:279:0x0890, B:272:0x0870, B:274:0x0878, B:276:0x087d, B:265:0x080e, B:267:0x0816, B:269:0x081b, B:262:0x07c5, B:255:0x07a5, B:257:0x07ad, B:259:0x07b2, B:248:0x0743, B:250:0x074b, B:252:0x0750, B:245:0x06fa, B:238:0x06da, B:240:0x06e2, B:242:0x06e7, B:231:0x0678, B:233:0x0680, B:235:0x0685, B:228:0x062f, B:221:0x060f, B:223:0x0617, B:225:0x061c, B:218:0x0608, B:206:0x0550, B:199:0x0531, B:201:0x0539, B:203:0x053e, B:192:0x04d0, B:194:0x04d8, B:196:0x04dd, B:189:0x0488, B:182:0x0469, B:184:0x0471, B:186:0x0476, B:179:0x0462), top: B:402:0x0462 }] */
    /* JADX WARN: Code duplicated, block: B:259:0x07b2 A[Catch: Exception -> 0x0c16, TryCatch #8 {Exception -> 0x0c16, blocks: (B:351:0x0be5, B:353:0x0bed, B:354:0x0bf9, B:344:0x0bba, B:346:0x0bc2, B:348:0x0bd8, B:356:0x0bff, B:358:0x0c05, B:337:0x0b63, B:339:0x0b6b, B:341:0x0b70, B:334:0x0b1a, B:327:0x0afa, B:329:0x0b02, B:331:0x0b07, B:320:0x0a98, B:322:0x0aa0, B:324:0x0aa5, B:317:0x0a4f, B:310:0x0a2f, B:312:0x0a37, B:314:0x0a3c, B:299:0x09a4, B:301:0x09ac, B:303:0x09b1, B:305:0x09c6, B:307:0x09da, B:296:0x095b, B:289:0x093b, B:291:0x0943, B:293:0x0948, B:282:0x08d9, B:284:0x08e1, B:286:0x08e6, B:279:0x0890, B:272:0x0870, B:274:0x0878, B:276:0x087d, B:265:0x080e, B:267:0x0816, B:269:0x081b, B:262:0x07c5, B:255:0x07a5, B:257:0x07ad, B:259:0x07b2, B:248:0x0743, B:250:0x074b, B:252:0x0750, B:245:0x06fa, B:238:0x06da, B:240:0x06e2, B:242:0x06e7, B:231:0x0678, B:233:0x0680, B:235:0x0685, B:228:0x062f, B:221:0x060f, B:223:0x0617, B:225:0x061c, B:218:0x0608, B:206:0x0550, B:199:0x0531, B:201:0x0539, B:203:0x053e, B:192:0x04d0, B:194:0x04d8, B:196:0x04dd, B:189:0x0488, B:182:0x0469, B:184:0x0471, B:186:0x0476, B:179:0x0462), top: B:402:0x0462 }] */
    /* JADX WARN: Code duplicated, block: B:261:0x07c4 A[RETURN] */
    /* JADX WARN: Code duplicated, block: B:264:0x080d A[RETURN] */
    /* JADX WARN: Code duplicated, block: B:267:0x0816 A[Catch: Exception -> 0x0c16, TryCatch #8 {Exception -> 0x0c16, blocks: (B:351:0x0be5, B:353:0x0bed, B:354:0x0bf9, B:344:0x0bba, B:346:0x0bc2, B:348:0x0bd8, B:356:0x0bff, B:358:0x0c05, B:337:0x0b63, B:339:0x0b6b, B:341:0x0b70, B:334:0x0b1a, B:327:0x0afa, B:329:0x0b02, B:331:0x0b07, B:320:0x0a98, B:322:0x0aa0, B:324:0x0aa5, B:317:0x0a4f, B:310:0x0a2f, B:312:0x0a37, B:314:0x0a3c, B:299:0x09a4, B:301:0x09ac, B:303:0x09b1, B:305:0x09c6, B:307:0x09da, B:296:0x095b, B:289:0x093b, B:291:0x0943, B:293:0x0948, B:282:0x08d9, B:284:0x08e1, B:286:0x08e6, B:279:0x0890, B:272:0x0870, B:274:0x0878, B:276:0x087d, B:265:0x080e, B:267:0x0816, B:269:0x081b, B:262:0x07c5, B:255:0x07a5, B:257:0x07ad, B:259:0x07b2, B:248:0x0743, B:250:0x074b, B:252:0x0750, B:245:0x06fa, B:238:0x06da, B:240:0x06e2, B:242:0x06e7, B:231:0x0678, B:233:0x0680, B:235:0x0685, B:228:0x062f, B:221:0x060f, B:223:0x0617, B:225:0x061c, B:218:0x0608, B:206:0x0550, B:199:0x0531, B:201:0x0539, B:203:0x053e, B:192:0x04d0, B:194:0x04d8, B:196:0x04dd, B:189:0x0488, B:182:0x0469, B:184:0x0471, B:186:0x0476, B:179:0x0462), top: B:402:0x0462 }] */
    /* JADX WARN: Code duplicated, block: B:269:0x081b A[Catch: Exception -> 0x0c16, TryCatch #8 {Exception -> 0x0c16, blocks: (B:351:0x0be5, B:353:0x0bed, B:354:0x0bf9, B:344:0x0bba, B:346:0x0bc2, B:348:0x0bd8, B:356:0x0bff, B:358:0x0c05, B:337:0x0b63, B:339:0x0b6b, B:341:0x0b70, B:334:0x0b1a, B:327:0x0afa, B:329:0x0b02, B:331:0x0b07, B:320:0x0a98, B:322:0x0aa0, B:324:0x0aa5, B:317:0x0a4f, B:310:0x0a2f, B:312:0x0a37, B:314:0x0a3c, B:299:0x09a4, B:301:0x09ac, B:303:0x09b1, B:305:0x09c6, B:307:0x09da, B:296:0x095b, B:289:0x093b, B:291:0x0943, B:293:0x0948, B:282:0x08d9, B:284:0x08e1, B:286:0x08e6, B:279:0x0890, B:272:0x0870, B:274:0x0878, B:276:0x087d, B:265:0x080e, B:267:0x0816, B:269:0x081b, B:262:0x07c5, B:255:0x07a5, B:257:0x07ad, B:259:0x07b2, B:248:0x0743, B:250:0x074b, B:252:0x0750, B:245:0x06fa, B:238:0x06da, B:240:0x06e2, B:242:0x06e7, B:231:0x0678, B:233:0x0680, B:235:0x0685, B:228:0x062f, B:221:0x060f, B:223:0x0617, B:225:0x061c, B:218:0x0608, B:206:0x0550, B:199:0x0531, B:201:0x0539, B:203:0x053e, B:192:0x04d0, B:194:0x04d8, B:196:0x04dd, B:189:0x0488, B:182:0x0469, B:184:0x0471, B:186:0x0476, B:179:0x0462), top: B:402:0x0462 }] */
    /* JADX WARN: Code duplicated, block: B:271:0x086f A[RETURN] */
    /* JADX WARN: Code duplicated, block: B:274:0x0878 A[Catch: Exception -> 0x0c16, TryCatch #8 {Exception -> 0x0c16, blocks: (B:351:0x0be5, B:353:0x0bed, B:354:0x0bf9, B:344:0x0bba, B:346:0x0bc2, B:348:0x0bd8, B:356:0x0bff, B:358:0x0c05, B:337:0x0b63, B:339:0x0b6b, B:341:0x0b70, B:334:0x0b1a, B:327:0x0afa, B:329:0x0b02, B:331:0x0b07, B:320:0x0a98, B:322:0x0aa0, B:324:0x0aa5, B:317:0x0a4f, B:310:0x0a2f, B:312:0x0a37, B:314:0x0a3c, B:299:0x09a4, B:301:0x09ac, B:303:0x09b1, B:305:0x09c6, B:307:0x09da, B:296:0x095b, B:289:0x093b, B:291:0x0943, B:293:0x0948, B:282:0x08d9, B:284:0x08e1, B:286:0x08e6, B:279:0x0890, B:272:0x0870, B:274:0x0878, B:276:0x087d, B:265:0x080e, B:267:0x0816, B:269:0x081b, B:262:0x07c5, B:255:0x07a5, B:257:0x07ad, B:259:0x07b2, B:248:0x0743, B:250:0x074b, B:252:0x0750, B:245:0x06fa, B:238:0x06da, B:240:0x06e2, B:242:0x06e7, B:231:0x0678, B:233:0x0680, B:235:0x0685, B:228:0x062f, B:221:0x060f, B:223:0x0617, B:225:0x061c, B:218:0x0608, B:206:0x0550, B:199:0x0531, B:201:0x0539, B:203:0x053e, B:192:0x04d0, B:194:0x04d8, B:196:0x04dd, B:189:0x0488, B:182:0x0469, B:184:0x0471, B:186:0x0476, B:179:0x0462), top: B:402:0x0462 }] */
    /* JADX WARN: Code duplicated, block: B:276:0x087d A[Catch: Exception -> 0x0c16, TryCatch #8 {Exception -> 0x0c16, blocks: (B:351:0x0be5, B:353:0x0bed, B:354:0x0bf9, B:344:0x0bba, B:346:0x0bc2, B:348:0x0bd8, B:356:0x0bff, B:358:0x0c05, B:337:0x0b63, B:339:0x0b6b, B:341:0x0b70, B:334:0x0b1a, B:327:0x0afa, B:329:0x0b02, B:331:0x0b07, B:320:0x0a98, B:322:0x0aa0, B:324:0x0aa5, B:317:0x0a4f, B:310:0x0a2f, B:312:0x0a37, B:314:0x0a3c, B:299:0x09a4, B:301:0x09ac, B:303:0x09b1, B:305:0x09c6, B:307:0x09da, B:296:0x095b, B:289:0x093b, B:291:0x0943, B:293:0x0948, B:282:0x08d9, B:284:0x08e1, B:286:0x08e6, B:279:0x0890, B:272:0x0870, B:274:0x0878, B:276:0x087d, B:265:0x080e, B:267:0x0816, B:269:0x081b, B:262:0x07c5, B:255:0x07a5, B:257:0x07ad, B:259:0x07b2, B:248:0x0743, B:250:0x074b, B:252:0x0750, B:245:0x06fa, B:238:0x06da, B:240:0x06e2, B:242:0x06e7, B:231:0x0678, B:233:0x0680, B:235:0x0685, B:228:0x062f, B:221:0x060f, B:223:0x0617, B:225:0x061c, B:218:0x0608, B:206:0x0550, B:199:0x0531, B:201:0x0539, B:203:0x053e, B:192:0x04d0, B:194:0x04d8, B:196:0x04dd, B:189:0x0488, B:182:0x0469, B:184:0x0471, B:186:0x0476, B:179:0x0462), top: B:402:0x0462 }] */
    /* JADX WARN: Code duplicated, block: B:278:0x088f A[RETURN] */
    /* JADX WARN: Code duplicated, block: B:281:0x08d8 A[RETURN] */
    /* JADX WARN: Code duplicated, block: B:284:0x08e1 A[Catch: Exception -> 0x0c16, TryCatch #8 {Exception -> 0x0c16, blocks: (B:351:0x0be5, B:353:0x0bed, B:354:0x0bf9, B:344:0x0bba, B:346:0x0bc2, B:348:0x0bd8, B:356:0x0bff, B:358:0x0c05, B:337:0x0b63, B:339:0x0b6b, B:341:0x0b70, B:334:0x0b1a, B:327:0x0afa, B:329:0x0b02, B:331:0x0b07, B:320:0x0a98, B:322:0x0aa0, B:324:0x0aa5, B:317:0x0a4f, B:310:0x0a2f, B:312:0x0a37, B:314:0x0a3c, B:299:0x09a4, B:301:0x09ac, B:303:0x09b1, B:305:0x09c6, B:307:0x09da, B:296:0x095b, B:289:0x093b, B:291:0x0943, B:293:0x0948, B:282:0x08d9, B:284:0x08e1, B:286:0x08e6, B:279:0x0890, B:272:0x0870, B:274:0x0878, B:276:0x087d, B:265:0x080e, B:267:0x0816, B:269:0x081b, B:262:0x07c5, B:255:0x07a5, B:257:0x07ad, B:259:0x07b2, B:248:0x0743, B:250:0x074b, B:252:0x0750, B:245:0x06fa, B:238:0x06da, B:240:0x06e2, B:242:0x06e7, B:231:0x0678, B:233:0x0680, B:235:0x0685, B:228:0x062f, B:221:0x060f, B:223:0x0617, B:225:0x061c, B:218:0x0608, B:206:0x0550, B:199:0x0531, B:201:0x0539, B:203:0x053e, B:192:0x04d0, B:194:0x04d8, B:196:0x04dd, B:189:0x0488, B:182:0x0469, B:184:0x0471, B:186:0x0476, B:179:0x0462), top: B:402:0x0462 }] */
    /* JADX WARN: Code duplicated, block: B:286:0x08e6 A[Catch: Exception -> 0x0c16, TryCatch #8 {Exception -> 0x0c16, blocks: (B:351:0x0be5, B:353:0x0bed, B:354:0x0bf9, B:344:0x0bba, B:346:0x0bc2, B:348:0x0bd8, B:356:0x0bff, B:358:0x0c05, B:337:0x0b63, B:339:0x0b6b, B:341:0x0b70, B:334:0x0b1a, B:327:0x0afa, B:329:0x0b02, B:331:0x0b07, B:320:0x0a98, B:322:0x0aa0, B:324:0x0aa5, B:317:0x0a4f, B:310:0x0a2f, B:312:0x0a37, B:314:0x0a3c, B:299:0x09a4, B:301:0x09ac, B:303:0x09b1, B:305:0x09c6, B:307:0x09da, B:296:0x095b, B:289:0x093b, B:291:0x0943, B:293:0x0948, B:282:0x08d9, B:284:0x08e1, B:286:0x08e6, B:279:0x0890, B:272:0x0870, B:274:0x0878, B:276:0x087d, B:265:0x080e, B:267:0x0816, B:269:0x081b, B:262:0x07c5, B:255:0x07a5, B:257:0x07ad, B:259:0x07b2, B:248:0x0743, B:250:0x074b, B:252:0x0750, B:245:0x06fa, B:238:0x06da, B:240:0x06e2, B:242:0x06e7, B:231:0x0678, B:233:0x0680, B:235:0x0685, B:228:0x062f, B:221:0x060f, B:223:0x0617, B:225:0x061c, B:218:0x0608, B:206:0x0550, B:199:0x0531, B:201:0x0539, B:203:0x053e, B:192:0x04d0, B:194:0x04d8, B:196:0x04dd, B:189:0x0488, B:182:0x0469, B:184:0x0471, B:186:0x0476, B:179:0x0462), top: B:402:0x0462 }] */
    /* JADX WARN: Code duplicated, block: B:288:0x093a A[RETURN] */
    /* JADX WARN: Code duplicated, block: B:291:0x0943 A[Catch: Exception -> 0x0c16, TryCatch #8 {Exception -> 0x0c16, blocks: (B:351:0x0be5, B:353:0x0bed, B:354:0x0bf9, B:344:0x0bba, B:346:0x0bc2, B:348:0x0bd8, B:356:0x0bff, B:358:0x0c05, B:337:0x0b63, B:339:0x0b6b, B:341:0x0b70, B:334:0x0b1a, B:327:0x0afa, B:329:0x0b02, B:331:0x0b07, B:320:0x0a98, B:322:0x0aa0, B:324:0x0aa5, B:317:0x0a4f, B:310:0x0a2f, B:312:0x0a37, B:314:0x0a3c, B:299:0x09a4, B:301:0x09ac, B:303:0x09b1, B:305:0x09c6, B:307:0x09da, B:296:0x095b, B:289:0x093b, B:291:0x0943, B:293:0x0948, B:282:0x08d9, B:284:0x08e1, B:286:0x08e6, B:279:0x0890, B:272:0x0870, B:274:0x0878, B:276:0x087d, B:265:0x080e, B:267:0x0816, B:269:0x081b, B:262:0x07c5, B:255:0x07a5, B:257:0x07ad, B:259:0x07b2, B:248:0x0743, B:250:0x074b, B:252:0x0750, B:245:0x06fa, B:238:0x06da, B:240:0x06e2, B:242:0x06e7, B:231:0x0678, B:233:0x0680, B:235:0x0685, B:228:0x062f, B:221:0x060f, B:223:0x0617, B:225:0x061c, B:218:0x0608, B:206:0x0550, B:199:0x0531, B:201:0x0539, B:203:0x053e, B:192:0x04d0, B:194:0x04d8, B:196:0x04dd, B:189:0x0488, B:182:0x0469, B:184:0x0471, B:186:0x0476, B:179:0x0462), top: B:402:0x0462 }] */
    /* JADX WARN: Code duplicated, block: B:293:0x0948 A[Catch: Exception -> 0x0c16, TryCatch #8 {Exception -> 0x0c16, blocks: (B:351:0x0be5, B:353:0x0bed, B:354:0x0bf9, B:344:0x0bba, B:346:0x0bc2, B:348:0x0bd8, B:356:0x0bff, B:358:0x0c05, B:337:0x0b63, B:339:0x0b6b, B:341:0x0b70, B:334:0x0b1a, B:327:0x0afa, B:329:0x0b02, B:331:0x0b07, B:320:0x0a98, B:322:0x0aa0, B:324:0x0aa5, B:317:0x0a4f, B:310:0x0a2f, B:312:0x0a37, B:314:0x0a3c, B:299:0x09a4, B:301:0x09ac, B:303:0x09b1, B:305:0x09c6, B:307:0x09da, B:296:0x095b, B:289:0x093b, B:291:0x0943, B:293:0x0948, B:282:0x08d9, B:284:0x08e1, B:286:0x08e6, B:279:0x0890, B:272:0x0870, B:274:0x0878, B:276:0x087d, B:265:0x080e, B:267:0x0816, B:269:0x081b, B:262:0x07c5, B:255:0x07a5, B:257:0x07ad, B:259:0x07b2, B:248:0x0743, B:250:0x074b, B:252:0x0750, B:245:0x06fa, B:238:0x06da, B:240:0x06e2, B:242:0x06e7, B:231:0x0678, B:233:0x0680, B:235:0x0685, B:228:0x062f, B:221:0x060f, B:223:0x0617, B:225:0x061c, B:218:0x0608, B:206:0x0550, B:199:0x0531, B:201:0x0539, B:203:0x053e, B:192:0x04d0, B:194:0x04d8, B:196:0x04dd, B:189:0x0488, B:182:0x0469, B:184:0x0471, B:186:0x0476, B:179:0x0462), top: B:402:0x0462 }] */
    /* JADX WARN: Code duplicated, block: B:295:0x095a A[RETURN] */
    /* JADX WARN: Code duplicated, block: B:298:0x09a3 A[RETURN] */
    /* JADX WARN: Code duplicated, block: B:301:0x09ac A[Catch: Exception -> 0x0c16, TryCatch #8 {Exception -> 0x0c16, blocks: (B:351:0x0be5, B:353:0x0bed, B:354:0x0bf9, B:344:0x0bba, B:346:0x0bc2, B:348:0x0bd8, B:356:0x0bff, B:358:0x0c05, B:337:0x0b63, B:339:0x0b6b, B:341:0x0b70, B:334:0x0b1a, B:327:0x0afa, B:329:0x0b02, B:331:0x0b07, B:320:0x0a98, B:322:0x0aa0, B:324:0x0aa5, B:317:0x0a4f, B:310:0x0a2f, B:312:0x0a37, B:314:0x0a3c, B:299:0x09a4, B:301:0x09ac, B:303:0x09b1, B:305:0x09c6, B:307:0x09da, B:296:0x095b, B:289:0x093b, B:291:0x0943, B:293:0x0948, B:282:0x08d9, B:284:0x08e1, B:286:0x08e6, B:279:0x0890, B:272:0x0870, B:274:0x0878, B:276:0x087d, B:265:0x080e, B:267:0x0816, B:269:0x081b, B:262:0x07c5, B:255:0x07a5, B:257:0x07ad, B:259:0x07b2, B:248:0x0743, B:250:0x074b, B:252:0x0750, B:245:0x06fa, B:238:0x06da, B:240:0x06e2, B:242:0x06e7, B:231:0x0678, B:233:0x0680, B:235:0x0685, B:228:0x062f, B:221:0x060f, B:223:0x0617, B:225:0x061c, B:218:0x0608, B:206:0x0550, B:199:0x0531, B:201:0x0539, B:203:0x053e, B:192:0x04d0, B:194:0x04d8, B:196:0x04dd, B:189:0x0488, B:182:0x0469, B:184:0x0471, B:186:0x0476, B:179:0x0462), top: B:402:0x0462 }] */
    /* JADX WARN: Code duplicated, block: B:303:0x09b1 A[Catch: Exception -> 0x0c16, TryCatch #8 {Exception -> 0x0c16, blocks: (B:351:0x0be5, B:353:0x0bed, B:354:0x0bf9, B:344:0x0bba, B:346:0x0bc2, B:348:0x0bd8, B:356:0x0bff, B:358:0x0c05, B:337:0x0b63, B:339:0x0b6b, B:341:0x0b70, B:334:0x0b1a, B:327:0x0afa, B:329:0x0b02, B:331:0x0b07, B:320:0x0a98, B:322:0x0aa0, B:324:0x0aa5, B:317:0x0a4f, B:310:0x0a2f, B:312:0x0a37, B:314:0x0a3c, B:299:0x09a4, B:301:0x09ac, B:303:0x09b1, B:305:0x09c6, B:307:0x09da, B:296:0x095b, B:289:0x093b, B:291:0x0943, B:293:0x0948, B:282:0x08d9, B:284:0x08e1, B:286:0x08e6, B:279:0x0890, B:272:0x0870, B:274:0x0878, B:276:0x087d, B:265:0x080e, B:267:0x0816, B:269:0x081b, B:262:0x07c5, B:255:0x07a5, B:257:0x07ad, B:259:0x07b2, B:248:0x0743, B:250:0x074b, B:252:0x0750, B:245:0x06fa, B:238:0x06da, B:240:0x06e2, B:242:0x06e7, B:231:0x0678, B:233:0x0680, B:235:0x0685, B:228:0x062f, B:221:0x060f, B:223:0x0617, B:225:0x061c, B:218:0x0608, B:206:0x0550, B:199:0x0531, B:201:0x0539, B:203:0x053e, B:192:0x04d0, B:194:0x04d8, B:196:0x04dd, B:189:0x0488, B:182:0x0469, B:184:0x0471, B:186:0x0476, B:179:0x0462), top: B:402:0x0462 }] */
    /* JADX WARN: Code duplicated, block: B:305:0x09c6 A[Catch: Exception -> 0x0c16, TryCatch #8 {Exception -> 0x0c16, blocks: (B:351:0x0be5, B:353:0x0bed, B:354:0x0bf9, B:344:0x0bba, B:346:0x0bc2, B:348:0x0bd8, B:356:0x0bff, B:358:0x0c05, B:337:0x0b63, B:339:0x0b6b, B:341:0x0b70, B:334:0x0b1a, B:327:0x0afa, B:329:0x0b02, B:331:0x0b07, B:320:0x0a98, B:322:0x0aa0, B:324:0x0aa5, B:317:0x0a4f, B:310:0x0a2f, B:312:0x0a37, B:314:0x0a3c, B:299:0x09a4, B:301:0x09ac, B:303:0x09b1, B:305:0x09c6, B:307:0x09da, B:296:0x095b, B:289:0x093b, B:291:0x0943, B:293:0x0948, B:282:0x08d9, B:284:0x08e1, B:286:0x08e6, B:279:0x0890, B:272:0x0870, B:274:0x0878, B:276:0x087d, B:265:0x080e, B:267:0x0816, B:269:0x081b, B:262:0x07c5, B:255:0x07a5, B:257:0x07ad, B:259:0x07b2, B:248:0x0743, B:250:0x074b, B:252:0x0750, B:245:0x06fa, B:238:0x06da, B:240:0x06e2, B:242:0x06e7, B:231:0x0678, B:233:0x0680, B:235:0x0685, B:228:0x062f, B:221:0x060f, B:223:0x0617, B:225:0x061c, B:218:0x0608, B:206:0x0550, B:199:0x0531, B:201:0x0539, B:203:0x053e, B:192:0x04d0, B:194:0x04d8, B:196:0x04dd, B:189:0x0488, B:182:0x0469, B:184:0x0471, B:186:0x0476, B:179:0x0462), top: B:402:0x0462 }] */
    /* JADX WARN: Code duplicated, block: B:309:0x0a2e A[RETURN] */
    /* JADX WARN: Code duplicated, block: B:312:0x0a37 A[Catch: Exception -> 0x0c16, TryCatch #8 {Exception -> 0x0c16, blocks: (B:351:0x0be5, B:353:0x0bed, B:354:0x0bf9, B:344:0x0bba, B:346:0x0bc2, B:348:0x0bd8, B:356:0x0bff, B:358:0x0c05, B:337:0x0b63, B:339:0x0b6b, B:341:0x0b70, B:334:0x0b1a, B:327:0x0afa, B:329:0x0b02, B:331:0x0b07, B:320:0x0a98, B:322:0x0aa0, B:324:0x0aa5, B:317:0x0a4f, B:310:0x0a2f, B:312:0x0a37, B:314:0x0a3c, B:299:0x09a4, B:301:0x09ac, B:303:0x09b1, B:305:0x09c6, B:307:0x09da, B:296:0x095b, B:289:0x093b, B:291:0x0943, B:293:0x0948, B:282:0x08d9, B:284:0x08e1, B:286:0x08e6, B:279:0x0890, B:272:0x0870, B:274:0x0878, B:276:0x087d, B:265:0x080e, B:267:0x0816, B:269:0x081b, B:262:0x07c5, B:255:0x07a5, B:257:0x07ad, B:259:0x07b2, B:248:0x0743, B:250:0x074b, B:252:0x0750, B:245:0x06fa, B:238:0x06da, B:240:0x06e2, B:242:0x06e7, B:231:0x0678, B:233:0x0680, B:235:0x0685, B:228:0x062f, B:221:0x060f, B:223:0x0617, B:225:0x061c, B:218:0x0608, B:206:0x0550, B:199:0x0531, B:201:0x0539, B:203:0x053e, B:192:0x04d0, B:194:0x04d8, B:196:0x04dd, B:189:0x0488, B:182:0x0469, B:184:0x0471, B:186:0x0476, B:179:0x0462), top: B:402:0x0462 }] */
    /* JADX WARN: Code duplicated, block: B:314:0x0a3c A[Catch: Exception -> 0x0c16, TryCatch #8 {Exception -> 0x0c16, blocks: (B:351:0x0be5, B:353:0x0bed, B:354:0x0bf9, B:344:0x0bba, B:346:0x0bc2, B:348:0x0bd8, B:356:0x0bff, B:358:0x0c05, B:337:0x0b63, B:339:0x0b6b, B:341:0x0b70, B:334:0x0b1a, B:327:0x0afa, B:329:0x0b02, B:331:0x0b07, B:320:0x0a98, B:322:0x0aa0, B:324:0x0aa5, B:317:0x0a4f, B:310:0x0a2f, B:312:0x0a37, B:314:0x0a3c, B:299:0x09a4, B:301:0x09ac, B:303:0x09b1, B:305:0x09c6, B:307:0x09da, B:296:0x095b, B:289:0x093b, B:291:0x0943, B:293:0x0948, B:282:0x08d9, B:284:0x08e1, B:286:0x08e6, B:279:0x0890, B:272:0x0870, B:274:0x0878, B:276:0x087d, B:265:0x080e, B:267:0x0816, B:269:0x081b, B:262:0x07c5, B:255:0x07a5, B:257:0x07ad, B:259:0x07b2, B:248:0x0743, B:250:0x074b, B:252:0x0750, B:245:0x06fa, B:238:0x06da, B:240:0x06e2, B:242:0x06e7, B:231:0x0678, B:233:0x0680, B:235:0x0685, B:228:0x062f, B:221:0x060f, B:223:0x0617, B:225:0x061c, B:218:0x0608, B:206:0x0550, B:199:0x0531, B:201:0x0539, B:203:0x053e, B:192:0x04d0, B:194:0x04d8, B:196:0x04dd, B:189:0x0488, B:182:0x0469, B:184:0x0471, B:186:0x0476, B:179:0x0462), top: B:402:0x0462 }] */
    /* JADX WARN: Code duplicated, block: B:316:0x0a4e A[RETURN] */
    /* JADX WARN: Code duplicated, block: B:319:0x0a97 A[RETURN] */
    /* JADX WARN: Code duplicated, block: B:322:0x0aa0 A[Catch: Exception -> 0x0c16, TryCatch #8 {Exception -> 0x0c16, blocks: (B:351:0x0be5, B:353:0x0bed, B:354:0x0bf9, B:344:0x0bba, B:346:0x0bc2, B:348:0x0bd8, B:356:0x0bff, B:358:0x0c05, B:337:0x0b63, B:339:0x0b6b, B:341:0x0b70, B:334:0x0b1a, B:327:0x0afa, B:329:0x0b02, B:331:0x0b07, B:320:0x0a98, B:322:0x0aa0, B:324:0x0aa5, B:317:0x0a4f, B:310:0x0a2f, B:312:0x0a37, B:314:0x0a3c, B:299:0x09a4, B:301:0x09ac, B:303:0x09b1, B:305:0x09c6, B:307:0x09da, B:296:0x095b, B:289:0x093b, B:291:0x0943, B:293:0x0948, B:282:0x08d9, B:284:0x08e1, B:286:0x08e6, B:279:0x0890, B:272:0x0870, B:274:0x0878, B:276:0x087d, B:265:0x080e, B:267:0x0816, B:269:0x081b, B:262:0x07c5, B:255:0x07a5, B:257:0x07ad, B:259:0x07b2, B:248:0x0743, B:250:0x074b, B:252:0x0750, B:245:0x06fa, B:238:0x06da, B:240:0x06e2, B:242:0x06e7, B:231:0x0678, B:233:0x0680, B:235:0x0685, B:228:0x062f, B:221:0x060f, B:223:0x0617, B:225:0x061c, B:218:0x0608, B:206:0x0550, B:199:0x0531, B:201:0x0539, B:203:0x053e, B:192:0x04d0, B:194:0x04d8, B:196:0x04dd, B:189:0x0488, B:182:0x0469, B:184:0x0471, B:186:0x0476, B:179:0x0462), top: B:402:0x0462 }] */
    /* JADX WARN: Code duplicated, block: B:326:0x0af9 A[RETURN] */
    /* JADX WARN: Code duplicated, block: B:329:0x0b02 A[Catch: Exception -> 0x0c16, TryCatch #8 {Exception -> 0x0c16, blocks: (B:351:0x0be5, B:353:0x0bed, B:354:0x0bf9, B:344:0x0bba, B:346:0x0bc2, B:348:0x0bd8, B:356:0x0bff, B:358:0x0c05, B:337:0x0b63, B:339:0x0b6b, B:341:0x0b70, B:334:0x0b1a, B:327:0x0afa, B:329:0x0b02, B:331:0x0b07, B:320:0x0a98, B:322:0x0aa0, B:324:0x0aa5, B:317:0x0a4f, B:310:0x0a2f, B:312:0x0a37, B:314:0x0a3c, B:299:0x09a4, B:301:0x09ac, B:303:0x09b1, B:305:0x09c6, B:307:0x09da, B:296:0x095b, B:289:0x093b, B:291:0x0943, B:293:0x0948, B:282:0x08d9, B:284:0x08e1, B:286:0x08e6, B:279:0x0890, B:272:0x0870, B:274:0x0878, B:276:0x087d, B:265:0x080e, B:267:0x0816, B:269:0x081b, B:262:0x07c5, B:255:0x07a5, B:257:0x07ad, B:259:0x07b2, B:248:0x0743, B:250:0x074b, B:252:0x0750, B:245:0x06fa, B:238:0x06da, B:240:0x06e2, B:242:0x06e7, B:231:0x0678, B:233:0x0680, B:235:0x0685, B:228:0x062f, B:221:0x060f, B:223:0x0617, B:225:0x061c, B:218:0x0608, B:206:0x0550, B:199:0x0531, B:201:0x0539, B:203:0x053e, B:192:0x04d0, B:194:0x04d8, B:196:0x04dd, B:189:0x0488, B:182:0x0469, B:184:0x0471, B:186:0x0476, B:179:0x0462), top: B:402:0x0462 }] */
    /* JADX WARN: Code duplicated, block: B:331:0x0b07 A[Catch: Exception -> 0x0c16, TryCatch #8 {Exception -> 0x0c16, blocks: (B:351:0x0be5, B:353:0x0bed, B:354:0x0bf9, B:344:0x0bba, B:346:0x0bc2, B:348:0x0bd8, B:356:0x0bff, B:358:0x0c05, B:337:0x0b63, B:339:0x0b6b, B:341:0x0b70, B:334:0x0b1a, B:327:0x0afa, B:329:0x0b02, B:331:0x0b07, B:320:0x0a98, B:322:0x0aa0, B:324:0x0aa5, B:317:0x0a4f, B:310:0x0a2f, B:312:0x0a37, B:314:0x0a3c, B:299:0x09a4, B:301:0x09ac, B:303:0x09b1, B:305:0x09c6, B:307:0x09da, B:296:0x095b, B:289:0x093b, B:291:0x0943, B:293:0x0948, B:282:0x08d9, B:284:0x08e1, B:286:0x08e6, B:279:0x0890, B:272:0x0870, B:274:0x0878, B:276:0x087d, B:265:0x080e, B:267:0x0816, B:269:0x081b, B:262:0x07c5, B:255:0x07a5, B:257:0x07ad, B:259:0x07b2, B:248:0x0743, B:250:0x074b, B:252:0x0750, B:245:0x06fa, B:238:0x06da, B:240:0x06e2, B:242:0x06e7, B:231:0x0678, B:233:0x0680, B:235:0x0685, B:228:0x062f, B:221:0x060f, B:223:0x0617, B:225:0x061c, B:218:0x0608, B:206:0x0550, B:199:0x0531, B:201:0x0539, B:203:0x053e, B:192:0x04d0, B:194:0x04d8, B:196:0x04dd, B:189:0x0488, B:182:0x0469, B:184:0x0471, B:186:0x0476, B:179:0x0462), top: B:402:0x0462 }] */
    /* JADX WARN: Code duplicated, block: B:333:0x0b19 A[RETURN] */
    /* JADX WARN: Code duplicated, block: B:336:0x0b62 A[RETURN] */
    /* JADX WARN: Code duplicated, block: B:339:0x0b6b A[Catch: Exception -> 0x0c16, TryCatch #8 {Exception -> 0x0c16, blocks: (B:351:0x0be5, B:353:0x0bed, B:354:0x0bf9, B:344:0x0bba, B:346:0x0bc2, B:348:0x0bd8, B:356:0x0bff, B:358:0x0c05, B:337:0x0b63, B:339:0x0b6b, B:341:0x0b70, B:334:0x0b1a, B:327:0x0afa, B:329:0x0b02, B:331:0x0b07, B:320:0x0a98, B:322:0x0aa0, B:324:0x0aa5, B:317:0x0a4f, B:310:0x0a2f, B:312:0x0a37, B:314:0x0a3c, B:299:0x09a4, B:301:0x09ac, B:303:0x09b1, B:305:0x09c6, B:307:0x09da, B:296:0x095b, B:289:0x093b, B:291:0x0943, B:293:0x0948, B:282:0x08d9, B:284:0x08e1, B:286:0x08e6, B:279:0x0890, B:272:0x0870, B:274:0x0878, B:276:0x087d, B:265:0x080e, B:267:0x0816, B:269:0x081b, B:262:0x07c5, B:255:0x07a5, B:257:0x07ad, B:259:0x07b2, B:248:0x0743, B:250:0x074b, B:252:0x0750, B:245:0x06fa, B:238:0x06da, B:240:0x06e2, B:242:0x06e7, B:231:0x0678, B:233:0x0680, B:235:0x0685, B:228:0x062f, B:221:0x060f, B:223:0x0617, B:225:0x061c, B:218:0x0608, B:206:0x0550, B:199:0x0531, B:201:0x0539, B:203:0x053e, B:192:0x04d0, B:194:0x04d8, B:196:0x04dd, B:189:0x0488, B:182:0x0469, B:184:0x0471, B:186:0x0476, B:179:0x0462), top: B:402:0x0462 }] */
    /* JADX WARN: Code duplicated, block: B:341:0x0b70 A[Catch: Exception -> 0x0c16, TryCatch #8 {Exception -> 0x0c16, blocks: (B:351:0x0be5, B:353:0x0bed, B:354:0x0bf9, B:344:0x0bba, B:346:0x0bc2, B:348:0x0bd8, B:356:0x0bff, B:358:0x0c05, B:337:0x0b63, B:339:0x0b6b, B:341:0x0b70, B:334:0x0b1a, B:327:0x0afa, B:329:0x0b02, B:331:0x0b07, B:320:0x0a98, B:322:0x0aa0, B:324:0x0aa5, B:317:0x0a4f, B:310:0x0a2f, B:312:0x0a37, B:314:0x0a3c, B:299:0x09a4, B:301:0x09ac, B:303:0x09b1, B:305:0x09c6, B:307:0x09da, B:296:0x095b, B:289:0x093b, B:291:0x0943, B:293:0x0948, B:282:0x08d9, B:284:0x08e1, B:286:0x08e6, B:279:0x0890, B:272:0x0870, B:274:0x0878, B:276:0x087d, B:265:0x080e, B:267:0x0816, B:269:0x081b, B:262:0x07c5, B:255:0x07a5, B:257:0x07ad, B:259:0x07b2, B:248:0x0743, B:250:0x074b, B:252:0x0750, B:245:0x06fa, B:238:0x06da, B:240:0x06e2, B:242:0x06e7, B:231:0x0678, B:233:0x0680, B:235:0x0685, B:228:0x062f, B:221:0x060f, B:223:0x0617, B:225:0x061c, B:218:0x0608, B:206:0x0550, B:199:0x0531, B:201:0x0539, B:203:0x053e, B:192:0x04d0, B:194:0x04d8, B:196:0x04dd, B:189:0x0488, B:182:0x0469, B:184:0x0471, B:186:0x0476, B:179:0x0462), top: B:402:0x0462 }] */
    /* JADX WARN: Code duplicated, block: B:343:0x0bb9 A[RETURN] */
    /* JADX WARN: Code duplicated, block: B:346:0x0bc2 A[Catch: Exception -> 0x0c16, TryCatch #8 {Exception -> 0x0c16, blocks: (B:351:0x0be5, B:353:0x0bed, B:354:0x0bf9, B:344:0x0bba, B:346:0x0bc2, B:348:0x0bd8, B:356:0x0bff, B:358:0x0c05, B:337:0x0b63, B:339:0x0b6b, B:341:0x0b70, B:334:0x0b1a, B:327:0x0afa, B:329:0x0b02, B:331:0x0b07, B:320:0x0a98, B:322:0x0aa0, B:324:0x0aa5, B:317:0x0a4f, B:310:0x0a2f, B:312:0x0a37, B:314:0x0a3c, B:299:0x09a4, B:301:0x09ac, B:303:0x09b1, B:305:0x09c6, B:307:0x09da, B:296:0x095b, B:289:0x093b, B:291:0x0943, B:293:0x0948, B:282:0x08d9, B:284:0x08e1, B:286:0x08e6, B:279:0x0890, B:272:0x0870, B:274:0x0878, B:276:0x087d, B:265:0x080e, B:267:0x0816, B:269:0x081b, B:262:0x07c5, B:255:0x07a5, B:257:0x07ad, B:259:0x07b2, B:248:0x0743, B:250:0x074b, B:252:0x0750, B:245:0x06fa, B:238:0x06da, B:240:0x06e2, B:242:0x06e7, B:231:0x0678, B:233:0x0680, B:235:0x0685, B:228:0x062f, B:221:0x060f, B:223:0x0617, B:225:0x061c, B:218:0x0608, B:206:0x0550, B:199:0x0531, B:201:0x0539, B:203:0x053e, B:192:0x04d0, B:194:0x04d8, B:196:0x04dd, B:189:0x0488, B:182:0x0469, B:184:0x0471, B:186:0x0476, B:179:0x0462), top: B:402:0x0462 }] */
    /* JADX WARN: Code duplicated, block: B:348:0x0bd8 A[Catch: Exception -> 0x0c16, TryCatch #8 {Exception -> 0x0c16, blocks: (B:351:0x0be5, B:353:0x0bed, B:354:0x0bf9, B:344:0x0bba, B:346:0x0bc2, B:348:0x0bd8, B:356:0x0bff, B:358:0x0c05, B:337:0x0b63, B:339:0x0b6b, B:341:0x0b70, B:334:0x0b1a, B:327:0x0afa, B:329:0x0b02, B:331:0x0b07, B:320:0x0a98, B:322:0x0aa0, B:324:0x0aa5, B:317:0x0a4f, B:310:0x0a2f, B:312:0x0a37, B:314:0x0a3c, B:299:0x09a4, B:301:0x09ac, B:303:0x09b1, B:305:0x09c6, B:307:0x09da, B:296:0x095b, B:289:0x093b, B:291:0x0943, B:293:0x0948, B:282:0x08d9, B:284:0x08e1, B:286:0x08e6, B:279:0x0890, B:272:0x0870, B:274:0x0878, B:276:0x087d, B:265:0x080e, B:267:0x0816, B:269:0x081b, B:262:0x07c5, B:255:0x07a5, B:257:0x07ad, B:259:0x07b2, B:248:0x0743, B:250:0x074b, B:252:0x0750, B:245:0x06fa, B:238:0x06da, B:240:0x06e2, B:242:0x06e7, B:231:0x0678, B:233:0x0680, B:235:0x0685, B:228:0x062f, B:221:0x060f, B:223:0x0617, B:225:0x061c, B:218:0x0608, B:206:0x0550, B:199:0x0531, B:201:0x0539, B:203:0x053e, B:192:0x04d0, B:194:0x04d8, B:196:0x04dd, B:189:0x0488, B:182:0x0469, B:184:0x0471, B:186:0x0476, B:179:0x0462), top: B:402:0x0462 }] */
    /* JADX WARN: Code duplicated, block: B:350:0x0be4 A[RETURN] */
    /* JADX WARN: Code duplicated, block: B:353:0x0bed A[Catch: Exception -> 0x0c16, TryCatch #8 {Exception -> 0x0c16, blocks: (B:351:0x0be5, B:353:0x0bed, B:354:0x0bf9, B:344:0x0bba, B:346:0x0bc2, B:348:0x0bd8, B:356:0x0bff, B:358:0x0c05, B:337:0x0b63, B:339:0x0b6b, B:341:0x0b70, B:334:0x0b1a, B:327:0x0afa, B:329:0x0b02, B:331:0x0b07, B:320:0x0a98, B:322:0x0aa0, B:324:0x0aa5, B:317:0x0a4f, B:310:0x0a2f, B:312:0x0a37, B:314:0x0a3c, B:299:0x09a4, B:301:0x09ac, B:303:0x09b1, B:305:0x09c6, B:307:0x09da, B:296:0x095b, B:289:0x093b, B:291:0x0943, B:293:0x0948, B:282:0x08d9, B:284:0x08e1, B:286:0x08e6, B:279:0x0890, B:272:0x0870, B:274:0x0878, B:276:0x087d, B:265:0x080e, B:267:0x0816, B:269:0x081b, B:262:0x07c5, B:255:0x07a5, B:257:0x07ad, B:259:0x07b2, B:248:0x0743, B:250:0x074b, B:252:0x0750, B:245:0x06fa, B:238:0x06da, B:240:0x06e2, B:242:0x06e7, B:231:0x0678, B:233:0x0680, B:235:0x0685, B:228:0x062f, B:221:0x060f, B:223:0x0617, B:225:0x061c, B:218:0x0608, B:206:0x0550, B:199:0x0531, B:201:0x0539, B:203:0x053e, B:192:0x04d0, B:194:0x04d8, B:196:0x04dd, B:189:0x0488, B:182:0x0469, B:184:0x0471, B:186:0x0476, B:179:0x0462), top: B:402:0x0462 }] */
    /* JADX WARN: Code duplicated, block: B:356:0x0bff A[Catch: Exception -> 0x0c16, TryCatch #8 {Exception -> 0x0c16, blocks: (B:351:0x0be5, B:353:0x0bed, B:354:0x0bf9, B:344:0x0bba, B:346:0x0bc2, B:348:0x0bd8, B:356:0x0bff, B:358:0x0c05, B:337:0x0b63, B:339:0x0b6b, B:341:0x0b70, B:334:0x0b1a, B:327:0x0afa, B:329:0x0b02, B:331:0x0b07, B:320:0x0a98, B:322:0x0aa0, B:324:0x0aa5, B:317:0x0a4f, B:310:0x0a2f, B:312:0x0a37, B:314:0x0a3c, B:299:0x09a4, B:301:0x09ac, B:303:0x09b1, B:305:0x09c6, B:307:0x09da, B:296:0x095b, B:289:0x093b, B:291:0x0943, B:293:0x0948, B:282:0x08d9, B:284:0x08e1, B:286:0x08e6, B:279:0x0890, B:272:0x0870, B:274:0x0878, B:276:0x087d, B:265:0x080e, B:267:0x0816, B:269:0x081b, B:262:0x07c5, B:255:0x07a5, B:257:0x07ad, B:259:0x07b2, B:248:0x0743, B:250:0x074b, B:252:0x0750, B:245:0x06fa, B:238:0x06da, B:240:0x06e2, B:242:0x06e7, B:231:0x0678, B:233:0x0680, B:235:0x0685, B:228:0x062f, B:221:0x060f, B:223:0x0617, B:225:0x061c, B:218:0x0608, B:206:0x0550, B:199:0x0531, B:201:0x0539, B:203:0x053e, B:192:0x04d0, B:194:0x04d8, B:196:0x04dd, B:189:0x0488, B:182:0x0469, B:184:0x0471, B:186:0x0476, B:179:0x0462), top: B:402:0x0462 }] */
    /* JADX WARN: Code duplicated, block: B:358:0x0c05 A[Catch: Exception -> 0x0c16, TRY_LEAVE, TryCatch #8 {Exception -> 0x0c16, blocks: (B:351:0x0be5, B:353:0x0bed, B:354:0x0bf9, B:344:0x0bba, B:346:0x0bc2, B:348:0x0bd8, B:356:0x0bff, B:358:0x0c05, B:337:0x0b63, B:339:0x0b6b, B:341:0x0b70, B:334:0x0b1a, B:327:0x0afa, B:329:0x0b02, B:331:0x0b07, B:320:0x0a98, B:322:0x0aa0, B:324:0x0aa5, B:317:0x0a4f, B:310:0x0a2f, B:312:0x0a37, B:314:0x0a3c, B:299:0x09a4, B:301:0x09ac, B:303:0x09b1, B:305:0x09c6, B:307:0x09da, B:296:0x095b, B:289:0x093b, B:291:0x0943, B:293:0x0948, B:282:0x08d9, B:284:0x08e1, B:286:0x08e6, B:279:0x0890, B:272:0x0870, B:274:0x0878, B:276:0x087d, B:265:0x080e, B:267:0x0816, B:269:0x081b, B:262:0x07c5, B:255:0x07a5, B:257:0x07ad, B:259:0x07b2, B:248:0x0743, B:250:0x074b, B:252:0x0750, B:245:0x06fa, B:238:0x06da, B:240:0x06e2, B:242:0x06e7, B:231:0x0678, B:233:0x0680, B:235:0x0685, B:228:0x062f, B:221:0x060f, B:223:0x0617, B:225:0x061c, B:218:0x0608, B:206:0x0550, B:199:0x0531, B:201:0x0539, B:203:0x053e, B:192:0x04d0, B:194:0x04d8, B:196:0x04dd, B:189:0x0488, B:182:0x0469, B:184:0x0471, B:186:0x0476, B:179:0x0462), top: B:402:0x0462 }] */
    /* JADX WARN: Code duplicated, block: B:381:0x0c7a A[RETURN] */
    /* JADX WARN: Code duplicated, block: B:384:0x0c83  */
    /* JADX WARN: Code duplicated, block: B:386:0x0c88  */
    /* JADX WARN: Code duplicated, block: B:392:0x05a8 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:7:0x0020  */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r11v1 */
    /* JADX WARN: Type inference failed for: r11v100, types: [com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker] */
    /* JADX WARN: Type inference failed for: r11v112, types: [com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker] */
    /* JADX WARN: Type inference failed for: r11v126, types: [com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker] */
    /* JADX WARN: Type inference failed for: r11v138, types: [com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker] */
    /* JADX WARN: Type inference failed for: r11v152, types: [com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker] */
    /* JADX WARN: Type inference failed for: r11v164, types: [com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker] */
    /* JADX WARN: Type inference failed for: r11v178, types: [com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker] */
    /* JADX WARN: Type inference failed for: r11v19, types: [com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker] */
    /* JADX WARN: Type inference failed for: r11v194, types: [com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker] */
    /* JADX WARN: Type inference failed for: r11v2 */
    /* JADX WARN: Type inference failed for: r11v212, types: [com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker] */
    /* JADX WARN: Type inference failed for: r11v221, types: [com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker] */
    /* JADX WARN: Type inference failed for: r11v237, types: [com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker] */
    /* JADX WARN: Type inference failed for: r11v239 */
    /* JADX WARN: Type inference failed for: r11v3, types: [com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker] */
    /* JADX WARN: Type inference failed for: r11v31, types: [com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker] */
    /* JADX WARN: Type inference failed for: r11v4 */
    /* JADX WARN: Type inference failed for: r11v45, types: [com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker] */
    /* JADX WARN: Type inference failed for: r11v5 */
    /* JADX WARN: Type inference failed for: r11v50 */
    /* JADX WARN: Type inference failed for: r11v59, types: [com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker] */
    /* JADX WARN: Type inference failed for: r11v6, types: [com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker] */
    /* JADX WARN: Type inference failed for: r11v61 */
    /* JADX WARN: Type inference failed for: r11v74, types: [com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker] */
    /* JADX WARN: Type inference failed for: r11v86, types: [com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker] */
    /* JADX WARN: Type inference failed for: r15v6 */
    /* JADX WARN: Type inference failed for: r15v7, types: [com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker, java.lang.Object] */
    /* JADX WARN: Type inference failed for: r15v9 */
    /* JADX WARN: Type inference failed for: r2v0, types: [java.lang.String] */
    /* JADX WARN: Type inference failed for: r2v1 */
    /* JADX WARN: Type inference failed for: r2v102, types: [com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker, java.lang.Object] */
    /* JADX WARN: Type inference failed for: r2v105, types: [com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker, java.lang.Object] */
    /* JADX WARN: Type inference failed for: r2v108, types: [com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker, java.lang.Object] */
    /* JADX WARN: Type inference failed for: r2v111, types: [com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker, java.lang.Object] */
    /* JADX WARN: Type inference failed for: r2v114, types: [com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker, java.lang.Object] */
    /* JADX WARN: Type inference failed for: r2v117, types: [com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker, java.lang.Object] */
    /* JADX WARN: Type inference failed for: r2v120, types: [com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker, java.lang.Object] */
    /* JADX WARN: Type inference failed for: r2v123, types: [com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker, java.lang.Object] */
    /* JADX WARN: Type inference failed for: r2v126, types: [com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker, java.lang.Object] */
    /* JADX WARN: Type inference failed for: r2v129, types: [com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker, java.lang.Object] */
    /* JADX WARN: Type inference failed for: r2v132, types: [com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker, java.lang.Object] */
    /* JADX WARN: Type inference failed for: r2v135, types: [com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker, java.lang.Object] */
    /* JADX WARN: Type inference failed for: r2v138, types: [com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker, java.lang.Object] */
    /* JADX WARN: Type inference failed for: r2v141, types: [com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker, java.lang.Object] */
    /* JADX WARN: Type inference failed for: r2v144, types: [com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker, java.lang.Object] */
    /* JADX WARN: Type inference failed for: r2v147, types: [com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker, java.lang.Object] */
    /* JADX WARN: Type inference failed for: r2v150, types: [com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker, java.lang.Object] */
    /* JADX WARN: Type inference failed for: r2v151 */
    /* JADX WARN: Type inference failed for: r2v154, types: [com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker, java.lang.Object] */
    /* JADX WARN: Type inference failed for: r2v157, types: [com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker, java.lang.Object] */
    /* JADX WARN: Type inference failed for: r2v160, types: [com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker, java.lang.Object] */
    /* JADX WARN: Type inference failed for: r2v163, types: [com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker, java.lang.Object] */
    /* JADX WARN: Type inference failed for: r2v166, types: [com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker] */
    /* JADX WARN: Type inference failed for: r2v171 */
    /* JADX WARN: Type inference failed for: r2v172 */
    /* JADX WARN: Type inference failed for: r2v173 */
    /* JADX WARN: Type inference failed for: r2v174 */
    /* JADX WARN: Type inference failed for: r2v175 */
    /* JADX WARN: Type inference failed for: r2v176 */
    /* JADX WARN: Type inference failed for: r2v177 */
    /* JADX WARN: Type inference failed for: r2v178 */
    /* JADX WARN: Type inference failed for: r2v179 */
    /* JADX WARN: Type inference failed for: r2v180 */
    /* JADX WARN: Type inference failed for: r2v181 */
    /* JADX WARN: Type inference failed for: r2v182 */
    /* JADX WARN: Type inference failed for: r2v183 */
    /* JADX WARN: Type inference failed for: r2v184 */
    /* JADX WARN: Type inference failed for: r2v185 */
    /* JADX WARN: Type inference failed for: r2v186 */
    /* JADX WARN: Type inference failed for: r2v187 */
    /* JADX WARN: Type inference failed for: r2v188 */
    /* JADX WARN: Type inference failed for: r2v189 */
    /* JADX WARN: Type inference failed for: r2v190 */
    /* JADX WARN: Type inference failed for: r2v191 */
    /* JADX WARN: Type inference failed for: r2v192 */
    /* JADX WARN: Type inference failed for: r2v193 */
    /* JADX WARN: Type inference failed for: r2v194 */
    /* JADX WARN: Type inference failed for: r2v195 */
    /* JADX WARN: Type inference failed for: r2v196 */
    /* JADX WARN: Type inference failed for: r2v197 */
    /* JADX WARN: Type inference failed for: r2v198 */
    /* JADX WARN: Type inference failed for: r2v199 */
    /* JADX WARN: Type inference failed for: r2v200 */
    /* JADX WARN: Type inference failed for: r2v201 */
    /* JADX WARN: Type inference failed for: r2v202 */
    /* JADX WARN: Type inference failed for: r2v203 */
    /* JADX WARN: Type inference failed for: r2v204 */
    /* JADX WARN: Type inference failed for: r2v205 */
    /* JADX WARN: Type inference failed for: r2v206 */
    /* JADX WARN: Type inference failed for: r2v207 */
    /* JADX WARN: Type inference failed for: r2v208 */
    /* JADX WARN: Type inference failed for: r2v209 */
    /* JADX WARN: Type inference failed for: r2v210 */
    /* JADX WARN: Type inference failed for: r2v211 */
    /* JADX WARN: Type inference failed for: r2v212 */
    /* JADX WARN: Type inference failed for: r2v213 */
    /* JADX WARN: Type inference failed for: r2v214 */
    /* JADX WARN: Type inference failed for: r2v215 */
    /* JADX WARN: Type inference failed for: r2v216 */
    /* JADX WARN: Type inference failed for: r2v217 */
    /* JADX WARN: Type inference failed for: r2v218 */
    /* JADX WARN: Type inference failed for: r2v219 */
    /* JADX WARN: Type inference failed for: r2v220 */
    /* JADX WARN: Type inference failed for: r2v221 */
    /* JADX WARN: Type inference failed for: r2v222 */
    /* JADX WARN: Type inference failed for: r2v223 */
    /* JADX WARN: Type inference failed for: r2v224 */
    /* JADX WARN: Type inference failed for: r2v225 */
    /* JADX WARN: Type inference failed for: r2v226 */
    /* JADX WARN: Type inference failed for: r2v227 */
    /* JADX WARN: Type inference failed for: r2v228 */
    /* JADX WARN: Type inference failed for: r2v3 */
    /* JADX WARN: Type inference failed for: r2v54 */
    /* JADX WARN: Type inference failed for: r2v66, types: [com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker, java.lang.Object] */
    /* JADX WARN: Type inference failed for: r2v69, types: [com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker, java.lang.Object] */
    /* JADX WARN: Type inference failed for: r2v72, types: [com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker, java.lang.Object] */
    /* JADX WARN: Type inference failed for: r2v75, types: [com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker, java.lang.Object] */
    /* JADX WARN: Type inference failed for: r2v78, types: [com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker, java.lang.Object] */
    /* JADX WARN: Type inference failed for: r2v81, types: [com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker, java.lang.Object] */
    /* JADX WARN: Type inference failed for: r2v86 */
    /* JADX WARN: Type inference failed for: r2v95 */
    /* JADX WARN: Type inference failed for: r2v99, types: [com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker, java.lang.Object] */
    public final Object doRecoveryUpdate(VersionUpdateModel versionUpdateModel, Continuation<? super Boolean> continuation) {
        C20911 c20911;
        boolean z;
        ?? r11;
        Exception exc;
        ?? r12;
        int i;
        boolean z2;
        char c;
        String str;
        Object objBleWriteDownloadCommand$default;
        ?? r2;
        File file;
        int i2;
        int i3;
        ?? r3;
        Object objBleWriteDownloadCommand$default2;
        ?? r4;
        Object objBleWriteDownloadCommand$default3;
        ?? r5;
        File file2;
        int i4;
        int i5;
        ?? r6;
        String string;
        Object objBleWriteDownloadCommand$default4;
        ?? r15;
        String str2;
        ?? r7;
        Object objBleWriteDownloadCommand$default5;
        File file3;
        int i6;
        int i7;
        ?? r8;
        Object objBleWriteDownloadCommand$default6;
        ?? r9;
        Object objBleWriteDownloadCommand$default7;
        ?? r10;
        File file4;
        int i8;
        int i9;
        ?? r13;
        Object objBleWriteDownloadCommand$default8;
        ?? r14;
        Object objBleWriteDownloadCommand$default9;
        ?? r16;
        File file5;
        int i10;
        int i11;
        ?? r17;
        Object objBleWriteDownloadCommand$default10;
        ?? r18;
        Object objBleWriteDownloadCommand$default11;
        ?? r19;
        File file6;
        int i12;
        int i13;
        ?? r20;
        Object objBleWriteDownloadCommand$default12;
        ?? r21;
        Object objBleWriteDownloadCommand$default13;
        ?? r22;
        File file7;
        int i14;
        int i15;
        ?? r23;
        Object objBleWriteDownloadCommand$default14;
        ?? r24;
        Object objBleWriteDownloadCommand$default15;
        ?? r25;
        File file8;
        int i16;
        int i17;
        ?? r26;
        Object objBleWriteDownloadCommand$default16;
        ?? r27;
        Object objBleWriteDownloadCommand$default17;
        ?? r28;
        ?? r29;
        File file9;
        int i18;
        int i19;
        ?? r30;
        ?? r31;
        ?? r32;
        String str3;
        Object objFlashBLEFile;
        ?? r33;
        ?? r34 = " recovery update ";
        if (continuation instanceof C20911) {
            c20911 = (C20911) continuation;
            if ((c20911.label & Integer.MIN_VALUE) != 0) {
                c20911.label -= Integer.MIN_VALUE;
            } else {
                c20911 = new C20911(continuation);
            }
        } else {
            c20911 = new C20911(continuation);
        }
        C20911 c20912 = c20911;
        Object objBleWriteDownloadCommand$default18 = c20912.result;
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        String str4 = "TAG_FW";
        Object obj = null;
        String str5 = "%08X";
        try {
            switch (c20912.label) {
                case 0:
                    ResultKt.throwOnFailure(objBleWriteDownloadCommand$default18);
                    try {
                        Log.d("TAG_FW", " recovery update ");
                        CustomLog.INSTANCE.writeFile(" recovery update ", this.context);
                        int i20 = this.all_data_piece;
                        int i21 = this.ui_file_size;
                        int i22 = this.firmware_1_interval_size;
                        if (i21 % i22 == 0) {
                            try {
                                i = i21 / i22;
                            } catch (Exception e) {
                                exc = e;
                                z = false;
                                obj = null;
                                coroutine_suspended = coroutine_suspended;
                                c20912 = c20912;
                                r12 = this;
                            }
                        } else {
                            i = (i21 / i22) + 1;
                        }
                        int i23 = i20 + i;
                        this.all_data_piece = i23;
                        int i24 = this.dsp_file_size;
                        int i25 = i23 + (i24 % i22 == 0 ? i24 / i22 : (i24 / i22) + 1);
                        this.all_data_piece = i25;
                        int i26 = this.gps_file_size;
                        int i27 = i25 + (i26 % i22 == 0 ? i26 / i22 : (i26 / i22) + 1);
                        this.all_data_piece = i27;
                        int i28 = this.sound_db_file_size;
                        int i29 = i27 + (i28 % i22 == 0 ? i28 / i22 : (i28 / i22) + 1);
                        this.all_data_piece = i29;
                        int i30 = this.gps_db_file_size;
                        int i31 = i29 + (i30 % i22 == 0 ? i30 / i22 : (i30 / i22) + 1);
                        this.all_data_piece = i31;
                        int i32 = this.if1_file_size;
                        int i33 = i31 + (i32 % i22 == 0 ? i32 / i22 : (i32 / i22) + 1);
                        this.all_data_piece = i33;
                        int i34 = this.if2_file_size;
                        this.all_data_piece = i33 + (i34 % i22 == 0 ? i34 / i22 : (i34 / i22) + 1);
                        if (StringsKt.contains$default((CharSequence) getSharePref().getDeviceName(), (CharSequence) "R9", false, 2, (Object) null) || StringsKt.contains$default((CharSequence) getSharePref().getDeviceName(), (CharSequence) "AE903i", false, 2, (Object) null)) {
                            int i35 = this.all_data_piece;
                            int i36 = this.if3_file_size;
                            int i37 = this.firmware_1_interval_size;
                            this.all_data_piece = i35 + (i36 % i37 == 0 ? i36 / i37 : (i36 / i37) + 1);
                        }
                        int i38 = this.all_data_piece;
                        int i39 = this.ble_file_size;
                        int i40 = this.firmware_1_interval_size;
                        int i41 = i38 + (i39 % i40 == 0 ? i39 / i40 : (i39 / i40) + 1);
                        this.all_data_piece = i41;
                        if (i41 > 0) {
                            Log.d("TAG_FW", "all_data_piece:" + this.all_data_piece);
                            CustomLog.INSTANCE.writeFile("all_data_piece:" + this.all_data_piece, this.context);
                            String str6 = BluetoothUtils.INSTANCE.getFD_START_COM() + ':' + versionUpdateModel.getRadarModelName() + ",1";
                            c20912.L$0 = this;
                            c20912.label = 1;
                            z2 = false;
                            c = ':';
                            try {
                                objBleWriteDownloadCommand$default18 = bleWriteDownloadCommand$default(this, str6, 4000, false, c20912, 4, null);
                                if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                                    return coroutine_suspended;
                                }
                                r34 = this;
                                try {
                                    if (!((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                                        return Boxing.boxBoolean(z2);
                                    }
                                    StringBuilder sbAppend = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_UI_START()).append(c).append(r34.ui_file_ver).append(',');
                                    StringCompanionObject stringCompanionObject = StringCompanionObject.INSTANCE;
                                    Object[] objArr = new Object[1];
                                    z = z2;
                                    try {
                                        objArr[z ? 1 : 0] = Boxing.boxInt(r34.ui_file_size);
                                        String str7 = String.format(str5, Arrays.copyOf(objArr, 1));
                                        str = "format(...)";
                                        Intrinsics.checkNotNullExpressionValue(str7, str);
                                        String string2 = sbAppend.append(str7).toString();
                                        c20912.L$0 = r34;
                                        c20912.label = 2;
                                        obj = null;
                                        coroutine_suspended = coroutine_suspended;
                                        c20912 = c20912;
                                        try {
                                            objBleWriteDownloadCommand$default = bleWriteDownloadCommand$default(r34, string2, 4000, false, c20912, 4, null);
                                            r2 = r34;
                                            if (objBleWriteDownloadCommand$default == coroutine_suspended) {
                                                return coroutine_suspended;
                                            }
                                            if (!((Boolean) objBleWriteDownloadCommand$default).booleanValue()) {
                                                return Boxing.boxBoolean(z);
                                            }
                                            file = r2.file;
                                            i2 = r2.ui_file_offset;
                                            i3 = r2.ui_file_size;
                                            c20912.L$0 = r2;
                                            c20912.label = 3;
                                            if (r2.writeFileData(file, i2, i3, c20912) == coroutine_suspended) {
                                                r3 = r2;
                                                return coroutine_suspended;
                                            }
                                            r3 = r2;
                                            StringBuilder sbAppend2 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_UI_END()).append(c);
                                            StringCompanionObject stringCompanionObject2 = StringCompanionObject.INSTANCE;
                                            Object[] objArr2 = new Object[1];
                                            objArr2[z ? 1 : 0] = Boxing.boxInt(r3.ui_file_checksum);
                                            String str8 = String.format(str5, Arrays.copyOf(objArr2, 1));
                                            Intrinsics.checkNotNullExpressionValue(str8, str);
                                            String string3 = sbAppend2.append(str8).toString();
                                            c20912.L$0 = r3;
                                            c20912.label = 4;
                                            objBleWriteDownloadCommand$default2 = bleWriteDownloadCommand$default(r3, string3, 4000, false, c20912, 4, null);
                                            r4 = r3;
                                            if (objBleWriteDownloadCommand$default2 == coroutine_suspended) {
                                                return coroutine_suspended;
                                            }
                                            if (!((Boolean) objBleWriteDownloadCommand$default2).booleanValue()) {
                                                return Boxing.boxBoolean(z);
                                            }
                                            StringBuilder sbAppend3 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_DSP_START()).append(c).append(r4.dsp_file_ver).append(',');
                                            StringCompanionObject stringCompanionObject3 = StringCompanionObject.INSTANCE;
                                            Object[] objArr3 = new Object[1];
                                            objArr3[z ? 1 : 0] = Boxing.boxInt(r4.dsp_file_size);
                                            String str9 = String.format(str5, Arrays.copyOf(objArr3, 1));
                                            Intrinsics.checkNotNullExpressionValue(str9, str);
                                            String string4 = sbAppend3.append(str9).toString();
                                            c20912.L$0 = r4;
                                            c20912.label = 5;
                                            objBleWriteDownloadCommand$default3 = bleWriteDownloadCommand$default(r4, string4, 4000, false, c20912, 4, null);
                                            if (objBleWriteDownloadCommand$default3 == coroutine_suspended) {
                                                r5 = r4;
                                                return coroutine_suspended;
                                            }
                                            r5 = r4;
                                            if (!((Boolean) objBleWriteDownloadCommand$default3).booleanValue()) {
                                                return Boxing.boxBoolean(z);
                                            }
                                            file2 = r5.file;
                                            i4 = r5.dsp_file_offset;
                                            i5 = r5.dsp_file_size;
                                            c20912.L$0 = r5;
                                            c20912.label = 6;
                                            if (r5.writeFileData(file2, i4, i5, c20912) == coroutine_suspended) {
                                                r6 = r5;
                                                return coroutine_suspended;
                                            }
                                            r6 = r5;
                                            StringBuilder sbAppend4 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_DSP_END()).append(c);
                                            StringCompanionObject stringCompanionObject4 = StringCompanionObject.INSTANCE;
                                            Object[] objArr4 = new Object[1];
                                            objArr4[z ? 1 : 0] = Boxing.boxInt(r6.dsp_file_checksum);
                                            String str10 = String.format(str5, Arrays.copyOf(objArr4, 1));
                                            Intrinsics.checkNotNullExpressionValue(str10, str);
                                            string = sbAppend4.append(str10).toString();
                                            c20912.L$0 = r6;
                                            c20912.L$1 = string;
                                            c20912.label = 7;
                                            objBleWriteDownloadCommand$default4 = bleWriteDownloadCommand$default(r6, string, 4000, false, c20912, 4, null);
                                            if (objBleWriteDownloadCommand$default4 == coroutine_suspended) {
                                                return coroutine_suspended;
                                            }
                                            r15 = r6;
                                            str2 = string;
                                            try {
                                                if (((Boolean) objBleWriteDownloadCommand$default4).booleanValue()) {
                                                    Log.e("DSP_COMMAND", str2);
                                                    StringBuilder sbAppend5 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_GPS_START()).append(c).append(r15.gps_file_ver).append(',');
                                                    StringCompanionObject stringCompanionObject5 = StringCompanionObject.INSTANCE;
                                                    Object[] objArr5 = new Object[1];
                                                    objArr5[z ? 1 : 0] = Boxing.boxInt(r15.gps_file_size);
                                                    String str11 = String.format(str5, Arrays.copyOf(objArr5, 1));
                                                    Intrinsics.checkNotNullExpressionValue(str11, str);
                                                    String string5 = sbAppend5.append(str11).toString();
                                                    c20912.L$0 = r15;
                                                    c20912.L$1 = obj;
                                                    c20912.label = 8;
                                                    r7 = r15;
                                                    objBleWriteDownloadCommand$default5 = bleWriteDownloadCommand$default(r15, string5, 4000, false, c20912, 4, null);
                                                    if (objBleWriteDownloadCommand$default5 == coroutine_suspended) {
                                                        return coroutine_suspended;
                                                    }
                                                    if (!((Boolean) objBleWriteDownloadCommand$default5).booleanValue()) {
                                                        return Boxing.boxBoolean(z);
                                                    }
                                                    file3 = r7.file;
                                                    i6 = r7.gps_file_offset;
                                                    i7 = r7.gps_file_size;
                                                    c20912.L$0 = r7;
                                                    c20912.label = 9;
                                                    if (r7.writeFileData(file3, i6, i7, c20912) == coroutine_suspended) {
                                                        r8 = r7;
                                                        return coroutine_suspended;
                                                    }
                                                    r8 = r7;
                                                    StringBuilder sbAppend6 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_GPS_END()).append(c);
                                                    StringCompanionObject stringCompanionObject6 = StringCompanionObject.INSTANCE;
                                                    Object[] objArr6 = new Object[1];
                                                    objArr6[z ? 1 : 0] = Boxing.boxInt(r8.gps_file_checksum);
                                                    String str12 = String.format(str5, Arrays.copyOf(objArr6, 1));
                                                    Intrinsics.checkNotNullExpressionValue(str12, str);
                                                    String string6 = sbAppend6.append(str12).toString();
                                                    c20912.L$0 = r8;
                                                    c20912.label = 10;
                                                    objBleWriteDownloadCommand$default6 = bleWriteDownloadCommand$default(r8, string6, 4000, false, c20912, 4, null);
                                                    r9 = r8;
                                                    if (objBleWriteDownloadCommand$default6 == coroutine_suspended) {
                                                        return coroutine_suspended;
                                                    }
                                                    if (!((Boolean) objBleWriteDownloadCommand$default6).booleanValue()) {
                                                        return Boxing.boxBoolean(z);
                                                    }
                                                    StringBuilder sbAppend7 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_SOUND_DB_START()).append(c).append(r9.sound_db_file_ver).append(',');
                                                    StringCompanionObject stringCompanionObject7 = StringCompanionObject.INSTANCE;
                                                    Object[] objArr7 = new Object[1];
                                                    objArr7[z ? 1 : 0] = Boxing.boxInt(r9.sound_db_file_size);
                                                    String str13 = String.format(str5, Arrays.copyOf(objArr7, 1));
                                                    Intrinsics.checkNotNullExpressionValue(str13, str);
                                                    String string7 = sbAppend7.append(str13).toString();
                                                    c20912.L$0 = r9;
                                                    c20912.label = 11;
                                                    objBleWriteDownloadCommand$default7 = bleWriteDownloadCommand$default(r9, string7, 4000, false, c20912, 4, null);
                                                    if (objBleWriteDownloadCommand$default7 == coroutine_suspended) {
                                                        r10 = r9;
                                                        return coroutine_suspended;
                                                    }
                                                    r10 = r9;
                                                    if (!((Boolean) objBleWriteDownloadCommand$default7).booleanValue()) {
                                                        return Boxing.boxBoolean(z);
                                                    }
                                                    file4 = r10.file;
                                                    i8 = r10.sound_db_file_offset;
                                                    i9 = r10.sound_db_file_size;
                                                    c20912.L$0 = r10;
                                                    c20912.label = 12;
                                                    if (r10.writeFileData(file4, i8, i9, c20912) == coroutine_suspended) {
                                                        r13 = r10;
                                                        return coroutine_suspended;
                                                    }
                                                    r13 = r10;
                                                    StringBuilder sbAppend8 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_SOUND_DB_END()).append(c);
                                                    StringCompanionObject stringCompanionObject8 = StringCompanionObject.INSTANCE;
                                                    Object[] objArr8 = new Object[1];
                                                    objArr8[z ? 1 : 0] = Boxing.boxInt(r13.sound_db_file_checksum);
                                                    String str14 = String.format(str5, Arrays.copyOf(objArr8, 1));
                                                    Intrinsics.checkNotNullExpressionValue(str14, str);
                                                    String string8 = sbAppend8.append(str14).toString();
                                                    c20912.L$0 = r13;
                                                    c20912.label = 13;
                                                    objBleWriteDownloadCommand$default8 = bleWriteDownloadCommand$default(r13, string8, 4000, false, c20912, 4, null);
                                                    r14 = r13;
                                                    if (objBleWriteDownloadCommand$default8 == coroutine_suspended) {
                                                        return coroutine_suspended;
                                                    }
                                                    if (!((Boolean) objBleWriteDownloadCommand$default8).booleanValue()) {
                                                        return Boxing.boxBoolean(z);
                                                    }
                                                    StringBuilder sbAppend9 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_GPS_DB_START()).append(c).append(r14.gps_db_file_ver).append(',');
                                                    StringCompanionObject stringCompanionObject9 = StringCompanionObject.INSTANCE;
                                                    Object[] objArr9 = new Object[1];
                                                    objArr9[z ? 1 : 0] = Boxing.boxInt(r14.gps_db_file_size);
                                                    String str15 = String.format(str5, Arrays.copyOf(objArr9, 1));
                                                    Intrinsics.checkNotNullExpressionValue(str15, str);
                                                    String string9 = sbAppend9.append(str15).toString();
                                                    c20912.L$0 = r14;
                                                    c20912.label = 14;
                                                    objBleWriteDownloadCommand$default9 = bleWriteDownloadCommand$default(r14, string9, 4000, false, c20912, 4, null);
                                                    if (objBleWriteDownloadCommand$default9 == coroutine_suspended) {
                                                        r16 = r14;
                                                        return coroutine_suspended;
                                                    }
                                                    r16 = r14;
                                                    if (!((Boolean) objBleWriteDownloadCommand$default9).booleanValue()) {
                                                        return Boxing.boxBoolean(z);
                                                    }
                                                    file5 = r16.file;
                                                    i10 = r16.gps_db_file_offset;
                                                    i11 = r16.gps_db_file_size;
                                                    c20912.L$0 = r16;
                                                    c20912.label = 15;
                                                    if (r16.writeFileData(file5, i10, i11, c20912) == coroutine_suspended) {
                                                        r17 = r16;
                                                        return coroutine_suspended;
                                                    }
                                                    r17 = r16;
                                                    StringBuilder sbAppend10 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_GPS_DB_END()).append(c);
                                                    StringCompanionObject stringCompanionObject10 = StringCompanionObject.INSTANCE;
                                                    Object[] objArr10 = new Object[1];
                                                    objArr10[z ? 1 : 0] = Boxing.boxInt(r17.gps_db_file_checksum);
                                                    String str16 = String.format(str5, Arrays.copyOf(objArr10, 1));
                                                    Intrinsics.checkNotNullExpressionValue(str16, str);
                                                    String string10 = sbAppend10.append(str16).toString();
                                                    c20912.L$0 = r17;
                                                    c20912.label = 16;
                                                    objBleWriteDownloadCommand$default10 = bleWriteDownloadCommand$default(r17, string10, 4000, false, c20912, 4, null);
                                                    r18 = r17;
                                                    if (objBleWriteDownloadCommand$default10 == coroutine_suspended) {
                                                        return coroutine_suspended;
                                                    }
                                                    if (!((Boolean) objBleWriteDownloadCommand$default10).booleanValue()) {
                                                        return Boxing.boxBoolean(z);
                                                    }
                                                    StringBuilder sbAppend11 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE1_START()).append(c).append(r18.if1_file_ver).append(',');
                                                    StringCompanionObject stringCompanionObject11 = StringCompanionObject.INSTANCE;
                                                    Object[] objArr11 = new Object[1];
                                                    objArr11[z ? 1 : 0] = Boxing.boxInt(r18.if1_file_size);
                                                    String str17 = String.format(str5, Arrays.copyOf(objArr11, 1));
                                                    Intrinsics.checkNotNullExpressionValue(str17, str);
                                                    String string11 = sbAppend11.append(str17).toString();
                                                    c20912.L$0 = r18;
                                                    c20912.label = 17;
                                                    objBleWriteDownloadCommand$default11 = bleWriteDownloadCommand$default(r18, string11, 4000, false, c20912, 4, null);
                                                    if (objBleWriteDownloadCommand$default11 == coroutine_suspended) {
                                                        r19 = r18;
                                                        return coroutine_suspended;
                                                    }
                                                    r19 = r18;
                                                    if (!((Boolean) objBleWriteDownloadCommand$default11).booleanValue()) {
                                                        return Boxing.boxBoolean(z);
                                                    }
                                                    file6 = r19.file;
                                                    i12 = r19.if1_file_offset;
                                                    i13 = r19.if1_file_size;
                                                    c20912.L$0 = r19;
                                                    c20912.label = 18;
                                                    if (r19.writeFileData(file6, i12, i13, c20912) == coroutine_suspended) {
                                                        r20 = r19;
                                                        return coroutine_suspended;
                                                    }
                                                    r20 = r19;
                                                    StringBuilder sbAppend12 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE1_END()).append(c);
                                                    StringCompanionObject stringCompanionObject12 = StringCompanionObject.INSTANCE;
                                                    Object[] objArr12 = new Object[1];
                                                    objArr12[z ? 1 : 0] = Boxing.boxInt(r20.if1_file_checksum);
                                                    String str18 = String.format(str5, Arrays.copyOf(objArr12, 1));
                                                    Intrinsics.checkNotNullExpressionValue(str18, str);
                                                    String string12 = sbAppend12.append(str18).toString();
                                                    c20912.L$0 = r20;
                                                    c20912.label = 19;
                                                    objBleWriteDownloadCommand$default12 = bleWriteDownloadCommand$default(r20, string12, 4000, false, c20912, 4, null);
                                                    r21 = r20;
                                                    if (objBleWriteDownloadCommand$default12 == coroutine_suspended) {
                                                        return coroutine_suspended;
                                                    }
                                                    if (!((Boolean) objBleWriteDownloadCommand$default12).booleanValue()) {
                                                        return Boxing.boxBoolean(z);
                                                    }
                                                    StringBuilder sbAppend13 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE2_START()).append(c).append(r21.if2_file_ver).append(',');
                                                    StringCompanionObject stringCompanionObject13 = StringCompanionObject.INSTANCE;
                                                    Object[] objArr13 = new Object[1];
                                                    objArr13[z ? 1 : 0] = Boxing.boxInt(r21.if2_file_size);
                                                    String str19 = String.format(str5, Arrays.copyOf(objArr13, 1));
                                                    Intrinsics.checkNotNullExpressionValue(str19, str);
                                                    String string13 = sbAppend13.append(str19).toString();
                                                    c20912.L$0 = r21;
                                                    c20912.label = 20;
                                                    objBleWriteDownloadCommand$default13 = bleWriteDownloadCommand$default(r21, string13, 4000, false, c20912, 4, null);
                                                    if (objBleWriteDownloadCommand$default13 == coroutine_suspended) {
                                                        r22 = r21;
                                                        return coroutine_suspended;
                                                    }
                                                    r22 = r21;
                                                    if (!((Boolean) objBleWriteDownloadCommand$default13).booleanValue()) {
                                                        return Boxing.boxBoolean(z);
                                                    }
                                                    file7 = r22.file;
                                                    i14 = r22.if2_file_offset;
                                                    i15 = r22.if2_file_size;
                                                    c20912.L$0 = r22;
                                                    c20912.label = 21;
                                                    if (r22.writeFileData(file7, i14, i15, c20912) == coroutine_suspended) {
                                                        r23 = r22;
                                                        return coroutine_suspended;
                                                    }
                                                    r23 = r22;
                                                    StringBuilder sbAppend14 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE2_END()).append(c);
                                                    StringCompanionObject stringCompanionObject14 = StringCompanionObject.INSTANCE;
                                                    Object[] objArr14 = new Object[1];
                                                    objArr14[z ? 1 : 0] = Boxing.boxInt(r23.if2_file_checksum);
                                                    String str20 = String.format(str5, Arrays.copyOf(objArr14, 1));
                                                    Intrinsics.checkNotNullExpressionValue(str20, str);
                                                    String string14 = sbAppend14.append(str20).toString();
                                                    c20912.L$0 = r23;
                                                    c20912.label = 22;
                                                    objBleWriteDownloadCommand$default14 = bleWriteDownloadCommand$default(r23, string14, 4000, false, c20912, 4, null);
                                                    r24 = r23;
                                                    if (objBleWriteDownloadCommand$default14 == coroutine_suspended) {
                                                        return coroutine_suspended;
                                                    }
                                                    if (!((Boolean) objBleWriteDownloadCommand$default14).booleanValue()) {
                                                        return Boxing.boxBoolean(z);
                                                    }
                                                    if (!StringsKt.contains$default(r24.getSharePref().getDeviceName(), "R9", z, 2, obj) || StringsKt.contains$default(r24.getSharePref().getDeviceName(), "AE903i", z, 2, obj)) {
                                                        r27 = r24;
                                                        StringBuilder sbAppend15 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE3_START()).append(c).append(r24.if3_file_ver).append(',');
                                                        StringCompanionObject stringCompanionObject15 = StringCompanionObject.INSTANCE;
                                                        Object[] objArr15 = new Object[1];
                                                        objArr15[z ? 1 : 0] = Boxing.boxInt(r24.if3_file_size);
                                                        String str21 = String.format(str5, Arrays.copyOf(objArr15, 1));
                                                        Intrinsics.checkNotNullExpressionValue(str21, str);
                                                        String string15 = sbAppend15.append(str21).toString();
                                                        c20912.L$0 = r24;
                                                        c20912.label = 23;
                                                        objBleWriteDownloadCommand$default15 = bleWriteDownloadCommand$default(r24, string15, 4000, false, c20912, 4, null);
                                                        r25 = r24;
                                                        if (objBleWriteDownloadCommand$default15 == coroutine_suspended) {
                                                            return coroutine_suspended;
                                                        }
                                                        if (!((Boolean) objBleWriteDownloadCommand$default15).booleanValue()) {
                                                            return Boxing.boxBoolean(z);
                                                        }
                                                        file8 = r25.file;
                                                        i16 = r25.if3_file_offset;
                                                        i17 = r25.if3_file_size;
                                                        c20912.L$0 = r25;
                                                        c20912.label = 24;
                                                        if (r25.writeFileData(file8, i16, i17, c20912) == coroutine_suspended) {
                                                            r26 = r25;
                                                            return coroutine_suspended;
                                                        }
                                                        r26 = r25;
                                                        StringBuilder sbAppend16 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE3_END()).append(c);
                                                        StringCompanionObject stringCompanionObject16 = StringCompanionObject.INSTANCE;
                                                        Object[] objArr16 = new Object[1];
                                                        objArr16[z ? 1 : 0] = Boxing.boxInt(r26.if3_file_checksum);
                                                        String str22 = String.format(str5, Arrays.copyOf(objArr16, 1));
                                                        Intrinsics.checkNotNullExpressionValue(str22, str);
                                                        String string16 = sbAppend16.append(str22).toString();
                                                        c20912.L$0 = r26;
                                                        c20912.label = 25;
                                                        objBleWriteDownloadCommand$default16 = bleWriteDownloadCommand$default(r26, string16, 4000, false, c20912, 4, null);
                                                        r28 = r26;
                                                        if (objBleWriteDownloadCommand$default16 == coroutine_suspended) {
                                                            return coroutine_suspended;
                                                        }
                                                        r27 = r28;
                                                        if (!((Boolean) objBleWriteDownloadCommand$default16).booleanValue()) {
                                                            return Boxing.boxBoolean(z);
                                                        }
                                                    }
                                                    r27 = r24;
                                                    StringBuilder sbAppend17 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_BLE_START()).append(c).append(r27.ble_file_ver).append(',');
                                                    StringCompanionObject stringCompanionObject17 = StringCompanionObject.INSTANCE;
                                                    Object[] objArr17 = new Object[1];
                                                    objArr17[z ? 1 : 0] = Boxing.boxInt(r27.ble_file_size);
                                                    String str23 = String.format(str5, Arrays.copyOf(objArr17, 1));
                                                    Intrinsics.checkNotNullExpressionValue(str23, str);
                                                    String string17 = sbAppend17.append(str23).toString();
                                                    c20912.L$0 = r27;
                                                    c20912.label = 26;
                                                    objBleWriteDownloadCommand$default17 = bleWriteDownloadCommand$default(r27, string17, 4000, false, c20912, 4, null);
                                                    r29 = r27;
                                                    if (objBleWriteDownloadCommand$default17 == coroutine_suspended) {
                                                        return coroutine_suspended;
                                                    }
                                                    if (!((Boolean) objBleWriteDownloadCommand$default17).booleanValue()) {
                                                        return Boxing.boxBoolean(z);
                                                    }
                                                    file9 = r29.file;
                                                    i18 = r29.ble_file_offset;
                                                    i19 = r29.ble_file_size;
                                                    c20912.L$0 = r29;
                                                    c20912.label = 27;
                                                    if (r29.writeFileData(file9, i18, i19, c20912) == coroutine_suspended) {
                                                        r30 = r29;
                                                        return coroutine_suspended;
                                                    }
                                                    r30 = r29;
                                                    StringBuilder sbAppend18 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_BLE_END()).append(c);
                                                    StringCompanionObject stringCompanionObject18 = StringCompanionObject.INSTANCE;
                                                    Object[] objArr18 = new Object[1];
                                                    objArr18[z ? 1 : 0] = Boxing.boxInt(r30.ble_file_checksum);
                                                    String str24 = String.format(str5, Arrays.copyOf(objArr18, 1));
                                                    Intrinsics.checkNotNullExpressionValue(str24, str);
                                                    String string18 = sbAppend18.append(str24).toString();
                                                    c20912.L$0 = r30;
                                                    c20912.label = 28;
                                                    objBleWriteDownloadCommand$default18 = bleWriteDownloadCommand$default(r30, string18, 4000, false, c20912, 4, null);
                                                    r31 = r30;
                                                    if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                                                        return coroutine_suspended;
                                                    }
                                                    if (!((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                                                        return Boxing.boxBoolean(z);
                                                    }
                                                    String str25 = BluetoothUtils.INSTANCE.getFD_END_COM() + ":1";
                                                    r31.getSharePref().setFwDownloadComplete(true);
                                                    r31.getSharePref().setFwFlashing(z);
                                                    r31.getMyApp().getFirmwareUpdateProcessBT().postValue(new UpdateProgressModel(FIrmWareUpdateProcess.FILE_INSTALL_FINISH, "", ""));
                                                    c20912.L$0 = r31;
                                                    c20912.label = 29;
                                                    objBleWriteDownloadCommand$default18 = r31.bleWriteDownloadCommand(str25, PathInterpolatorCompat.MAX_NUM_POINTS, true, c20912);
                                                    if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                                                        r32 = r31;
                                                        return coroutine_suspended;
                                                    }
                                                    r32 = r31;
                                                    if (((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                                                        str3 = str4;
                                                        Log.d(str3, "recovery update return flashBLEFile()");
                                                        CustomLog.INSTANCE.writeFile("recovery update return flashBLEFile()", r32.context);
                                                        if (r32.getSharePref().isBluetoothConnected()) {
                                                            c20912.L$0 = r32;
                                                            c20912.label = 30;
                                                            objFlashBLEFile = r32.flashBLEFile(c20912);
                                                            if (objFlashBLEFile == coroutine_suspended) {
                                                                r33 = r32;
                                                                return coroutine_suspended;
                                                            }
                                                            r33 = r32;
                                                            if (!((Boolean) objFlashBLEFile).booleanValue()) {
                                                                r33.getSharePref().setFwFlashing(z);
                                                                Log.d(str3, "isFwFlashing = false");
                                                            }
                                                            return Boxing.boxBoolean(true);
                                                        }
                                                        return Boxing.boxBoolean(true);
                                                    }
                                                    Log.d(str4, "recovery update return truue");
                                                    return Boxing.boxBoolean(true);
                                                }
                                                try {
                                                    return Boxing.boxBoolean(z);
                                                } catch (Exception e2) {
                                                    exc = e2;
                                                    r12 = r15;
                                                }
                                            } catch (Exception e3) {
                                                e = e3;
                                                r34 = r15;
                                                r11 = r34;
                                                exc = e;
                                                r12 = r11;
                                            }
                                        } catch (Exception e4) {
                                            e = e4;
                                            r11 = r34;
                                            exc = e;
                                            r12 = r11;
                                            r12.send_data_piece = z ? 1 : 0;
                                            r12.firmware_1_interval_size = z ? 1 : 0;
                                            r12.getSharePref().setFwDownloadComplete(z);
                                            r12.getSharePref().setFwFlashing(z);
                                            String str26 = BluetoothUtils.INSTANCE.getFD_END_COM() + ":0";
                                            c20912.L$0 = exc;
                                            c20912.L$1 = obj;
                                            c20912.label = 31;
                                            objBleWriteDownloadCommand$default18 = bleWriteDownloadCommand$default(r12, str26, 4000, false, c20912, 4, null);
                                            if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                                                return coroutine_suspended;
                                            }
                                            if (!((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                                                return Boxing.boxBoolean(z);
                                            }
                                            exc.printStackTrace();
                                            return Boxing.boxBoolean(z);
                                        }
                                    } catch (Exception e5) {
                                        e = e5;
                                        obj = null;
                                        coroutine_suspended = coroutine_suspended;
                                        c20912 = c20912;
                                        r11 = r34;
                                        exc = e;
                                        r12 = r11;
                                        r12.send_data_piece = z ? 1 : 0;
                                        r12.firmware_1_interval_size = z ? 1 : 0;
                                        r12.getSharePref().setFwDownloadComplete(z);
                                        r12.getSharePref().setFwFlashing(z);
                                        String str27 = BluetoothUtils.INSTANCE.getFD_END_COM() + ":0";
                                        c20912.L$0 = exc;
                                        c20912.L$1 = obj;
                                        c20912.label = 31;
                                        objBleWriteDownloadCommand$default18 = bleWriteDownloadCommand$default(r12, str27, 4000, false, c20912, 4, null);
                                        if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                                            return coroutine_suspended;
                                        }
                                        if (!((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                                            return Boxing.boxBoolean(z);
                                        }
                                        exc.printStackTrace();
                                        return Boxing.boxBoolean(z);
                                    }
                                } catch (Exception e6) {
                                    e = e6;
                                    z = z2;
                                }
                            } catch (Exception e7) {
                                e = e7;
                                z = false;
                                r11 = this;
                                exc = e;
                                r12 = r11;
                            }
                        } else {
                            z = false;
                            try {
                                return Boxing.boxBoolean(false);
                            } catch (Exception e8) {
                                e = e8;
                            }
                        }
                        break;
                    } catch (Exception e9) {
                        e = e9;
                        z = false;
                    }
                    r11 = this;
                    exc = e;
                    r12 = r11;
                    r12.send_data_piece = z ? 1 : 0;
                    r12.firmware_1_interval_size = z ? 1 : 0;
                    r12.getSharePref().setFwDownloadComplete(z);
                    r12.getSharePref().setFwFlashing(z);
                    String str28 = BluetoothUtils.INSTANCE.getFD_END_COM() + ":0";
                    c20912.L$0 = exc;
                    c20912.L$1 = obj;
                    c20912.label = 31;
                    objBleWriteDownloadCommand$default18 = bleWriteDownloadCommand$default(r12, str28, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    exc.printStackTrace();
                    return Boxing.boxBoolean(z);
                case 1:
                    FirmWareUpdateWorker firmWareUpdateWorker = (FirmWareUpdateWorker) c20912.L$0;
                    ResultKt.throwOnFailure(objBleWriteDownloadCommand$default18);
                    z2 = false;
                    c = ':';
                    r34 = firmWareUpdateWorker;
                    if (!((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                        return Boxing.boxBoolean(z2);
                    }
                    StringBuilder sbAppend19 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_UI_START()).append(c).append(r34.ui_file_ver).append(',');
                    StringCompanionObject stringCompanionObject19 = StringCompanionObject.INSTANCE;
                    Object[] objArr19 = new Object[1];
                    z = z2;
                    objArr19[z ? 1 : 0] = Boxing.boxInt(r34.ui_file_size);
                    String str29 = String.format(str5, Arrays.copyOf(objArr19, 1));
                    str = "format(...)";
                    Intrinsics.checkNotNullExpressionValue(str29, str);
                    String string19 = sbAppend19.append(str29).toString();
                    c20912.L$0 = r34;
                    c20912.label = 2;
                    obj = null;
                    coroutine_suspended = coroutine_suspended;
                    c20912 = c20912;
                    objBleWriteDownloadCommand$default = bleWriteDownloadCommand$default(r34, string19, 4000, false, c20912, 4, null);
                    r2 = r34;
                    if (objBleWriteDownloadCommand$default == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file = r2.file;
                    i2 = r2.ui_file_offset;
                    i3 = r2.ui_file_size;
                    c20912.L$0 = r2;
                    c20912.label = 3;
                    if (r2.writeFileData(file, i2, i3, c20912) == coroutine_suspended) {
                        r3 = r2;
                        return coroutine_suspended;
                    }
                    r3 = r2;
                    StringBuilder sbAppend20 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_UI_END()).append(c);
                    StringCompanionObject stringCompanionObject20 = StringCompanionObject.INSTANCE;
                    Object[] objArr20 = new Object[1];
                    objArr20[z ? 1 : 0] = Boxing.boxInt(r3.ui_file_checksum);
                    String str30 = String.format(str5, Arrays.copyOf(objArr20, 1));
                    Intrinsics.checkNotNullExpressionValue(str30, str);
                    String string20 = sbAppend20.append(str30).toString();
                    c20912.L$0 = r3;
                    c20912.label = 4;
                    objBleWriteDownloadCommand$default2 = bleWriteDownloadCommand$default(r3, string20, 4000, false, c20912, 4, null);
                    r4 = r3;
                    if (objBleWriteDownloadCommand$default2 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default2).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    StringBuilder sbAppend21 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_DSP_START()).append(c).append(r4.dsp_file_ver).append(',');
                    StringCompanionObject stringCompanionObject21 = StringCompanionObject.INSTANCE;
                    Object[] objArr21 = new Object[1];
                    objArr21[z ? 1 : 0] = Boxing.boxInt(r4.dsp_file_size);
                    String str31 = String.format(str5, Arrays.copyOf(objArr21, 1));
                    Intrinsics.checkNotNullExpressionValue(str31, str);
                    String string21 = sbAppend21.append(str31).toString();
                    c20912.L$0 = r4;
                    c20912.label = 5;
                    objBleWriteDownloadCommand$default3 = bleWriteDownloadCommand$default(r4, string21, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default3 == coroutine_suspended) {
                        r5 = r4;
                        return coroutine_suspended;
                    }
                    r5 = r4;
                    if (!((Boolean) objBleWriteDownloadCommand$default3).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file2 = r5.file;
                    i4 = r5.dsp_file_offset;
                    i5 = r5.dsp_file_size;
                    c20912.L$0 = r5;
                    c20912.label = 6;
                    if (r5.writeFileData(file2, i4, i5, c20912) == coroutine_suspended) {
                        r6 = r5;
                        return coroutine_suspended;
                    }
                    r6 = r5;
                    StringBuilder sbAppend22 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_DSP_END()).append(c);
                    StringCompanionObject stringCompanionObject22 = StringCompanionObject.INSTANCE;
                    Object[] objArr22 = new Object[1];
                    objArr22[z ? 1 : 0] = Boxing.boxInt(r6.dsp_file_checksum);
                    String str110 = String.format(str5, Arrays.copyOf(objArr22, 1));
                    Intrinsics.checkNotNullExpressionValue(str110, str);
                    string = sbAppend22.append(str110).toString();
                    c20912.L$0 = r6;
                    c20912.L$1 = string;
                    c20912.label = 7;
                    objBleWriteDownloadCommand$default4 = bleWriteDownloadCommand$default(r6, string, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default4 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    r15 = r6;
                    str2 = string;
                    if (((Boolean) objBleWriteDownloadCommand$default4).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    Log.e("DSP_COMMAND", str2);
                    StringBuilder sbAppend23 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_GPS_START()).append(c).append(r15.gps_file_ver).append(',');
                    StringCompanionObject stringCompanionObject23 = StringCompanionObject.INSTANCE;
                    Object[] objArr23 = new Object[1];
                    objArr23[z ? 1 : 0] = Boxing.boxInt(r15.gps_file_size);
                    String str111 = String.format(str5, Arrays.copyOf(objArr23, 1));
                    Intrinsics.checkNotNullExpressionValue(str111, str);
                    String string22 = sbAppend23.append(str111).toString();
                    c20912.L$0 = r15;
                    c20912.L$1 = obj;
                    c20912.label = 8;
                    r7 = r15;
                    objBleWriteDownloadCommand$default5 = bleWriteDownloadCommand$default(r15, string22, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default5 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default5).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file3 = r7.file;
                    i6 = r7.gps_file_offset;
                    i7 = r7.gps_file_size;
                    c20912.L$0 = r7;
                    c20912.label = 9;
                    if (r7.writeFileData(file3, i6, i7, c20912) == coroutine_suspended) {
                        r8 = r7;
                        return coroutine_suspended;
                    }
                    r8 = r7;
                    StringBuilder sbAppend24 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_GPS_END()).append(c);
                    StringCompanionObject stringCompanionObject24 = StringCompanionObject.INSTANCE;
                    Object[] objArr24 = new Object[1];
                    objArr24[z ? 1 : 0] = Boxing.boxInt(r8.gps_file_checksum);
                    String str112 = String.format(str5, Arrays.copyOf(objArr24, 1));
                    Intrinsics.checkNotNullExpressionValue(str112, str);
                    String string23 = sbAppend24.append(str112).toString();
                    c20912.L$0 = r8;
                    c20912.label = 10;
                    objBleWriteDownloadCommand$default6 = bleWriteDownloadCommand$default(r8, string23, 4000, false, c20912, 4, null);
                    r9 = r8;
                    if (objBleWriteDownloadCommand$default6 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default6).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    StringBuilder sbAppend25 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_SOUND_DB_START()).append(c).append(r9.sound_db_file_ver).append(',');
                    StringCompanionObject stringCompanionObject25 = StringCompanionObject.INSTANCE;
                    Object[] objArr25 = new Object[1];
                    objArr25[z ? 1 : 0] = Boxing.boxInt(r9.sound_db_file_size);
                    String str113 = String.format(str5, Arrays.copyOf(objArr25, 1));
                    Intrinsics.checkNotNullExpressionValue(str113, str);
                    String string24 = sbAppend25.append(str113).toString();
                    c20912.L$0 = r9;
                    c20912.label = 11;
                    objBleWriteDownloadCommand$default7 = bleWriteDownloadCommand$default(r9, string24, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default7 == coroutine_suspended) {
                        r10 = r9;
                        return coroutine_suspended;
                    }
                    r10 = r9;
                    if (!((Boolean) objBleWriteDownloadCommand$default7).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file4 = r10.file;
                    i8 = r10.sound_db_file_offset;
                    i9 = r10.sound_db_file_size;
                    c20912.L$0 = r10;
                    c20912.label = 12;
                    if (r10.writeFileData(file4, i8, i9, c20912) == coroutine_suspended) {
                        r13 = r10;
                        return coroutine_suspended;
                    }
                    r13 = r10;
                    StringBuilder sbAppend26 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_SOUND_DB_END()).append(c);
                    StringCompanionObject stringCompanionObject26 = StringCompanionObject.INSTANCE;
                    Object[] objArr26 = new Object[1];
                    objArr26[z ? 1 : 0] = Boxing.boxInt(r13.sound_db_file_checksum);
                    String str114 = String.format(str5, Arrays.copyOf(objArr26, 1));
                    Intrinsics.checkNotNullExpressionValue(str114, str);
                    String string25 = sbAppend26.append(str114).toString();
                    c20912.L$0 = r13;
                    c20912.label = 13;
                    objBleWriteDownloadCommand$default8 = bleWriteDownloadCommand$default(r13, string25, 4000, false, c20912, 4, null);
                    r14 = r13;
                    if (objBleWriteDownloadCommand$default8 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default8).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    StringBuilder sbAppend27 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_GPS_DB_START()).append(c).append(r14.gps_db_file_ver).append(',');
                    StringCompanionObject stringCompanionObject27 = StringCompanionObject.INSTANCE;
                    Object[] objArr27 = new Object[1];
                    objArr27[z ? 1 : 0] = Boxing.boxInt(r14.gps_db_file_size);
                    String str115 = String.format(str5, Arrays.copyOf(objArr27, 1));
                    Intrinsics.checkNotNullExpressionValue(str115, str);
                    String string26 = sbAppend27.append(str115).toString();
                    c20912.L$0 = r14;
                    c20912.label = 14;
                    objBleWriteDownloadCommand$default9 = bleWriteDownloadCommand$default(r14, string26, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default9 == coroutine_suspended) {
                        r16 = r14;
                        return coroutine_suspended;
                    }
                    r16 = r14;
                    if (!((Boolean) objBleWriteDownloadCommand$default9).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file5 = r16.file;
                    i10 = r16.gps_db_file_offset;
                    i11 = r16.gps_db_file_size;
                    c20912.L$0 = r16;
                    c20912.label = 15;
                    if (r16.writeFileData(file5, i10, i11, c20912) == coroutine_suspended) {
                        r17 = r16;
                        return coroutine_suspended;
                    }
                    r17 = r16;
                    StringBuilder sbAppend110 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_GPS_DB_END()).append(c);
                    StringCompanionObject stringCompanionObject110 = StringCompanionObject.INSTANCE;
                    Object[] objArr110 = new Object[1];
                    objArr110[z ? 1 : 0] = Boxing.boxInt(r17.gps_db_file_checksum);
                    String str116 = String.format(str5, Arrays.copyOf(objArr110, 1));
                    Intrinsics.checkNotNullExpressionValue(str116, str);
                    String string110 = sbAppend110.append(str116).toString();
                    c20912.L$0 = r17;
                    c20912.label = 16;
                    objBleWriteDownloadCommand$default10 = bleWriteDownloadCommand$default(r17, string110, 4000, false, c20912, 4, null);
                    r18 = r17;
                    if (objBleWriteDownloadCommand$default10 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default10).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    StringBuilder sbAppend111 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE1_START()).append(c).append(r18.if1_file_ver).append(',');
                    StringCompanionObject stringCompanionObject111 = StringCompanionObject.INSTANCE;
                    Object[] objArr111 = new Object[1];
                    objArr111[z ? 1 : 0] = Boxing.boxInt(r18.if1_file_size);
                    String str117 = String.format(str5, Arrays.copyOf(objArr111, 1));
                    Intrinsics.checkNotNullExpressionValue(str117, str);
                    String string111 = sbAppend111.append(str117).toString();
                    c20912.L$0 = r18;
                    c20912.label = 17;
                    objBleWriteDownloadCommand$default11 = bleWriteDownloadCommand$default(r18, string111, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default11 == coroutine_suspended) {
                        r19 = r18;
                        return coroutine_suspended;
                    }
                    r19 = r18;
                    if (!((Boolean) objBleWriteDownloadCommand$default11).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file6 = r19.file;
                    i12 = r19.if1_file_offset;
                    i13 = r19.if1_file_size;
                    c20912.L$0 = r19;
                    c20912.label = 18;
                    if (r19.writeFileData(file6, i12, i13, c20912) == coroutine_suspended) {
                        r20 = r19;
                        return coroutine_suspended;
                    }
                    r20 = r19;
                    StringBuilder sbAppend112 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE1_END()).append(c);
                    StringCompanionObject stringCompanionObject112 = StringCompanionObject.INSTANCE;
                    Object[] objArr112 = new Object[1];
                    objArr112[z ? 1 : 0] = Boxing.boxInt(r20.if1_file_checksum);
                    String str118 = String.format(str5, Arrays.copyOf(objArr112, 1));
                    Intrinsics.checkNotNullExpressionValue(str118, str);
                    String string112 = sbAppend112.append(str118).toString();
                    c20912.L$0 = r20;
                    c20912.label = 19;
                    objBleWriteDownloadCommand$default12 = bleWriteDownloadCommand$default(r20, string112, 4000, false, c20912, 4, null);
                    r21 = r20;
                    if (objBleWriteDownloadCommand$default12 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default12).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    StringBuilder sbAppend113 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE2_START()).append(c).append(r21.if2_file_ver).append(',');
                    StringCompanionObject stringCompanionObject113 = StringCompanionObject.INSTANCE;
                    Object[] objArr113 = new Object[1];
                    objArr113[z ? 1 : 0] = Boxing.boxInt(r21.if2_file_size);
                    String str119 = String.format(str5, Arrays.copyOf(objArr113, 1));
                    Intrinsics.checkNotNullExpressionValue(str119, str);
                    String string113 = sbAppend113.append(str119).toString();
                    c20912.L$0 = r21;
                    c20912.label = 20;
                    objBleWriteDownloadCommand$default13 = bleWriteDownloadCommand$default(r21, string113, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default13 == coroutine_suspended) {
                        r22 = r21;
                        return coroutine_suspended;
                    }
                    r22 = r21;
                    if (!((Boolean) objBleWriteDownloadCommand$default13).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file7 = r22.file;
                    i14 = r22.if2_file_offset;
                    i15 = r22.if2_file_size;
                    c20912.L$0 = r22;
                    c20912.label = 21;
                    if (r22.writeFileData(file7, i14, i15, c20912) == coroutine_suspended) {
                        r23 = r22;
                        return coroutine_suspended;
                    }
                    r23 = r22;
                    StringBuilder sbAppend114 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE2_END()).append(c);
                    StringCompanionObject stringCompanionObject114 = StringCompanionObject.INSTANCE;
                    Object[] objArr114 = new Object[1];
                    objArr114[z ? 1 : 0] = Boxing.boxInt(r23.if2_file_checksum);
                    String str210 = String.format(str5, Arrays.copyOf(objArr114, 1));
                    Intrinsics.checkNotNullExpressionValue(str210, str);
                    String string114 = sbAppend114.append(str210).toString();
                    c20912.L$0 = r23;
                    c20912.label = 22;
                    objBleWriteDownloadCommand$default14 = bleWriteDownloadCommand$default(r23, string114, 4000, false, c20912, 4, null);
                    r24 = r23;
                    if (objBleWriteDownloadCommand$default14 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default14).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    if (!StringsKt.contains$default(r24.getSharePref().getDeviceName(), "R9", z, 2, obj)) {
                        break;
                    }
                    r27 = r24;
                    StringBuilder sbAppend115 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE3_START()).append(c).append(r24.if3_file_ver).append(',');
                    StringCompanionObject stringCompanionObject115 = StringCompanionObject.INSTANCE;
                    Object[] objArr115 = new Object[1];
                    objArr115[z ? 1 : 0] = Boxing.boxInt(r24.if3_file_size);
                    String str211 = String.format(str5, Arrays.copyOf(objArr115, 1));
                    Intrinsics.checkNotNullExpressionValue(str211, str);
                    String string115 = sbAppend115.append(str211).toString();
                    c20912.L$0 = r24;
                    c20912.label = 23;
                    objBleWriteDownloadCommand$default15 = bleWriteDownloadCommand$default(r24, string115, 4000, false, c20912, 4, null);
                    r25 = r24;
                    if (objBleWriteDownloadCommand$default15 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default15).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file8 = r25.file;
                    i16 = r25.if3_file_offset;
                    i17 = r25.if3_file_size;
                    c20912.L$0 = r25;
                    c20912.label = 24;
                    if (r25.writeFileData(file8, i16, i17, c20912) == coroutine_suspended) {
                        r26 = r25;
                        return coroutine_suspended;
                    }
                    r26 = r25;
                    StringBuilder sbAppend116 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE3_END()).append(c);
                    StringCompanionObject stringCompanionObject116 = StringCompanionObject.INSTANCE;
                    Object[] objArr116 = new Object[1];
                    objArr116[z ? 1 : 0] = Boxing.boxInt(r26.if3_file_checksum);
                    String str212 = String.format(str5, Arrays.copyOf(objArr116, 1));
                    Intrinsics.checkNotNullExpressionValue(str212, str);
                    String string116 = sbAppend116.append(str212).toString();
                    c20912.L$0 = r26;
                    c20912.label = 25;
                    objBleWriteDownloadCommand$default16 = bleWriteDownloadCommand$default(r26, string116, 4000, false, c20912, 4, null);
                    r28 = r26;
                    if (objBleWriteDownloadCommand$default16 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    r27 = r28;
                    if (!((Boolean) objBleWriteDownloadCommand$default16).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    r27 = r24;
                    StringBuilder sbAppend117 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_BLE_START()).append(c).append(r27.ble_file_ver).append(',');
                    StringCompanionObject stringCompanionObject117 = StringCompanionObject.INSTANCE;
                    Object[] objArr117 = new Object[1];
                    objArr117[z ? 1 : 0] = Boxing.boxInt(r27.ble_file_size);
                    String str213 = String.format(str5, Arrays.copyOf(objArr117, 1));
                    Intrinsics.checkNotNullExpressionValue(str213, str);
                    String string117 = sbAppend117.append(str213).toString();
                    c20912.L$0 = r27;
                    c20912.label = 26;
                    objBleWriteDownloadCommand$default17 = bleWriteDownloadCommand$default(r27, string117, 4000, false, c20912, 4, null);
                    r29 = r27;
                    if (objBleWriteDownloadCommand$default17 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default17).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file9 = r29.file;
                    i18 = r29.ble_file_offset;
                    i19 = r29.ble_file_size;
                    c20912.L$0 = r29;
                    c20912.label = 27;
                    if (r29.writeFileData(file9, i18, i19, c20912) == coroutine_suspended) {
                        r30 = r29;
                        return coroutine_suspended;
                    }
                    r30 = r29;
                    StringBuilder sbAppend118 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_BLE_END()).append(c);
                    StringCompanionObject stringCompanionObject118 = StringCompanionObject.INSTANCE;
                    Object[] objArr118 = new Object[1];
                    objArr118[z ? 1 : 0] = Boxing.boxInt(r30.ble_file_checksum);
                    String str214 = String.format(str5, Arrays.copyOf(objArr118, 1));
                    Intrinsics.checkNotNullExpressionValue(str214, str);
                    String string118 = sbAppend118.append(str214).toString();
                    c20912.L$0 = r30;
                    c20912.label = 28;
                    objBleWriteDownloadCommand$default18 = bleWriteDownloadCommand$default(r30, string118, 4000, false, c20912, 4, null);
                    r31 = r30;
                    if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    String str215 = BluetoothUtils.INSTANCE.getFD_END_COM() + ":1";
                    r31.getSharePref().setFwDownloadComplete(true);
                    r31.getSharePref().setFwFlashing(z);
                    r31.getMyApp().getFirmwareUpdateProcessBT().postValue(new UpdateProgressModel(FIrmWareUpdateProcess.FILE_INSTALL_FINISH, "", ""));
                    c20912.L$0 = r31;
                    c20912.label = 29;
                    objBleWriteDownloadCommand$default18 = r31.bleWriteDownloadCommand(str215, PathInterpolatorCompat.MAX_NUM_POINTS, true, c20912);
                    if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                        r32 = r31;
                        return coroutine_suspended;
                    }
                    r32 = r31;
                    if (((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                        str3 = str4;
                        Log.d(str3, "recovery update return flashBLEFile()");
                        CustomLog.INSTANCE.writeFile("recovery update return flashBLEFile()", r32.context);
                        if (r32.getSharePref().isBluetoothConnected()) {
                            c20912.L$0 = r32;
                            c20912.label = 30;
                            objFlashBLEFile = r32.flashBLEFile(c20912);
                            if (objFlashBLEFile == coroutine_suspended) {
                                r33 = r32;
                                return coroutine_suspended;
                            }
                            r33 = r32;
                            if (!((Boolean) objFlashBLEFile).booleanValue()) {
                                r33.getSharePref().setFwFlashing(z);
                                Log.d(str3, "isFwFlashing = false");
                            }
                            return Boxing.boxBoolean(true);
                        }
                        return Boxing.boxBoolean(true);
                    }
                    Log.d(str4, "recovery update return truue");
                    return Boxing.boxBoolean(true);
                    r12.send_data_piece = z ? 1 : 0;
                    r12.firmware_1_interval_size = z ? 1 : 0;
                    r12.getSharePref().setFwDownloadComplete(z);
                    r12.getSharePref().setFwFlashing(z);
                    String str216 = BluetoothUtils.INSTANCE.getFD_END_COM() + ":0";
                    c20912.L$0 = exc;
                    c20912.L$1 = obj;
                    c20912.label = 31;
                    objBleWriteDownloadCommand$default18 = bleWriteDownloadCommand$default(r12, str216, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    exc.printStackTrace();
                    return Boxing.boxBoolean(z);
                case 2:
                    FirmWareUpdateWorker firmWareUpdateWorker2 = (FirmWareUpdateWorker) c20912.L$0;
                    ResultKt.throwOnFailure(objBleWriteDownloadCommand$default18);
                    z = false;
                    obj = null;
                    coroutine_suspended = coroutine_suspended;
                    c20912 = c20912;
                    c = ':';
                    objBleWriteDownloadCommand$default = objBleWriteDownloadCommand$default18;
                    str = "format(...)";
                    r2 = firmWareUpdateWorker2;
                    if (!((Boolean) objBleWriteDownloadCommand$default).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file = r2.file;
                    i2 = r2.ui_file_offset;
                    i3 = r2.ui_file_size;
                    c20912.L$0 = r2;
                    c20912.label = 3;
                    if (r2.writeFileData(file, i2, i3, c20912) == coroutine_suspended) {
                        r3 = r2;
                        return coroutine_suspended;
                    }
                    r3 = r2;
                    StringBuilder sbAppend28 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_UI_END()).append(c);
                    StringCompanionObject stringCompanionObject28 = StringCompanionObject.INSTANCE;
                    Object[] objArr28 = new Object[1];
                    objArr28[z ? 1 : 0] = Boxing.boxInt(r3.ui_file_checksum);
                    String str32 = String.format(str5, Arrays.copyOf(objArr28, 1));
                    Intrinsics.checkNotNullExpressionValue(str32, str);
                    String string27 = sbAppend28.append(str32).toString();
                    c20912.L$0 = r3;
                    c20912.label = 4;
                    objBleWriteDownloadCommand$default2 = bleWriteDownloadCommand$default(r3, string27, 4000, false, c20912, 4, null);
                    r4 = r3;
                    if (objBleWriteDownloadCommand$default2 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default2).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    StringBuilder sbAppend29 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_DSP_START()).append(c).append(r4.dsp_file_ver).append(',');
                    StringCompanionObject stringCompanionObject29 = StringCompanionObject.INSTANCE;
                    Object[] objArr29 = new Object[1];
                    objArr29[z ? 1 : 0] = Boxing.boxInt(r4.dsp_file_size);
                    String str33 = String.format(str5, Arrays.copyOf(objArr29, 1));
                    Intrinsics.checkNotNullExpressionValue(str33, str);
                    String string28 = sbAppend29.append(str33).toString();
                    c20912.L$0 = r4;
                    c20912.label = 5;
                    objBleWriteDownloadCommand$default3 = bleWriteDownloadCommand$default(r4, string28, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default3 == coroutine_suspended) {
                        r5 = r4;
                        return coroutine_suspended;
                    }
                    r5 = r4;
                    if (!((Boolean) objBleWriteDownloadCommand$default3).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file2 = r5.file;
                    i4 = r5.dsp_file_offset;
                    i5 = r5.dsp_file_size;
                    c20912.L$0 = r5;
                    c20912.label = 6;
                    if (r5.writeFileData(file2, i4, i5, c20912) == coroutine_suspended) {
                        r6 = r5;
                        return coroutine_suspended;
                    }
                    r6 = r5;
                    StringBuilder sbAppend210 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_DSP_END()).append(c);
                    StringCompanionObject stringCompanionObject210 = StringCompanionObject.INSTANCE;
                    Object[] objArr210 = new Object[1];
                    objArr210[z ? 1 : 0] = Boxing.boxInt(r6.dsp_file_checksum);
                    String str1110 = String.format(str5, Arrays.copyOf(objArr210, 1));
                    Intrinsics.checkNotNullExpressionValue(str1110, str);
                    string = sbAppend210.append(str1110).toString();
                    c20912.L$0 = r6;
                    c20912.L$1 = string;
                    c20912.label = 7;
                    objBleWriteDownloadCommand$default4 = bleWriteDownloadCommand$default(r6, string, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default4 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    r15 = r6;
                    str2 = string;
                    if (((Boolean) objBleWriteDownloadCommand$default4).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    Log.e("DSP_COMMAND", str2);
                    StringBuilder sbAppend211 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_GPS_START()).append(c).append(r15.gps_file_ver).append(',');
                    StringCompanionObject stringCompanionObject211 = StringCompanionObject.INSTANCE;
                    Object[] objArr211 = new Object[1];
                    objArr211[z ? 1 : 0] = Boxing.boxInt(r15.gps_file_size);
                    String str1111 = String.format(str5, Arrays.copyOf(objArr211, 1));
                    Intrinsics.checkNotNullExpressionValue(str1111, str);
                    String string29 = sbAppend211.append(str1111).toString();
                    c20912.L$0 = r15;
                    c20912.L$1 = obj;
                    c20912.label = 8;
                    r7 = r15;
                    objBleWriteDownloadCommand$default5 = bleWriteDownloadCommand$default(r15, string29, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default5 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default5).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file3 = r7.file;
                    i6 = r7.gps_file_offset;
                    i7 = r7.gps_file_size;
                    c20912.L$0 = r7;
                    c20912.label = 9;
                    if (r7.writeFileData(file3, i6, i7, c20912) == coroutine_suspended) {
                        r8 = r7;
                        return coroutine_suspended;
                    }
                    r8 = r7;
                    StringBuilder sbAppend212 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_GPS_END()).append(c);
                    StringCompanionObject stringCompanionObject212 = StringCompanionObject.INSTANCE;
                    Object[] objArr212 = new Object[1];
                    objArr212[z ? 1 : 0] = Boxing.boxInt(r8.gps_file_checksum);
                    String str1112 = String.format(str5, Arrays.copyOf(objArr212, 1));
                    Intrinsics.checkNotNullExpressionValue(str1112, str);
                    String string210 = sbAppend212.append(str1112).toString();
                    c20912.L$0 = r8;
                    c20912.label = 10;
                    objBleWriteDownloadCommand$default6 = bleWriteDownloadCommand$default(r8, string210, 4000, false, c20912, 4, null);
                    r9 = r8;
                    if (objBleWriteDownloadCommand$default6 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default6).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    StringBuilder sbAppend213 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_SOUND_DB_START()).append(c).append(r9.sound_db_file_ver).append(',');
                    StringCompanionObject stringCompanionObject213 = StringCompanionObject.INSTANCE;
                    Object[] objArr213 = new Object[1];
                    objArr213[z ? 1 : 0] = Boxing.boxInt(r9.sound_db_file_size);
                    String str1113 = String.format(str5, Arrays.copyOf(objArr213, 1));
                    Intrinsics.checkNotNullExpressionValue(str1113, str);
                    String string211 = sbAppend213.append(str1113).toString();
                    c20912.L$0 = r9;
                    c20912.label = 11;
                    objBleWriteDownloadCommand$default7 = bleWriteDownloadCommand$default(r9, string211, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default7 == coroutine_suspended) {
                        r10 = r9;
                        return coroutine_suspended;
                    }
                    r10 = r9;
                    if (!((Boolean) objBleWriteDownloadCommand$default7).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file4 = r10.file;
                    i8 = r10.sound_db_file_offset;
                    i9 = r10.sound_db_file_size;
                    c20912.L$0 = r10;
                    c20912.label = 12;
                    if (r10.writeFileData(file4, i8, i9, c20912) == coroutine_suspended) {
                        r13 = r10;
                        return coroutine_suspended;
                    }
                    r13 = r10;
                    StringBuilder sbAppend214 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_SOUND_DB_END()).append(c);
                    StringCompanionObject stringCompanionObject214 = StringCompanionObject.INSTANCE;
                    Object[] objArr214 = new Object[1];
                    objArr214[z ? 1 : 0] = Boxing.boxInt(r13.sound_db_file_checksum);
                    String str1114 = String.format(str5, Arrays.copyOf(objArr214, 1));
                    Intrinsics.checkNotNullExpressionValue(str1114, str);
                    String string212 = sbAppend214.append(str1114).toString();
                    c20912.L$0 = r13;
                    c20912.label = 13;
                    objBleWriteDownloadCommand$default8 = bleWriteDownloadCommand$default(r13, string212, 4000, false, c20912, 4, null);
                    r14 = r13;
                    if (objBleWriteDownloadCommand$default8 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default8).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    StringBuilder sbAppend215 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_GPS_DB_START()).append(c).append(r14.gps_db_file_ver).append(',');
                    StringCompanionObject stringCompanionObject215 = StringCompanionObject.INSTANCE;
                    Object[] objArr215 = new Object[1];
                    objArr215[z ? 1 : 0] = Boxing.boxInt(r14.gps_db_file_size);
                    String str1115 = String.format(str5, Arrays.copyOf(objArr215, 1));
                    Intrinsics.checkNotNullExpressionValue(str1115, str);
                    String string213 = sbAppend215.append(str1115).toString();
                    c20912.L$0 = r14;
                    c20912.label = 14;
                    objBleWriteDownloadCommand$default9 = bleWriteDownloadCommand$default(r14, string213, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default9 == coroutine_suspended) {
                        r16 = r14;
                        return coroutine_suspended;
                    }
                    r16 = r14;
                    if (!((Boolean) objBleWriteDownloadCommand$default9).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file5 = r16.file;
                    i10 = r16.gps_db_file_offset;
                    i11 = r16.gps_db_file_size;
                    c20912.L$0 = r16;
                    c20912.label = 15;
                    if (r16.writeFileData(file5, i10, i11, c20912) == coroutine_suspended) {
                        r17 = r16;
                        return coroutine_suspended;
                    }
                    r17 = r16;
                    StringBuilder sbAppend119 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_GPS_DB_END()).append(c);
                    StringCompanionObject stringCompanionObject119 = StringCompanionObject.INSTANCE;
                    Object[] objArr119 = new Object[1];
                    objArr119[z ? 1 : 0] = Boxing.boxInt(r17.gps_db_file_checksum);
                    String str1116 = String.format(str5, Arrays.copyOf(objArr119, 1));
                    Intrinsics.checkNotNullExpressionValue(str1116, str);
                    String string119 = sbAppend119.append(str1116).toString();
                    c20912.L$0 = r17;
                    c20912.label = 16;
                    objBleWriteDownloadCommand$default10 = bleWriteDownloadCommand$default(r17, string119, 4000, false, c20912, 4, null);
                    r18 = r17;
                    if (objBleWriteDownloadCommand$default10 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default10).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    StringBuilder sbAppend1110 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE1_START()).append(c).append(r18.if1_file_ver).append(',');
                    StringCompanionObject stringCompanionObject1110 = StringCompanionObject.INSTANCE;
                    Object[] objArr1110 = new Object[1];
                    objArr1110[z ? 1 : 0] = Boxing.boxInt(r18.if1_file_size);
                    String str1117 = String.format(str5, Arrays.copyOf(objArr1110, 1));
                    Intrinsics.checkNotNullExpressionValue(str1117, str);
                    String string1110 = sbAppend1110.append(str1117).toString();
                    c20912.L$0 = r18;
                    c20912.label = 17;
                    objBleWriteDownloadCommand$default11 = bleWriteDownloadCommand$default(r18, string1110, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default11 == coroutine_suspended) {
                        r19 = r18;
                        return coroutine_suspended;
                    }
                    r19 = r18;
                    if (!((Boolean) objBleWriteDownloadCommand$default11).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file6 = r19.file;
                    i12 = r19.if1_file_offset;
                    i13 = r19.if1_file_size;
                    c20912.L$0 = r19;
                    c20912.label = 18;
                    if (r19.writeFileData(file6, i12, i13, c20912) == coroutine_suspended) {
                        r20 = r19;
                        return coroutine_suspended;
                    }
                    r20 = r19;
                    StringBuilder sbAppend1111 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE1_END()).append(c);
                    StringCompanionObject stringCompanionObject1111 = StringCompanionObject.INSTANCE;
                    Object[] objArr1111 = new Object[1];
                    objArr1111[z ? 1 : 0] = Boxing.boxInt(r20.if1_file_checksum);
                    String str1118 = String.format(str5, Arrays.copyOf(objArr1111, 1));
                    Intrinsics.checkNotNullExpressionValue(str1118, str);
                    String string1111 = sbAppend1111.append(str1118).toString();
                    c20912.L$0 = r20;
                    c20912.label = 19;
                    objBleWriteDownloadCommand$default12 = bleWriteDownloadCommand$default(r20, string1111, 4000, false, c20912, 4, null);
                    r21 = r20;
                    if (objBleWriteDownloadCommand$default12 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default12).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    StringBuilder sbAppend1112 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE2_START()).append(c).append(r21.if2_file_ver).append(',');
                    StringCompanionObject stringCompanionObject1112 = StringCompanionObject.INSTANCE;
                    Object[] objArr1112 = new Object[1];
                    objArr1112[z ? 1 : 0] = Boxing.boxInt(r21.if2_file_size);
                    String str1119 = String.format(str5, Arrays.copyOf(objArr1112, 1));
                    Intrinsics.checkNotNullExpressionValue(str1119, str);
                    String string1112 = sbAppend1112.append(str1119).toString();
                    c20912.L$0 = r21;
                    c20912.label = 20;
                    objBleWriteDownloadCommand$default13 = bleWriteDownloadCommand$default(r21, string1112, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default13 == coroutine_suspended) {
                        r22 = r21;
                        return coroutine_suspended;
                    }
                    r22 = r21;
                    if (!((Boolean) objBleWriteDownloadCommand$default13).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file7 = r22.file;
                    i14 = r22.if2_file_offset;
                    i15 = r22.if2_file_size;
                    c20912.L$0 = r22;
                    c20912.label = 21;
                    if (r22.writeFileData(file7, i14, i15, c20912) == coroutine_suspended) {
                        r23 = r22;
                        return coroutine_suspended;
                    }
                    r23 = r22;
                    StringBuilder sbAppend1113 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE2_END()).append(c);
                    StringCompanionObject stringCompanionObject1113 = StringCompanionObject.INSTANCE;
                    Object[] objArr1113 = new Object[1];
                    objArr1113[z ? 1 : 0] = Boxing.boxInt(r23.if2_file_checksum);
                    String str217 = String.format(str5, Arrays.copyOf(objArr1113, 1));
                    Intrinsics.checkNotNullExpressionValue(str217, str);
                    String string1113 = sbAppend1113.append(str217).toString();
                    c20912.L$0 = r23;
                    c20912.label = 22;
                    objBleWriteDownloadCommand$default14 = bleWriteDownloadCommand$default(r23, string1113, 4000, false, c20912, 4, null);
                    r24 = r23;
                    if (objBleWriteDownloadCommand$default14 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default14).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    if (!StringsKt.contains$default(r24.getSharePref().getDeviceName(), "R9", z, 2, obj)) {
                        break;
                    }
                    r27 = r24;
                    StringBuilder sbAppend1114 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE3_START()).append(c).append(r24.if3_file_ver).append(',');
                    StringCompanionObject stringCompanionObject1114 = StringCompanionObject.INSTANCE;
                    Object[] objArr1114 = new Object[1];
                    objArr1114[z ? 1 : 0] = Boxing.boxInt(r24.if3_file_size);
                    String str218 = String.format(str5, Arrays.copyOf(objArr1114, 1));
                    Intrinsics.checkNotNullExpressionValue(str218, str);
                    String string1114 = sbAppend1114.append(str218).toString();
                    c20912.L$0 = r24;
                    c20912.label = 23;
                    objBleWriteDownloadCommand$default15 = bleWriteDownloadCommand$default(r24, string1114, 4000, false, c20912, 4, null);
                    r25 = r24;
                    if (objBleWriteDownloadCommand$default15 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default15).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file8 = r25.file;
                    i16 = r25.if3_file_offset;
                    i17 = r25.if3_file_size;
                    c20912.L$0 = r25;
                    c20912.label = 24;
                    if (r25.writeFileData(file8, i16, i17, c20912) == coroutine_suspended) {
                        r26 = r25;
                        return coroutine_suspended;
                    }
                    r26 = r25;
                    StringBuilder sbAppend1115 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE3_END()).append(c);
                    StringCompanionObject stringCompanionObject1115 = StringCompanionObject.INSTANCE;
                    Object[] objArr1115 = new Object[1];
                    objArr1115[z ? 1 : 0] = Boxing.boxInt(r26.if3_file_checksum);
                    String str219 = String.format(str5, Arrays.copyOf(objArr1115, 1));
                    Intrinsics.checkNotNullExpressionValue(str219, str);
                    String string1115 = sbAppend1115.append(str219).toString();
                    c20912.L$0 = r26;
                    c20912.label = 25;
                    objBleWriteDownloadCommand$default16 = bleWriteDownloadCommand$default(r26, string1115, 4000, false, c20912, 4, null);
                    r28 = r26;
                    if (objBleWriteDownloadCommand$default16 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    r27 = r28;
                    if (!((Boolean) objBleWriteDownloadCommand$default16).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    r27 = r24;
                    StringBuilder sbAppend1116 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_BLE_START()).append(c).append(r27.ble_file_ver).append(',');
                    StringCompanionObject stringCompanionObject1116 = StringCompanionObject.INSTANCE;
                    Object[] objArr1116 = new Object[1];
                    objArr1116[z ? 1 : 0] = Boxing.boxInt(r27.ble_file_size);
                    String str2110 = String.format(str5, Arrays.copyOf(objArr1116, 1));
                    Intrinsics.checkNotNullExpressionValue(str2110, str);
                    String string1116 = sbAppend1116.append(str2110).toString();
                    c20912.L$0 = r27;
                    c20912.label = 26;
                    objBleWriteDownloadCommand$default17 = bleWriteDownloadCommand$default(r27, string1116, 4000, false, c20912, 4, null);
                    r29 = r27;
                    if (objBleWriteDownloadCommand$default17 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default17).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file9 = r29.file;
                    i18 = r29.ble_file_offset;
                    i19 = r29.ble_file_size;
                    c20912.L$0 = r29;
                    c20912.label = 27;
                    if (r29.writeFileData(file9, i18, i19, c20912) == coroutine_suspended) {
                        r30 = r29;
                        return coroutine_suspended;
                    }
                    r30 = r29;
                    StringBuilder sbAppend1117 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_BLE_END()).append(c);
                    StringCompanionObject stringCompanionObject1117 = StringCompanionObject.INSTANCE;
                    Object[] objArr1117 = new Object[1];
                    objArr1117[z ? 1 : 0] = Boxing.boxInt(r30.ble_file_checksum);
                    String str2111 = String.format(str5, Arrays.copyOf(objArr1117, 1));
                    Intrinsics.checkNotNullExpressionValue(str2111, str);
                    String string1117 = sbAppend1117.append(str2111).toString();
                    c20912.L$0 = r30;
                    c20912.label = 28;
                    objBleWriteDownloadCommand$default18 = bleWriteDownloadCommand$default(r30, string1117, 4000, false, c20912, 4, null);
                    r31 = r30;
                    if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    String str2112 = BluetoothUtils.INSTANCE.getFD_END_COM() + ":1";
                    r31.getSharePref().setFwDownloadComplete(true);
                    r31.getSharePref().setFwFlashing(z);
                    r31.getMyApp().getFirmwareUpdateProcessBT().postValue(new UpdateProgressModel(FIrmWareUpdateProcess.FILE_INSTALL_FINISH, "", ""));
                    c20912.L$0 = r31;
                    c20912.label = 29;
                    objBleWriteDownloadCommand$default18 = r31.bleWriteDownloadCommand(str2112, PathInterpolatorCompat.MAX_NUM_POINTS, true, c20912);
                    if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                        r32 = r31;
                        return coroutine_suspended;
                    }
                    r32 = r31;
                    if (((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                        str3 = str4;
                        Log.d(str3, "recovery update return flashBLEFile()");
                        CustomLog.INSTANCE.writeFile("recovery update return flashBLEFile()", r32.context);
                        if (r32.getSharePref().isBluetoothConnected()) {
                            c20912.L$0 = r32;
                            c20912.label = 30;
                            objFlashBLEFile = r32.flashBLEFile(c20912);
                            if (objFlashBLEFile == coroutine_suspended) {
                                r33 = r32;
                                return coroutine_suspended;
                            }
                            r33 = r32;
                            if (!((Boolean) objFlashBLEFile).booleanValue()) {
                                r33.getSharePref().setFwFlashing(z);
                                Log.d(str3, "isFwFlashing = false");
                            }
                            return Boxing.boxBoolean(true);
                        }
                        return Boxing.boxBoolean(true);
                    }
                    Log.d(str4, "recovery update return truue");
                    return Boxing.boxBoolean(true);
                    r12.send_data_piece = z ? 1 : 0;
                    r12.firmware_1_interval_size = z ? 1 : 0;
                    r12.getSharePref().setFwDownloadComplete(z);
                    r12.getSharePref().setFwFlashing(z);
                    String str2113 = BluetoothUtils.INSTANCE.getFD_END_COM() + ":0";
                    c20912.L$0 = exc;
                    c20912.L$1 = obj;
                    c20912.label = 31;
                    objBleWriteDownloadCommand$default18 = bleWriteDownloadCommand$default(r12, str2113, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    exc.printStackTrace();
                    return Boxing.boxBoolean(z);
                case 3:
                    FirmWareUpdateWorker firmWareUpdateWorker3 = (FirmWareUpdateWorker) c20912.L$0;
                    ResultKt.throwOnFailure(objBleWriteDownloadCommand$default18);
                    str5 = "%08X";
                    z = false;
                    obj = null;
                    str4 = "TAG_FW";
                    coroutine_suspended = coroutine_suspended;
                    c20912 = c20912;
                    str = "format(...)";
                    c = ':';
                    r3 = firmWareUpdateWorker3;
                    r3 = r2;
                    StringBuilder sbAppend216 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_UI_END()).append(c);
                    StringCompanionObject stringCompanionObject216 = StringCompanionObject.INSTANCE;
                    Object[] objArr216 = new Object[1];
                    objArr216[z ? 1 : 0] = Boxing.boxInt(r3.ui_file_checksum);
                    String str34 = String.format(str5, Arrays.copyOf(objArr216, 1));
                    Intrinsics.checkNotNullExpressionValue(str34, str);
                    String string214 = sbAppend216.append(str34).toString();
                    c20912.L$0 = r3;
                    c20912.label = 4;
                    objBleWriteDownloadCommand$default2 = bleWriteDownloadCommand$default(r3, string214, 4000, false, c20912, 4, null);
                    r4 = r3;
                    if (objBleWriteDownloadCommand$default2 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default2).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    StringBuilder sbAppend217 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_DSP_START()).append(c).append(r4.dsp_file_ver).append(',');
                    StringCompanionObject stringCompanionObject217 = StringCompanionObject.INSTANCE;
                    Object[] objArr217 = new Object[1];
                    objArr217[z ? 1 : 0] = Boxing.boxInt(r4.dsp_file_size);
                    String str35 = String.format(str5, Arrays.copyOf(objArr217, 1));
                    Intrinsics.checkNotNullExpressionValue(str35, str);
                    String string215 = sbAppend217.append(str35).toString();
                    c20912.L$0 = r4;
                    c20912.label = 5;
                    objBleWriteDownloadCommand$default3 = bleWriteDownloadCommand$default(r4, string215, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default3 == coroutine_suspended) {
                        r5 = r4;
                        return coroutine_suspended;
                    }
                    r5 = r4;
                    if (!((Boolean) objBleWriteDownloadCommand$default3).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file2 = r5.file;
                    i4 = r5.dsp_file_offset;
                    i5 = r5.dsp_file_size;
                    c20912.L$0 = r5;
                    c20912.label = 6;
                    if (r5.writeFileData(file2, i4, i5, c20912) == coroutine_suspended) {
                        r6 = r5;
                        return coroutine_suspended;
                    }
                    r6 = r5;
                    StringBuilder sbAppend218 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_DSP_END()).append(c);
                    StringCompanionObject stringCompanionObject218 = StringCompanionObject.INSTANCE;
                    Object[] objArr218 = new Object[1];
                    objArr218[z ? 1 : 0] = Boxing.boxInt(r6.dsp_file_checksum);
                    String str11110 = String.format(str5, Arrays.copyOf(objArr218, 1));
                    Intrinsics.checkNotNullExpressionValue(str11110, str);
                    string = sbAppend218.append(str11110).toString();
                    c20912.L$0 = r6;
                    c20912.L$1 = string;
                    c20912.label = 7;
                    objBleWriteDownloadCommand$default4 = bleWriteDownloadCommand$default(r6, string, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default4 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    r15 = r6;
                    str2 = string;
                    if (((Boolean) objBleWriteDownloadCommand$default4).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    Log.e("DSP_COMMAND", str2);
                    StringBuilder sbAppend219 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_GPS_START()).append(c).append(r15.gps_file_ver).append(',');
                    StringCompanionObject stringCompanionObject219 = StringCompanionObject.INSTANCE;
                    Object[] objArr219 = new Object[1];
                    objArr219[z ? 1 : 0] = Boxing.boxInt(r15.gps_file_size);
                    String str11111 = String.format(str5, Arrays.copyOf(objArr219, 1));
                    Intrinsics.checkNotNullExpressionValue(str11111, str);
                    String string216 = sbAppend219.append(str11111).toString();
                    c20912.L$0 = r15;
                    c20912.L$1 = obj;
                    c20912.label = 8;
                    r7 = r15;
                    objBleWriteDownloadCommand$default5 = bleWriteDownloadCommand$default(r15, string216, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default5 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default5).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file3 = r7.file;
                    i6 = r7.gps_file_offset;
                    i7 = r7.gps_file_size;
                    c20912.L$0 = r7;
                    c20912.label = 9;
                    if (r7.writeFileData(file3, i6, i7, c20912) == coroutine_suspended) {
                        r8 = r7;
                        return coroutine_suspended;
                    }
                    r8 = r7;
                    StringBuilder sbAppend2110 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_GPS_END()).append(c);
                    StringCompanionObject stringCompanionObject2110 = StringCompanionObject.INSTANCE;
                    Object[] objArr2110 = new Object[1];
                    objArr2110[z ? 1 : 0] = Boxing.boxInt(r8.gps_file_checksum);
                    String str11112 = String.format(str5, Arrays.copyOf(objArr2110, 1));
                    Intrinsics.checkNotNullExpressionValue(str11112, str);
                    String string217 = sbAppend2110.append(str11112).toString();
                    c20912.L$0 = r8;
                    c20912.label = 10;
                    objBleWriteDownloadCommand$default6 = bleWriteDownloadCommand$default(r8, string217, 4000, false, c20912, 4, null);
                    r9 = r8;
                    if (objBleWriteDownloadCommand$default6 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default6).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    StringBuilder sbAppend2111 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_SOUND_DB_START()).append(c).append(r9.sound_db_file_ver).append(',');
                    StringCompanionObject stringCompanionObject2111 = StringCompanionObject.INSTANCE;
                    Object[] objArr2111 = new Object[1];
                    objArr2111[z ? 1 : 0] = Boxing.boxInt(r9.sound_db_file_size);
                    String str11113 = String.format(str5, Arrays.copyOf(objArr2111, 1));
                    Intrinsics.checkNotNullExpressionValue(str11113, str);
                    String string218 = sbAppend2111.append(str11113).toString();
                    c20912.L$0 = r9;
                    c20912.label = 11;
                    objBleWriteDownloadCommand$default7 = bleWriteDownloadCommand$default(r9, string218, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default7 == coroutine_suspended) {
                        r10 = r9;
                        return coroutine_suspended;
                    }
                    r10 = r9;
                    if (!((Boolean) objBleWriteDownloadCommand$default7).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file4 = r10.file;
                    i8 = r10.sound_db_file_offset;
                    i9 = r10.sound_db_file_size;
                    c20912.L$0 = r10;
                    c20912.label = 12;
                    if (r10.writeFileData(file4, i8, i9, c20912) == coroutine_suspended) {
                        r13 = r10;
                        return coroutine_suspended;
                    }
                    r13 = r10;
                    StringBuilder sbAppend2112 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_SOUND_DB_END()).append(c);
                    StringCompanionObject stringCompanionObject2112 = StringCompanionObject.INSTANCE;
                    Object[] objArr2112 = new Object[1];
                    objArr2112[z ? 1 : 0] = Boxing.boxInt(r13.sound_db_file_checksum);
                    String str11114 = String.format(str5, Arrays.copyOf(objArr2112, 1));
                    Intrinsics.checkNotNullExpressionValue(str11114, str);
                    String string219 = sbAppend2112.append(str11114).toString();
                    c20912.L$0 = r13;
                    c20912.label = 13;
                    objBleWriteDownloadCommand$default8 = bleWriteDownloadCommand$default(r13, string219, 4000, false, c20912, 4, null);
                    r14 = r13;
                    if (objBleWriteDownloadCommand$default8 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default8).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    StringBuilder sbAppend2113 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_GPS_DB_START()).append(c).append(r14.gps_db_file_ver).append(',');
                    StringCompanionObject stringCompanionObject2113 = StringCompanionObject.INSTANCE;
                    Object[] objArr2113 = new Object[1];
                    objArr2113[z ? 1 : 0] = Boxing.boxInt(r14.gps_db_file_size);
                    String str11115 = String.format(str5, Arrays.copyOf(objArr2113, 1));
                    Intrinsics.checkNotNullExpressionValue(str11115, str);
                    String string2110 = sbAppend2113.append(str11115).toString();
                    c20912.L$0 = r14;
                    c20912.label = 14;
                    objBleWriteDownloadCommand$default9 = bleWriteDownloadCommand$default(r14, string2110, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default9 == coroutine_suspended) {
                        r16 = r14;
                        return coroutine_suspended;
                    }
                    r16 = r14;
                    if (!((Boolean) objBleWriteDownloadCommand$default9).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file5 = r16.file;
                    i10 = r16.gps_db_file_offset;
                    i11 = r16.gps_db_file_size;
                    c20912.L$0 = r16;
                    c20912.label = 15;
                    if (r16.writeFileData(file5, i10, i11, c20912) == coroutine_suspended) {
                        r17 = r16;
                        return coroutine_suspended;
                    }
                    r17 = r16;
                    StringBuilder sbAppend1118 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_GPS_DB_END()).append(c);
                    StringCompanionObject stringCompanionObject1118 = StringCompanionObject.INSTANCE;
                    Object[] objArr1118 = new Object[1];
                    objArr1118[z ? 1 : 0] = Boxing.boxInt(r17.gps_db_file_checksum);
                    String str11116 = String.format(str5, Arrays.copyOf(objArr1118, 1));
                    Intrinsics.checkNotNullExpressionValue(str11116, str);
                    String string1118 = sbAppend1118.append(str11116).toString();
                    c20912.L$0 = r17;
                    c20912.label = 16;
                    objBleWriteDownloadCommand$default10 = bleWriteDownloadCommand$default(r17, string1118, 4000, false, c20912, 4, null);
                    r18 = r17;
                    if (objBleWriteDownloadCommand$default10 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default10).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    StringBuilder sbAppend1119 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE1_START()).append(c).append(r18.if1_file_ver).append(',');
                    StringCompanionObject stringCompanionObject1119 = StringCompanionObject.INSTANCE;
                    Object[] objArr1119 = new Object[1];
                    objArr1119[z ? 1 : 0] = Boxing.boxInt(r18.if1_file_size);
                    String str11117 = String.format(str5, Arrays.copyOf(objArr1119, 1));
                    Intrinsics.checkNotNullExpressionValue(str11117, str);
                    String string1119 = sbAppend1119.append(str11117).toString();
                    c20912.L$0 = r18;
                    c20912.label = 17;
                    objBleWriteDownloadCommand$default11 = bleWriteDownloadCommand$default(r18, string1119, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default11 == coroutine_suspended) {
                        r19 = r18;
                        return coroutine_suspended;
                    }
                    r19 = r18;
                    if (!((Boolean) objBleWriteDownloadCommand$default11).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file6 = r19.file;
                    i12 = r19.if1_file_offset;
                    i13 = r19.if1_file_size;
                    c20912.L$0 = r19;
                    c20912.label = 18;
                    if (r19.writeFileData(file6, i12, i13, c20912) == coroutine_suspended) {
                        r20 = r19;
                        return coroutine_suspended;
                    }
                    r20 = r19;
                    StringBuilder sbAppend11110 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE1_END()).append(c);
                    StringCompanionObject stringCompanionObject11110 = StringCompanionObject.INSTANCE;
                    Object[] objArr11110 = new Object[1];
                    objArr11110[z ? 1 : 0] = Boxing.boxInt(r20.if1_file_checksum);
                    String str11118 = String.format(str5, Arrays.copyOf(objArr11110, 1));
                    Intrinsics.checkNotNullExpressionValue(str11118, str);
                    String string11110 = sbAppend11110.append(str11118).toString();
                    c20912.L$0 = r20;
                    c20912.label = 19;
                    objBleWriteDownloadCommand$default12 = bleWriteDownloadCommand$default(r20, string11110, 4000, false, c20912, 4, null);
                    r21 = r20;
                    if (objBleWriteDownloadCommand$default12 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default12).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    StringBuilder sbAppend11111 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE2_START()).append(c).append(r21.if2_file_ver).append(',');
                    StringCompanionObject stringCompanionObject11111 = StringCompanionObject.INSTANCE;
                    Object[] objArr11111 = new Object[1];
                    objArr11111[z ? 1 : 0] = Boxing.boxInt(r21.if2_file_size);
                    String str11119 = String.format(str5, Arrays.copyOf(objArr11111, 1));
                    Intrinsics.checkNotNullExpressionValue(str11119, str);
                    String string11111 = sbAppend11111.append(str11119).toString();
                    c20912.L$0 = r21;
                    c20912.label = 20;
                    objBleWriteDownloadCommand$default13 = bleWriteDownloadCommand$default(r21, string11111, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default13 == coroutine_suspended) {
                        r22 = r21;
                        return coroutine_suspended;
                    }
                    r22 = r21;
                    if (!((Boolean) objBleWriteDownloadCommand$default13).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file7 = r22.file;
                    i14 = r22.if2_file_offset;
                    i15 = r22.if2_file_size;
                    c20912.L$0 = r22;
                    c20912.label = 21;
                    if (r22.writeFileData(file7, i14, i15, c20912) == coroutine_suspended) {
                        r23 = r22;
                        return coroutine_suspended;
                    }
                    r23 = r22;
                    StringBuilder sbAppend11112 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE2_END()).append(c);
                    StringCompanionObject stringCompanionObject11112 = StringCompanionObject.INSTANCE;
                    Object[] objArr11112 = new Object[1];
                    objArr11112[z ? 1 : 0] = Boxing.boxInt(r23.if2_file_checksum);
                    String str2114 = String.format(str5, Arrays.copyOf(objArr11112, 1));
                    Intrinsics.checkNotNullExpressionValue(str2114, str);
                    String string11112 = sbAppend11112.append(str2114).toString();
                    c20912.L$0 = r23;
                    c20912.label = 22;
                    objBleWriteDownloadCommand$default14 = bleWriteDownloadCommand$default(r23, string11112, 4000, false, c20912, 4, null);
                    r24 = r23;
                    if (objBleWriteDownloadCommand$default14 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default14).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    if (!StringsKt.contains$default(r24.getSharePref().getDeviceName(), "R9", z, 2, obj)) {
                        break;
                    }
                    r27 = r24;
                    StringBuilder sbAppend11113 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE3_START()).append(c).append(r24.if3_file_ver).append(',');
                    StringCompanionObject stringCompanionObject11113 = StringCompanionObject.INSTANCE;
                    Object[] objArr11113 = new Object[1];
                    objArr11113[z ? 1 : 0] = Boxing.boxInt(r24.if3_file_size);
                    String str2115 = String.format(str5, Arrays.copyOf(objArr11113, 1));
                    Intrinsics.checkNotNullExpressionValue(str2115, str);
                    String string11113 = sbAppend11113.append(str2115).toString();
                    c20912.L$0 = r24;
                    c20912.label = 23;
                    objBleWriteDownloadCommand$default15 = bleWriteDownloadCommand$default(r24, string11113, 4000, false, c20912, 4, null);
                    r25 = r24;
                    if (objBleWriteDownloadCommand$default15 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default15).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file8 = r25.file;
                    i16 = r25.if3_file_offset;
                    i17 = r25.if3_file_size;
                    c20912.L$0 = r25;
                    c20912.label = 24;
                    if (r25.writeFileData(file8, i16, i17, c20912) == coroutine_suspended) {
                        r26 = r25;
                        return coroutine_suspended;
                    }
                    r26 = r25;
                    StringBuilder sbAppend11114 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE3_END()).append(c);
                    StringCompanionObject stringCompanionObject11114 = StringCompanionObject.INSTANCE;
                    Object[] objArr11114 = new Object[1];
                    objArr11114[z ? 1 : 0] = Boxing.boxInt(r26.if3_file_checksum);
                    String str2116 = String.format(str5, Arrays.copyOf(objArr11114, 1));
                    Intrinsics.checkNotNullExpressionValue(str2116, str);
                    String string11114 = sbAppend11114.append(str2116).toString();
                    c20912.L$0 = r26;
                    c20912.label = 25;
                    objBleWriteDownloadCommand$default16 = bleWriteDownloadCommand$default(r26, string11114, 4000, false, c20912, 4, null);
                    r28 = r26;
                    if (objBleWriteDownloadCommand$default16 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    r27 = r28;
                    if (!((Boolean) objBleWriteDownloadCommand$default16).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    r27 = r24;
                    StringBuilder sbAppend11115 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_BLE_START()).append(c).append(r27.ble_file_ver).append(',');
                    StringCompanionObject stringCompanionObject11115 = StringCompanionObject.INSTANCE;
                    Object[] objArr11115 = new Object[1];
                    objArr11115[z ? 1 : 0] = Boxing.boxInt(r27.ble_file_size);
                    String str2117 = String.format(str5, Arrays.copyOf(objArr11115, 1));
                    Intrinsics.checkNotNullExpressionValue(str2117, str);
                    String string11115 = sbAppend11115.append(str2117).toString();
                    c20912.L$0 = r27;
                    c20912.label = 26;
                    objBleWriteDownloadCommand$default17 = bleWriteDownloadCommand$default(r27, string11115, 4000, false, c20912, 4, null);
                    r29 = r27;
                    if (objBleWriteDownloadCommand$default17 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default17).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file9 = r29.file;
                    i18 = r29.ble_file_offset;
                    i19 = r29.ble_file_size;
                    c20912.L$0 = r29;
                    c20912.label = 27;
                    if (r29.writeFileData(file9, i18, i19, c20912) == coroutine_suspended) {
                        r30 = r29;
                        return coroutine_suspended;
                    }
                    r30 = r29;
                    StringBuilder sbAppend11116 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_BLE_END()).append(c);
                    StringCompanionObject stringCompanionObject11116 = StringCompanionObject.INSTANCE;
                    Object[] objArr11116 = new Object[1];
                    objArr11116[z ? 1 : 0] = Boxing.boxInt(r30.ble_file_checksum);
                    String str2118 = String.format(str5, Arrays.copyOf(objArr11116, 1));
                    Intrinsics.checkNotNullExpressionValue(str2118, str);
                    String string11116 = sbAppend11116.append(str2118).toString();
                    c20912.L$0 = r30;
                    c20912.label = 28;
                    objBleWriteDownloadCommand$default18 = bleWriteDownloadCommand$default(r30, string11116, 4000, false, c20912, 4, null);
                    r31 = r30;
                    if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    String str2119 = BluetoothUtils.INSTANCE.getFD_END_COM() + ":1";
                    r31.getSharePref().setFwDownloadComplete(true);
                    r31.getSharePref().setFwFlashing(z);
                    r31.getMyApp().getFirmwareUpdateProcessBT().postValue(new UpdateProgressModel(FIrmWareUpdateProcess.FILE_INSTALL_FINISH, "", ""));
                    c20912.L$0 = r31;
                    c20912.label = 29;
                    objBleWriteDownloadCommand$default18 = r31.bleWriteDownloadCommand(str2119, PathInterpolatorCompat.MAX_NUM_POINTS, true, c20912);
                    if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                        r32 = r31;
                        return coroutine_suspended;
                    }
                    r32 = r31;
                    if (((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                        str3 = str4;
                        Log.d(str3, "recovery update return flashBLEFile()");
                        CustomLog.INSTANCE.writeFile("recovery update return flashBLEFile()", r32.context);
                        if (r32.getSharePref().isBluetoothConnected()) {
                            c20912.L$0 = r32;
                            c20912.label = 30;
                            objFlashBLEFile = r32.flashBLEFile(c20912);
                            if (objFlashBLEFile == coroutine_suspended) {
                                r33 = r32;
                                return coroutine_suspended;
                            }
                            r33 = r32;
                            if (!((Boolean) objFlashBLEFile).booleanValue()) {
                                r33.getSharePref().setFwFlashing(z);
                                Log.d(str3, "isFwFlashing = false");
                            }
                            return Boxing.boxBoolean(true);
                        }
                        return Boxing.boxBoolean(true);
                    }
                    Log.d(str4, "recovery update return truue");
                    return Boxing.boxBoolean(true);
                    r12.send_data_piece = z ? 1 : 0;
                    r12.firmware_1_interval_size = z ? 1 : 0;
                    r12.getSharePref().setFwDownloadComplete(z);
                    r12.getSharePref().setFwFlashing(z);
                    String str21110 = BluetoothUtils.INSTANCE.getFD_END_COM() + ":0";
                    c20912.L$0 = exc;
                    c20912.L$1 = obj;
                    c20912.label = 31;
                    objBleWriteDownloadCommand$default18 = bleWriteDownloadCommand$default(r12, str21110, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    exc.printStackTrace();
                    return Boxing.boxBoolean(z);
                case 4:
                    FirmWareUpdateWorker firmWareUpdateWorker4 = (FirmWareUpdateWorker) c20912.L$0;
                    ResultKt.throwOnFailure(objBleWriteDownloadCommand$default18);
                    z = false;
                    obj = null;
                    str4 = "TAG_FW";
                    coroutine_suspended = coroutine_suspended;
                    c20912 = c20912;
                    c = ':';
                    objBleWriteDownloadCommand$default2 = objBleWriteDownloadCommand$default18;
                    str5 = "%08X";
                    str = "format(...)";
                    r4 = firmWareUpdateWorker4;
                    if (!((Boolean) objBleWriteDownloadCommand$default2).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    StringBuilder sbAppend2114 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_DSP_START()).append(c).append(r4.dsp_file_ver).append(',');
                    StringCompanionObject stringCompanionObject2114 = StringCompanionObject.INSTANCE;
                    Object[] objArr2114 = new Object[1];
                    objArr2114[z ? 1 : 0] = Boxing.boxInt(r4.dsp_file_size);
                    String str36 = String.format(str5, Arrays.copyOf(objArr2114, 1));
                    Intrinsics.checkNotNullExpressionValue(str36, str);
                    String string2111 = sbAppend2114.append(str36).toString();
                    c20912.L$0 = r4;
                    c20912.label = 5;
                    objBleWriteDownloadCommand$default3 = bleWriteDownloadCommand$default(r4, string2111, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default3 == coroutine_suspended) {
                        r5 = r4;
                        return coroutine_suspended;
                    }
                    r5 = r4;
                    if (!((Boolean) objBleWriteDownloadCommand$default3).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file2 = r5.file;
                    i4 = r5.dsp_file_offset;
                    i5 = r5.dsp_file_size;
                    c20912.L$0 = r5;
                    c20912.label = 6;
                    if (r5.writeFileData(file2, i4, i5, c20912) == coroutine_suspended) {
                        r6 = r5;
                        return coroutine_suspended;
                    }
                    r6 = r5;
                    StringBuilder sbAppend2115 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_DSP_END()).append(c);
                    StringCompanionObject stringCompanionObject2115 = StringCompanionObject.INSTANCE;
                    Object[] objArr2115 = new Object[1];
                    objArr2115[z ? 1 : 0] = Boxing.boxInt(r6.dsp_file_checksum);
                    String str111110 = String.format(str5, Arrays.copyOf(objArr2115, 1));
                    Intrinsics.checkNotNullExpressionValue(str111110, str);
                    string = sbAppend2115.append(str111110).toString();
                    c20912.L$0 = r6;
                    c20912.L$1 = string;
                    c20912.label = 7;
                    objBleWriteDownloadCommand$default4 = bleWriteDownloadCommand$default(r6, string, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default4 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    r15 = r6;
                    str2 = string;
                    if (((Boolean) objBleWriteDownloadCommand$default4).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    Log.e("DSP_COMMAND", str2);
                    StringBuilder sbAppend2116 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_GPS_START()).append(c).append(r15.gps_file_ver).append(',');
                    StringCompanionObject stringCompanionObject2116 = StringCompanionObject.INSTANCE;
                    Object[] objArr2116 = new Object[1];
                    objArr2116[z ? 1 : 0] = Boxing.boxInt(r15.gps_file_size);
                    String str111111 = String.format(str5, Arrays.copyOf(objArr2116, 1));
                    Intrinsics.checkNotNullExpressionValue(str111111, str);
                    String string2112 = sbAppend2116.append(str111111).toString();
                    c20912.L$0 = r15;
                    c20912.L$1 = obj;
                    c20912.label = 8;
                    r7 = r15;
                    objBleWriteDownloadCommand$default5 = bleWriteDownloadCommand$default(r15, string2112, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default5 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default5).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file3 = r7.file;
                    i6 = r7.gps_file_offset;
                    i7 = r7.gps_file_size;
                    c20912.L$0 = r7;
                    c20912.label = 9;
                    if (r7.writeFileData(file3, i6, i7, c20912) == coroutine_suspended) {
                        r8 = r7;
                        return coroutine_suspended;
                    }
                    r8 = r7;
                    StringBuilder sbAppend2117 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_GPS_END()).append(c);
                    StringCompanionObject stringCompanionObject2117 = StringCompanionObject.INSTANCE;
                    Object[] objArr2117 = new Object[1];
                    objArr2117[z ? 1 : 0] = Boxing.boxInt(r8.gps_file_checksum);
                    String str111112 = String.format(str5, Arrays.copyOf(objArr2117, 1));
                    Intrinsics.checkNotNullExpressionValue(str111112, str);
                    String string2113 = sbAppend2117.append(str111112).toString();
                    c20912.L$0 = r8;
                    c20912.label = 10;
                    objBleWriteDownloadCommand$default6 = bleWriteDownloadCommand$default(r8, string2113, 4000, false, c20912, 4, null);
                    r9 = r8;
                    if (objBleWriteDownloadCommand$default6 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default6).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    StringBuilder sbAppend2118 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_SOUND_DB_START()).append(c).append(r9.sound_db_file_ver).append(',');
                    StringCompanionObject stringCompanionObject2118 = StringCompanionObject.INSTANCE;
                    Object[] objArr2118 = new Object[1];
                    objArr2118[z ? 1 : 0] = Boxing.boxInt(r9.sound_db_file_size);
                    String str111113 = String.format(str5, Arrays.copyOf(objArr2118, 1));
                    Intrinsics.checkNotNullExpressionValue(str111113, str);
                    String string2114 = sbAppend2118.append(str111113).toString();
                    c20912.L$0 = r9;
                    c20912.label = 11;
                    objBleWriteDownloadCommand$default7 = bleWriteDownloadCommand$default(r9, string2114, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default7 == coroutine_suspended) {
                        r10 = r9;
                        return coroutine_suspended;
                    }
                    r10 = r9;
                    if (!((Boolean) objBleWriteDownloadCommand$default7).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file4 = r10.file;
                    i8 = r10.sound_db_file_offset;
                    i9 = r10.sound_db_file_size;
                    c20912.L$0 = r10;
                    c20912.label = 12;
                    if (r10.writeFileData(file4, i8, i9, c20912) == coroutine_suspended) {
                        r13 = r10;
                        return coroutine_suspended;
                    }
                    r13 = r10;
                    StringBuilder sbAppend2119 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_SOUND_DB_END()).append(c);
                    StringCompanionObject stringCompanionObject2119 = StringCompanionObject.INSTANCE;
                    Object[] objArr2119 = new Object[1];
                    objArr2119[z ? 1 : 0] = Boxing.boxInt(r13.sound_db_file_checksum);
                    String str111114 = String.format(str5, Arrays.copyOf(objArr2119, 1));
                    Intrinsics.checkNotNullExpressionValue(str111114, str);
                    String string2115 = sbAppend2119.append(str111114).toString();
                    c20912.L$0 = r13;
                    c20912.label = 13;
                    objBleWriteDownloadCommand$default8 = bleWriteDownloadCommand$default(r13, string2115, 4000, false, c20912, 4, null);
                    r14 = r13;
                    if (objBleWriteDownloadCommand$default8 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default8).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    StringBuilder sbAppend21110 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_GPS_DB_START()).append(c).append(r14.gps_db_file_ver).append(',');
                    StringCompanionObject stringCompanionObject21110 = StringCompanionObject.INSTANCE;
                    Object[] objArr21110 = new Object[1];
                    objArr21110[z ? 1 : 0] = Boxing.boxInt(r14.gps_db_file_size);
                    String str111115 = String.format(str5, Arrays.copyOf(objArr21110, 1));
                    Intrinsics.checkNotNullExpressionValue(str111115, str);
                    String string2116 = sbAppend21110.append(str111115).toString();
                    c20912.L$0 = r14;
                    c20912.label = 14;
                    objBleWriteDownloadCommand$default9 = bleWriteDownloadCommand$default(r14, string2116, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default9 == coroutine_suspended) {
                        r16 = r14;
                        return coroutine_suspended;
                    }
                    r16 = r14;
                    if (!((Boolean) objBleWriteDownloadCommand$default9).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file5 = r16.file;
                    i10 = r16.gps_db_file_offset;
                    i11 = r16.gps_db_file_size;
                    c20912.L$0 = r16;
                    c20912.label = 15;
                    if (r16.writeFileData(file5, i10, i11, c20912) == coroutine_suspended) {
                        r17 = r16;
                        return coroutine_suspended;
                    }
                    r17 = r16;
                    StringBuilder sbAppend11117 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_GPS_DB_END()).append(c);
                    StringCompanionObject stringCompanionObject11117 = StringCompanionObject.INSTANCE;
                    Object[] objArr11117 = new Object[1];
                    objArr11117[z ? 1 : 0] = Boxing.boxInt(r17.gps_db_file_checksum);
                    String str111116 = String.format(str5, Arrays.copyOf(objArr11117, 1));
                    Intrinsics.checkNotNullExpressionValue(str111116, str);
                    String string11117 = sbAppend11117.append(str111116).toString();
                    c20912.L$0 = r17;
                    c20912.label = 16;
                    objBleWriteDownloadCommand$default10 = bleWriteDownloadCommand$default(r17, string11117, 4000, false, c20912, 4, null);
                    r18 = r17;
                    if (objBleWriteDownloadCommand$default10 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default10).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    StringBuilder sbAppend11118 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE1_START()).append(c).append(r18.if1_file_ver).append(',');
                    StringCompanionObject stringCompanionObject11118 = StringCompanionObject.INSTANCE;
                    Object[] objArr11118 = new Object[1];
                    objArr11118[z ? 1 : 0] = Boxing.boxInt(r18.if1_file_size);
                    String str111117 = String.format(str5, Arrays.copyOf(objArr11118, 1));
                    Intrinsics.checkNotNullExpressionValue(str111117, str);
                    String string11118 = sbAppend11118.append(str111117).toString();
                    c20912.L$0 = r18;
                    c20912.label = 17;
                    objBleWriteDownloadCommand$default11 = bleWriteDownloadCommand$default(r18, string11118, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default11 == coroutine_suspended) {
                        r19 = r18;
                        return coroutine_suspended;
                    }
                    r19 = r18;
                    if (!((Boolean) objBleWriteDownloadCommand$default11).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file6 = r19.file;
                    i12 = r19.if1_file_offset;
                    i13 = r19.if1_file_size;
                    c20912.L$0 = r19;
                    c20912.label = 18;
                    if (r19.writeFileData(file6, i12, i13, c20912) == coroutine_suspended) {
                        r20 = r19;
                        return coroutine_suspended;
                    }
                    r20 = r19;
                    StringBuilder sbAppend11119 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE1_END()).append(c);
                    StringCompanionObject stringCompanionObject11119 = StringCompanionObject.INSTANCE;
                    Object[] objArr11119 = new Object[1];
                    objArr11119[z ? 1 : 0] = Boxing.boxInt(r20.if1_file_checksum);
                    String str111118 = String.format(str5, Arrays.copyOf(objArr11119, 1));
                    Intrinsics.checkNotNullExpressionValue(str111118, str);
                    String string11119 = sbAppend11119.append(str111118).toString();
                    c20912.L$0 = r20;
                    c20912.label = 19;
                    objBleWriteDownloadCommand$default12 = bleWriteDownloadCommand$default(r20, string11119, 4000, false, c20912, 4, null);
                    r21 = r20;
                    if (objBleWriteDownloadCommand$default12 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default12).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    StringBuilder sbAppend111110 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE2_START()).append(c).append(r21.if2_file_ver).append(',');
                    StringCompanionObject stringCompanionObject111110 = StringCompanionObject.INSTANCE;
                    Object[] objArr111110 = new Object[1];
                    objArr111110[z ? 1 : 0] = Boxing.boxInt(r21.if2_file_size);
                    String str111119 = String.format(str5, Arrays.copyOf(objArr111110, 1));
                    Intrinsics.checkNotNullExpressionValue(str111119, str);
                    String string111110 = sbAppend111110.append(str111119).toString();
                    c20912.L$0 = r21;
                    c20912.label = 20;
                    objBleWriteDownloadCommand$default13 = bleWriteDownloadCommand$default(r21, string111110, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default13 == coroutine_suspended) {
                        r22 = r21;
                        return coroutine_suspended;
                    }
                    r22 = r21;
                    if (!((Boolean) objBleWriteDownloadCommand$default13).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file7 = r22.file;
                    i14 = r22.if2_file_offset;
                    i15 = r22.if2_file_size;
                    c20912.L$0 = r22;
                    c20912.label = 21;
                    if (r22.writeFileData(file7, i14, i15, c20912) == coroutine_suspended) {
                        r23 = r22;
                        return coroutine_suspended;
                    }
                    r23 = r22;
                    StringBuilder sbAppend111111 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE2_END()).append(c);
                    StringCompanionObject stringCompanionObject111111 = StringCompanionObject.INSTANCE;
                    Object[] objArr111111 = new Object[1];
                    objArr111111[z ? 1 : 0] = Boxing.boxInt(r23.if2_file_checksum);
                    String str21111 = String.format(str5, Arrays.copyOf(objArr111111, 1));
                    Intrinsics.checkNotNullExpressionValue(str21111, str);
                    String string111111 = sbAppend111111.append(str21111).toString();
                    c20912.L$0 = r23;
                    c20912.label = 22;
                    objBleWriteDownloadCommand$default14 = bleWriteDownloadCommand$default(r23, string111111, 4000, false, c20912, 4, null);
                    r24 = r23;
                    if (objBleWriteDownloadCommand$default14 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default14).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    if (!StringsKt.contains$default(r24.getSharePref().getDeviceName(), "R9", z, 2, obj)) {
                        break;
                    }
                    r27 = r24;
                    StringBuilder sbAppend111112 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE3_START()).append(c).append(r24.if3_file_ver).append(',');
                    StringCompanionObject stringCompanionObject111112 = StringCompanionObject.INSTANCE;
                    Object[] objArr111112 = new Object[1];
                    objArr111112[z ? 1 : 0] = Boxing.boxInt(r24.if3_file_size);
                    String str21112 = String.format(str5, Arrays.copyOf(objArr111112, 1));
                    Intrinsics.checkNotNullExpressionValue(str21112, str);
                    String string111112 = sbAppend111112.append(str21112).toString();
                    c20912.L$0 = r24;
                    c20912.label = 23;
                    objBleWriteDownloadCommand$default15 = bleWriteDownloadCommand$default(r24, string111112, 4000, false, c20912, 4, null);
                    r25 = r24;
                    if (objBleWriteDownloadCommand$default15 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default15).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file8 = r25.file;
                    i16 = r25.if3_file_offset;
                    i17 = r25.if3_file_size;
                    c20912.L$0 = r25;
                    c20912.label = 24;
                    if (r25.writeFileData(file8, i16, i17, c20912) == coroutine_suspended) {
                        r26 = r25;
                        return coroutine_suspended;
                    }
                    r26 = r25;
                    StringBuilder sbAppend111113 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE3_END()).append(c);
                    StringCompanionObject stringCompanionObject111113 = StringCompanionObject.INSTANCE;
                    Object[] objArr111113 = new Object[1];
                    objArr111113[z ? 1 : 0] = Boxing.boxInt(r26.if3_file_checksum);
                    String str21113 = String.format(str5, Arrays.copyOf(objArr111113, 1));
                    Intrinsics.checkNotNullExpressionValue(str21113, str);
                    String string111113 = sbAppend111113.append(str21113).toString();
                    c20912.L$0 = r26;
                    c20912.label = 25;
                    objBleWriteDownloadCommand$default16 = bleWriteDownloadCommand$default(r26, string111113, 4000, false, c20912, 4, null);
                    r28 = r26;
                    if (objBleWriteDownloadCommand$default16 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    r27 = r28;
                    if (!((Boolean) objBleWriteDownloadCommand$default16).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    r27 = r24;
                    StringBuilder sbAppend111114 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_BLE_START()).append(c).append(r27.ble_file_ver).append(',');
                    StringCompanionObject stringCompanionObject111114 = StringCompanionObject.INSTANCE;
                    Object[] objArr111114 = new Object[1];
                    objArr111114[z ? 1 : 0] = Boxing.boxInt(r27.ble_file_size);
                    String str21114 = String.format(str5, Arrays.copyOf(objArr111114, 1));
                    Intrinsics.checkNotNullExpressionValue(str21114, str);
                    String string111114 = sbAppend111114.append(str21114).toString();
                    c20912.L$0 = r27;
                    c20912.label = 26;
                    objBleWriteDownloadCommand$default17 = bleWriteDownloadCommand$default(r27, string111114, 4000, false, c20912, 4, null);
                    r29 = r27;
                    if (objBleWriteDownloadCommand$default17 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default17).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file9 = r29.file;
                    i18 = r29.ble_file_offset;
                    i19 = r29.ble_file_size;
                    c20912.L$0 = r29;
                    c20912.label = 27;
                    if (r29.writeFileData(file9, i18, i19, c20912) == coroutine_suspended) {
                        r30 = r29;
                        return coroutine_suspended;
                    }
                    r30 = r29;
                    StringBuilder sbAppend111115 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_BLE_END()).append(c);
                    StringCompanionObject stringCompanionObject111115 = StringCompanionObject.INSTANCE;
                    Object[] objArr111115 = new Object[1];
                    objArr111115[z ? 1 : 0] = Boxing.boxInt(r30.ble_file_checksum);
                    String str21115 = String.format(str5, Arrays.copyOf(objArr111115, 1));
                    Intrinsics.checkNotNullExpressionValue(str21115, str);
                    String string111115 = sbAppend111115.append(str21115).toString();
                    c20912.L$0 = r30;
                    c20912.label = 28;
                    objBleWriteDownloadCommand$default18 = bleWriteDownloadCommand$default(r30, string111115, 4000, false, c20912, 4, null);
                    r31 = r30;
                    if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    String str21116 = BluetoothUtils.INSTANCE.getFD_END_COM() + ":1";
                    r31.getSharePref().setFwDownloadComplete(true);
                    r31.getSharePref().setFwFlashing(z);
                    r31.getMyApp().getFirmwareUpdateProcessBT().postValue(new UpdateProgressModel(FIrmWareUpdateProcess.FILE_INSTALL_FINISH, "", ""));
                    c20912.L$0 = r31;
                    c20912.label = 29;
                    objBleWriteDownloadCommand$default18 = r31.bleWriteDownloadCommand(str21116, PathInterpolatorCompat.MAX_NUM_POINTS, true, c20912);
                    if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                        r32 = r31;
                        return coroutine_suspended;
                    }
                    r32 = r31;
                    if (((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                        str3 = str4;
                        Log.d(str3, "recovery update return flashBLEFile()");
                        CustomLog.INSTANCE.writeFile("recovery update return flashBLEFile()", r32.context);
                        if (r32.getSharePref().isBluetoothConnected()) {
                            c20912.L$0 = r32;
                            c20912.label = 30;
                            objFlashBLEFile = r32.flashBLEFile(c20912);
                            if (objFlashBLEFile == coroutine_suspended) {
                                r33 = r32;
                                return coroutine_suspended;
                            }
                            r33 = r32;
                            if (!((Boolean) objFlashBLEFile).booleanValue()) {
                                r33.getSharePref().setFwFlashing(z);
                                Log.d(str3, "isFwFlashing = false");
                            }
                            return Boxing.boxBoolean(true);
                        }
                        return Boxing.boxBoolean(true);
                    }
                    Log.d(str4, "recovery update return truue");
                    return Boxing.boxBoolean(true);
                    r12.send_data_piece = z ? 1 : 0;
                    r12.firmware_1_interval_size = z ? 1 : 0;
                    r12.getSharePref().setFwDownloadComplete(z);
                    r12.getSharePref().setFwFlashing(z);
                    String str21117 = BluetoothUtils.INSTANCE.getFD_END_COM() + ":0";
                    c20912.L$0 = exc;
                    c20912.L$1 = obj;
                    c20912.label = 31;
                    objBleWriteDownloadCommand$default18 = bleWriteDownloadCommand$default(r12, str21117, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    exc.printStackTrace();
                    return Boxing.boxBoolean(z);
                case 5:
                    FirmWareUpdateWorker firmWareUpdateWorker5 = (FirmWareUpdateWorker) c20912.L$0;
                    ResultKt.throwOnFailure(objBleWriteDownloadCommand$default18);
                    z = false;
                    obj = null;
                    str4 = "TAG_FW";
                    coroutine_suspended = coroutine_suspended;
                    c20912 = c20912;
                    c = ':';
                    objBleWriteDownloadCommand$default3 = objBleWriteDownloadCommand$default18;
                    str5 = "%08X";
                    str = "format(...)";
                    r5 = firmWareUpdateWorker5;
                    r5 = r4;
                    if (!((Boolean) objBleWriteDownloadCommand$default3).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file2 = r5.file;
                    i4 = r5.dsp_file_offset;
                    i5 = r5.dsp_file_size;
                    c20912.L$0 = r5;
                    c20912.label = 6;
                    if (r5.writeFileData(file2, i4, i5, c20912) == coroutine_suspended) {
                        r6 = r5;
                        return coroutine_suspended;
                    }
                    r6 = r5;
                    StringBuilder sbAppend21111 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_DSP_END()).append(c);
                    StringCompanionObject stringCompanionObject21111 = StringCompanionObject.INSTANCE;
                    Object[] objArr21111 = new Object[1];
                    objArr21111[z ? 1 : 0] = Boxing.boxInt(r6.dsp_file_checksum);
                    String str1111110 = String.format(str5, Arrays.copyOf(objArr21111, 1));
                    Intrinsics.checkNotNullExpressionValue(str1111110, str);
                    string = sbAppend21111.append(str1111110).toString();
                    c20912.L$0 = r6;
                    c20912.L$1 = string;
                    c20912.label = 7;
                    objBleWriteDownloadCommand$default4 = bleWriteDownloadCommand$default(r6, string, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default4 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    r15 = r6;
                    str2 = string;
                    if (((Boolean) objBleWriteDownloadCommand$default4).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    Log.e("DSP_COMMAND", str2);
                    StringBuilder sbAppend21112 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_GPS_START()).append(c).append(r15.gps_file_ver).append(',');
                    StringCompanionObject stringCompanionObject21112 = StringCompanionObject.INSTANCE;
                    Object[] objArr21112 = new Object[1];
                    objArr21112[z ? 1 : 0] = Boxing.boxInt(r15.gps_file_size);
                    String str1111111 = String.format(str5, Arrays.copyOf(objArr21112, 1));
                    Intrinsics.checkNotNullExpressionValue(str1111111, str);
                    String string2117 = sbAppend21112.append(str1111111).toString();
                    c20912.L$0 = r15;
                    c20912.L$1 = obj;
                    c20912.label = 8;
                    r7 = r15;
                    objBleWriteDownloadCommand$default5 = bleWriteDownloadCommand$default(r15, string2117, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default5 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default5).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file3 = r7.file;
                    i6 = r7.gps_file_offset;
                    i7 = r7.gps_file_size;
                    c20912.L$0 = r7;
                    c20912.label = 9;
                    if (r7.writeFileData(file3, i6, i7, c20912) == coroutine_suspended) {
                        r8 = r7;
                        return coroutine_suspended;
                    }
                    r8 = r7;
                    StringBuilder sbAppend21113 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_GPS_END()).append(c);
                    StringCompanionObject stringCompanionObject21113 = StringCompanionObject.INSTANCE;
                    Object[] objArr21113 = new Object[1];
                    objArr21113[z ? 1 : 0] = Boxing.boxInt(r8.gps_file_checksum);
                    String str1111112 = String.format(str5, Arrays.copyOf(objArr21113, 1));
                    Intrinsics.checkNotNullExpressionValue(str1111112, str);
                    String string2118 = sbAppend21113.append(str1111112).toString();
                    c20912.L$0 = r8;
                    c20912.label = 10;
                    objBleWriteDownloadCommand$default6 = bleWriteDownloadCommand$default(r8, string2118, 4000, false, c20912, 4, null);
                    r9 = r8;
                    if (objBleWriteDownloadCommand$default6 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default6).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    StringBuilder sbAppend21114 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_SOUND_DB_START()).append(c).append(r9.sound_db_file_ver).append(',');
                    StringCompanionObject stringCompanionObject21114 = StringCompanionObject.INSTANCE;
                    Object[] objArr21114 = new Object[1];
                    objArr21114[z ? 1 : 0] = Boxing.boxInt(r9.sound_db_file_size);
                    String str1111113 = String.format(str5, Arrays.copyOf(objArr21114, 1));
                    Intrinsics.checkNotNullExpressionValue(str1111113, str);
                    String string2119 = sbAppend21114.append(str1111113).toString();
                    c20912.L$0 = r9;
                    c20912.label = 11;
                    objBleWriteDownloadCommand$default7 = bleWriteDownloadCommand$default(r9, string2119, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default7 == coroutine_suspended) {
                        r10 = r9;
                        return coroutine_suspended;
                    }
                    r10 = r9;
                    if (!((Boolean) objBleWriteDownloadCommand$default7).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file4 = r10.file;
                    i8 = r10.sound_db_file_offset;
                    i9 = r10.sound_db_file_size;
                    c20912.L$0 = r10;
                    c20912.label = 12;
                    if (r10.writeFileData(file4, i8, i9, c20912) == coroutine_suspended) {
                        r13 = r10;
                        return coroutine_suspended;
                    }
                    r13 = r10;
                    StringBuilder sbAppend21115 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_SOUND_DB_END()).append(c);
                    StringCompanionObject stringCompanionObject21115 = StringCompanionObject.INSTANCE;
                    Object[] objArr21115 = new Object[1];
                    objArr21115[z ? 1 : 0] = Boxing.boxInt(r13.sound_db_file_checksum);
                    String str1111114 = String.format(str5, Arrays.copyOf(objArr21115, 1));
                    Intrinsics.checkNotNullExpressionValue(str1111114, str);
                    String string21110 = sbAppend21115.append(str1111114).toString();
                    c20912.L$0 = r13;
                    c20912.label = 13;
                    objBleWriteDownloadCommand$default8 = bleWriteDownloadCommand$default(r13, string21110, 4000, false, c20912, 4, null);
                    r14 = r13;
                    if (objBleWriteDownloadCommand$default8 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default8).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    StringBuilder sbAppend21116 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_GPS_DB_START()).append(c).append(r14.gps_db_file_ver).append(',');
                    StringCompanionObject stringCompanionObject21116 = StringCompanionObject.INSTANCE;
                    Object[] objArr21116 = new Object[1];
                    objArr21116[z ? 1 : 0] = Boxing.boxInt(r14.gps_db_file_size);
                    String str1111115 = String.format(str5, Arrays.copyOf(objArr21116, 1));
                    Intrinsics.checkNotNullExpressionValue(str1111115, str);
                    String string21111 = sbAppend21116.append(str1111115).toString();
                    c20912.L$0 = r14;
                    c20912.label = 14;
                    objBleWriteDownloadCommand$default9 = bleWriteDownloadCommand$default(r14, string21111, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default9 == coroutine_suspended) {
                        r16 = r14;
                        return coroutine_suspended;
                    }
                    r16 = r14;
                    if (!((Boolean) objBleWriteDownloadCommand$default9).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file5 = r16.file;
                    i10 = r16.gps_db_file_offset;
                    i11 = r16.gps_db_file_size;
                    c20912.L$0 = r16;
                    c20912.label = 15;
                    if (r16.writeFileData(file5, i10, i11, c20912) == coroutine_suspended) {
                        r17 = r16;
                        return coroutine_suspended;
                    }
                    r17 = r16;
                    StringBuilder sbAppend111116 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_GPS_DB_END()).append(c);
                    StringCompanionObject stringCompanionObject111116 = StringCompanionObject.INSTANCE;
                    Object[] objArr111116 = new Object[1];
                    objArr111116[z ? 1 : 0] = Boxing.boxInt(r17.gps_db_file_checksum);
                    String str1111116 = String.format(str5, Arrays.copyOf(objArr111116, 1));
                    Intrinsics.checkNotNullExpressionValue(str1111116, str);
                    String string111116 = sbAppend111116.append(str1111116).toString();
                    c20912.L$0 = r17;
                    c20912.label = 16;
                    objBleWriteDownloadCommand$default10 = bleWriteDownloadCommand$default(r17, string111116, 4000, false, c20912, 4, null);
                    r18 = r17;
                    if (objBleWriteDownloadCommand$default10 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default10).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    StringBuilder sbAppend111117 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE1_START()).append(c).append(r18.if1_file_ver).append(',');
                    StringCompanionObject stringCompanionObject111117 = StringCompanionObject.INSTANCE;
                    Object[] objArr111117 = new Object[1];
                    objArr111117[z ? 1 : 0] = Boxing.boxInt(r18.if1_file_size);
                    String str1111117 = String.format(str5, Arrays.copyOf(objArr111117, 1));
                    Intrinsics.checkNotNullExpressionValue(str1111117, str);
                    String string111117 = sbAppend111117.append(str1111117).toString();
                    c20912.L$0 = r18;
                    c20912.label = 17;
                    objBleWriteDownloadCommand$default11 = bleWriteDownloadCommand$default(r18, string111117, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default11 == coroutine_suspended) {
                        r19 = r18;
                        return coroutine_suspended;
                    }
                    r19 = r18;
                    if (!((Boolean) objBleWriteDownloadCommand$default11).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file6 = r19.file;
                    i12 = r19.if1_file_offset;
                    i13 = r19.if1_file_size;
                    c20912.L$0 = r19;
                    c20912.label = 18;
                    if (r19.writeFileData(file6, i12, i13, c20912) == coroutine_suspended) {
                        r20 = r19;
                        return coroutine_suspended;
                    }
                    r20 = r19;
                    StringBuilder sbAppend111118 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE1_END()).append(c);
                    StringCompanionObject stringCompanionObject111118 = StringCompanionObject.INSTANCE;
                    Object[] objArr111118 = new Object[1];
                    objArr111118[z ? 1 : 0] = Boxing.boxInt(r20.if1_file_checksum);
                    String str1111118 = String.format(str5, Arrays.copyOf(objArr111118, 1));
                    Intrinsics.checkNotNullExpressionValue(str1111118, str);
                    String string111118 = sbAppend111118.append(str1111118).toString();
                    c20912.L$0 = r20;
                    c20912.label = 19;
                    objBleWriteDownloadCommand$default12 = bleWriteDownloadCommand$default(r20, string111118, 4000, false, c20912, 4, null);
                    r21 = r20;
                    if (objBleWriteDownloadCommand$default12 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default12).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    StringBuilder sbAppend111119 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE2_START()).append(c).append(r21.if2_file_ver).append(',');
                    StringCompanionObject stringCompanionObject111119 = StringCompanionObject.INSTANCE;
                    Object[] objArr111119 = new Object[1];
                    objArr111119[z ? 1 : 0] = Boxing.boxInt(r21.if2_file_size);
                    String str1111119 = String.format(str5, Arrays.copyOf(objArr111119, 1));
                    Intrinsics.checkNotNullExpressionValue(str1111119, str);
                    String string111119 = sbAppend111119.append(str1111119).toString();
                    c20912.L$0 = r21;
                    c20912.label = 20;
                    objBleWriteDownloadCommand$default13 = bleWriteDownloadCommand$default(r21, string111119, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default13 == coroutine_suspended) {
                        r22 = r21;
                        return coroutine_suspended;
                    }
                    r22 = r21;
                    if (!((Boolean) objBleWriteDownloadCommand$default13).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file7 = r22.file;
                    i14 = r22.if2_file_offset;
                    i15 = r22.if2_file_size;
                    c20912.L$0 = r22;
                    c20912.label = 21;
                    if (r22.writeFileData(file7, i14, i15, c20912) == coroutine_suspended) {
                        r23 = r22;
                        return coroutine_suspended;
                    }
                    r23 = r22;
                    StringBuilder sbAppend1111110 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE2_END()).append(c);
                    StringCompanionObject stringCompanionObject1111110 = StringCompanionObject.INSTANCE;
                    Object[] objArr1111110 = new Object[1];
                    objArr1111110[z ? 1 : 0] = Boxing.boxInt(r23.if2_file_checksum);
                    String str21118 = String.format(str5, Arrays.copyOf(objArr1111110, 1));
                    Intrinsics.checkNotNullExpressionValue(str21118, str);
                    String string1111110 = sbAppend1111110.append(str21118).toString();
                    c20912.L$0 = r23;
                    c20912.label = 22;
                    objBleWriteDownloadCommand$default14 = bleWriteDownloadCommand$default(r23, string1111110, 4000, false, c20912, 4, null);
                    r24 = r23;
                    if (objBleWriteDownloadCommand$default14 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default14).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    if (!StringsKt.contains$default(r24.getSharePref().getDeviceName(), "R9", z, 2, obj)) {
                        break;
                    }
                    r27 = r24;
                    StringBuilder sbAppend1111111 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE3_START()).append(c).append(r24.if3_file_ver).append(',');
                    StringCompanionObject stringCompanionObject1111111 = StringCompanionObject.INSTANCE;
                    Object[] objArr1111111 = new Object[1];
                    objArr1111111[z ? 1 : 0] = Boxing.boxInt(r24.if3_file_size);
                    String str21119 = String.format(str5, Arrays.copyOf(objArr1111111, 1));
                    Intrinsics.checkNotNullExpressionValue(str21119, str);
                    String string1111111 = sbAppend1111111.append(str21119).toString();
                    c20912.L$0 = r24;
                    c20912.label = 23;
                    objBleWriteDownloadCommand$default15 = bleWriteDownloadCommand$default(r24, string1111111, 4000, false, c20912, 4, null);
                    r25 = r24;
                    if (objBleWriteDownloadCommand$default15 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default15).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file8 = r25.file;
                    i16 = r25.if3_file_offset;
                    i17 = r25.if3_file_size;
                    c20912.L$0 = r25;
                    c20912.label = 24;
                    if (r25.writeFileData(file8, i16, i17, c20912) == coroutine_suspended) {
                        r26 = r25;
                        return coroutine_suspended;
                    }
                    r26 = r25;
                    StringBuilder sbAppend1111112 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE3_END()).append(c);
                    StringCompanionObject stringCompanionObject1111112 = StringCompanionObject.INSTANCE;
                    Object[] objArr1111112 = new Object[1];
                    objArr1111112[z ? 1 : 0] = Boxing.boxInt(r26.if3_file_checksum);
                    String str211110 = String.format(str5, Arrays.copyOf(objArr1111112, 1));
                    Intrinsics.checkNotNullExpressionValue(str211110, str);
                    String string1111112 = sbAppend1111112.append(str211110).toString();
                    c20912.L$0 = r26;
                    c20912.label = 25;
                    objBleWriteDownloadCommand$default16 = bleWriteDownloadCommand$default(r26, string1111112, 4000, false, c20912, 4, null);
                    r28 = r26;
                    if (objBleWriteDownloadCommand$default16 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    r27 = r28;
                    if (!((Boolean) objBleWriteDownloadCommand$default16).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    r27 = r24;
                    StringBuilder sbAppend1111113 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_BLE_START()).append(c).append(r27.ble_file_ver).append(',');
                    StringCompanionObject stringCompanionObject1111113 = StringCompanionObject.INSTANCE;
                    Object[] objArr1111113 = new Object[1];
                    objArr1111113[z ? 1 : 0] = Boxing.boxInt(r27.ble_file_size);
                    String str211111 = String.format(str5, Arrays.copyOf(objArr1111113, 1));
                    Intrinsics.checkNotNullExpressionValue(str211111, str);
                    String string1111113 = sbAppend1111113.append(str211111).toString();
                    c20912.L$0 = r27;
                    c20912.label = 26;
                    objBleWriteDownloadCommand$default17 = bleWriteDownloadCommand$default(r27, string1111113, 4000, false, c20912, 4, null);
                    r29 = r27;
                    if (objBleWriteDownloadCommand$default17 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default17).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file9 = r29.file;
                    i18 = r29.ble_file_offset;
                    i19 = r29.ble_file_size;
                    c20912.L$0 = r29;
                    c20912.label = 27;
                    if (r29.writeFileData(file9, i18, i19, c20912) == coroutine_suspended) {
                        r30 = r29;
                        return coroutine_suspended;
                    }
                    r30 = r29;
                    StringBuilder sbAppend1111114 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_BLE_END()).append(c);
                    StringCompanionObject stringCompanionObject1111114 = StringCompanionObject.INSTANCE;
                    Object[] objArr1111114 = new Object[1];
                    objArr1111114[z ? 1 : 0] = Boxing.boxInt(r30.ble_file_checksum);
                    String str211112 = String.format(str5, Arrays.copyOf(objArr1111114, 1));
                    Intrinsics.checkNotNullExpressionValue(str211112, str);
                    String string1111114 = sbAppend1111114.append(str211112).toString();
                    c20912.L$0 = r30;
                    c20912.label = 28;
                    objBleWriteDownloadCommand$default18 = bleWriteDownloadCommand$default(r30, string1111114, 4000, false, c20912, 4, null);
                    r31 = r30;
                    if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    String str211113 = BluetoothUtils.INSTANCE.getFD_END_COM() + ":1";
                    r31.getSharePref().setFwDownloadComplete(true);
                    r31.getSharePref().setFwFlashing(z);
                    r31.getMyApp().getFirmwareUpdateProcessBT().postValue(new UpdateProgressModel(FIrmWareUpdateProcess.FILE_INSTALL_FINISH, "", ""));
                    c20912.L$0 = r31;
                    c20912.label = 29;
                    objBleWriteDownloadCommand$default18 = r31.bleWriteDownloadCommand(str211113, PathInterpolatorCompat.MAX_NUM_POINTS, true, c20912);
                    if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                        r32 = r31;
                        return coroutine_suspended;
                    }
                    r32 = r31;
                    if (((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                        str3 = str4;
                        Log.d(str3, "recovery update return flashBLEFile()");
                        CustomLog.INSTANCE.writeFile("recovery update return flashBLEFile()", r32.context);
                        if (r32.getSharePref().isBluetoothConnected()) {
                            c20912.L$0 = r32;
                            c20912.label = 30;
                            objFlashBLEFile = r32.flashBLEFile(c20912);
                            if (objFlashBLEFile == coroutine_suspended) {
                                r33 = r32;
                                return coroutine_suspended;
                            }
                            r33 = r32;
                            if (!((Boolean) objFlashBLEFile).booleanValue()) {
                                r33.getSharePref().setFwFlashing(z);
                                Log.d(str3, "isFwFlashing = false");
                            }
                            return Boxing.boxBoolean(true);
                        }
                        return Boxing.boxBoolean(true);
                    }
                    Log.d(str4, "recovery update return truue");
                    return Boxing.boxBoolean(true);
                    r12.send_data_piece = z ? 1 : 0;
                    r12.firmware_1_interval_size = z ? 1 : 0;
                    r12.getSharePref().setFwDownloadComplete(z);
                    r12.getSharePref().setFwFlashing(z);
                    String str211114 = BluetoothUtils.INSTANCE.getFD_END_COM() + ":0";
                    c20912.L$0 = exc;
                    c20912.L$1 = obj;
                    c20912.label = 31;
                    objBleWriteDownloadCommand$default18 = bleWriteDownloadCommand$default(r12, str211114, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    exc.printStackTrace();
                    return Boxing.boxBoolean(z);
                case 6:
                    FirmWareUpdateWorker firmWareUpdateWorker6 = (FirmWareUpdateWorker) c20912.L$0;
                    ResultKt.throwOnFailure(objBleWriteDownloadCommand$default18);
                    str5 = "%08X";
                    z = false;
                    obj = null;
                    str4 = "TAG_FW";
                    coroutine_suspended = coroutine_suspended;
                    c20912 = c20912;
                    str = "format(...)";
                    c = ':';
                    r6 = firmWareUpdateWorker6;
                    r6 = r5;
                    StringBuilder sbAppend21117 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_DSP_END()).append(c);
                    StringCompanionObject stringCompanionObject21117 = StringCompanionObject.INSTANCE;
                    Object[] objArr21117 = new Object[1];
                    objArr21117[z ? 1 : 0] = Boxing.boxInt(r6.dsp_file_checksum);
                    String str11111110 = String.format(str5, Arrays.copyOf(objArr21117, 1));
                    Intrinsics.checkNotNullExpressionValue(str11111110, str);
                    string = sbAppend21117.append(str11111110).toString();
                    c20912.L$0 = r6;
                    c20912.L$1 = string;
                    c20912.label = 7;
                    objBleWriteDownloadCommand$default4 = bleWriteDownloadCommand$default(r6, string, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default4 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    r15 = r6;
                    str2 = string;
                    if (((Boolean) objBleWriteDownloadCommand$default4).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    Log.e("DSP_COMMAND", str2);
                    StringBuilder sbAppend21118 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_GPS_START()).append(c).append(r15.gps_file_ver).append(',');
                    StringCompanionObject stringCompanionObject21118 = StringCompanionObject.INSTANCE;
                    Object[] objArr21118 = new Object[1];
                    objArr21118[z ? 1 : 0] = Boxing.boxInt(r15.gps_file_size);
                    String str11111111 = String.format(str5, Arrays.copyOf(objArr21118, 1));
                    Intrinsics.checkNotNullExpressionValue(str11111111, str);
                    String string21112 = sbAppend21118.append(str11111111).toString();
                    c20912.L$0 = r15;
                    c20912.L$1 = obj;
                    c20912.label = 8;
                    r7 = r15;
                    objBleWriteDownloadCommand$default5 = bleWriteDownloadCommand$default(r15, string21112, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default5 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default5).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file3 = r7.file;
                    i6 = r7.gps_file_offset;
                    i7 = r7.gps_file_size;
                    c20912.L$0 = r7;
                    c20912.label = 9;
                    if (r7.writeFileData(file3, i6, i7, c20912) == coroutine_suspended) {
                        r8 = r7;
                        return coroutine_suspended;
                    }
                    r8 = r7;
                    StringBuilder sbAppend21119 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_GPS_END()).append(c);
                    StringCompanionObject stringCompanionObject21119 = StringCompanionObject.INSTANCE;
                    Object[] objArr21119 = new Object[1];
                    objArr21119[z ? 1 : 0] = Boxing.boxInt(r8.gps_file_checksum);
                    String str11111112 = String.format(str5, Arrays.copyOf(objArr21119, 1));
                    Intrinsics.checkNotNullExpressionValue(str11111112, str);
                    String string21113 = sbAppend21119.append(str11111112).toString();
                    c20912.L$0 = r8;
                    c20912.label = 10;
                    objBleWriteDownloadCommand$default6 = bleWriteDownloadCommand$default(r8, string21113, 4000, false, c20912, 4, null);
                    r9 = r8;
                    if (objBleWriteDownloadCommand$default6 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default6).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    StringBuilder sbAppend211110 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_SOUND_DB_START()).append(c).append(r9.sound_db_file_ver).append(',');
                    StringCompanionObject stringCompanionObject211110 = StringCompanionObject.INSTANCE;
                    Object[] objArr211110 = new Object[1];
                    objArr211110[z ? 1 : 0] = Boxing.boxInt(r9.sound_db_file_size);
                    String str11111113 = String.format(str5, Arrays.copyOf(objArr211110, 1));
                    Intrinsics.checkNotNullExpressionValue(str11111113, str);
                    String string21114 = sbAppend211110.append(str11111113).toString();
                    c20912.L$0 = r9;
                    c20912.label = 11;
                    objBleWriteDownloadCommand$default7 = bleWriteDownloadCommand$default(r9, string21114, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default7 == coroutine_suspended) {
                        r10 = r9;
                        return coroutine_suspended;
                    }
                    r10 = r9;
                    if (!((Boolean) objBleWriteDownloadCommand$default7).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file4 = r10.file;
                    i8 = r10.sound_db_file_offset;
                    i9 = r10.sound_db_file_size;
                    c20912.L$0 = r10;
                    c20912.label = 12;
                    if (r10.writeFileData(file4, i8, i9, c20912) == coroutine_suspended) {
                        r13 = r10;
                        return coroutine_suspended;
                    }
                    r13 = r10;
                    StringBuilder sbAppend211111 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_SOUND_DB_END()).append(c);
                    StringCompanionObject stringCompanionObject211111 = StringCompanionObject.INSTANCE;
                    Object[] objArr211111 = new Object[1];
                    objArr211111[z ? 1 : 0] = Boxing.boxInt(r13.sound_db_file_checksum);
                    String str11111114 = String.format(str5, Arrays.copyOf(objArr211111, 1));
                    Intrinsics.checkNotNullExpressionValue(str11111114, str);
                    String string21115 = sbAppend211111.append(str11111114).toString();
                    c20912.L$0 = r13;
                    c20912.label = 13;
                    objBleWriteDownloadCommand$default8 = bleWriteDownloadCommand$default(r13, string21115, 4000, false, c20912, 4, null);
                    r14 = r13;
                    if (objBleWriteDownloadCommand$default8 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default8).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    StringBuilder sbAppend211112 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_GPS_DB_START()).append(c).append(r14.gps_db_file_ver).append(',');
                    StringCompanionObject stringCompanionObject211112 = StringCompanionObject.INSTANCE;
                    Object[] objArr211112 = new Object[1];
                    objArr211112[z ? 1 : 0] = Boxing.boxInt(r14.gps_db_file_size);
                    String str11111115 = String.format(str5, Arrays.copyOf(objArr211112, 1));
                    Intrinsics.checkNotNullExpressionValue(str11111115, str);
                    String string21116 = sbAppend211112.append(str11111115).toString();
                    c20912.L$0 = r14;
                    c20912.label = 14;
                    objBleWriteDownloadCommand$default9 = bleWriteDownloadCommand$default(r14, string21116, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default9 == coroutine_suspended) {
                        r16 = r14;
                        return coroutine_suspended;
                    }
                    r16 = r14;
                    if (!((Boolean) objBleWriteDownloadCommand$default9).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file5 = r16.file;
                    i10 = r16.gps_db_file_offset;
                    i11 = r16.gps_db_file_size;
                    c20912.L$0 = r16;
                    c20912.label = 15;
                    if (r16.writeFileData(file5, i10, i11, c20912) == coroutine_suspended) {
                        r17 = r16;
                        return coroutine_suspended;
                    }
                    r17 = r16;
                    StringBuilder sbAppend1111115 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_GPS_DB_END()).append(c);
                    StringCompanionObject stringCompanionObject1111115 = StringCompanionObject.INSTANCE;
                    Object[] objArr1111115 = new Object[1];
                    objArr1111115[z ? 1 : 0] = Boxing.boxInt(r17.gps_db_file_checksum);
                    String str11111116 = String.format(str5, Arrays.copyOf(objArr1111115, 1));
                    Intrinsics.checkNotNullExpressionValue(str11111116, str);
                    String string1111115 = sbAppend1111115.append(str11111116).toString();
                    c20912.L$0 = r17;
                    c20912.label = 16;
                    objBleWriteDownloadCommand$default10 = bleWriteDownloadCommand$default(r17, string1111115, 4000, false, c20912, 4, null);
                    r18 = r17;
                    if (objBleWriteDownloadCommand$default10 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default10).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    StringBuilder sbAppend1111116 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE1_START()).append(c).append(r18.if1_file_ver).append(',');
                    StringCompanionObject stringCompanionObject1111116 = StringCompanionObject.INSTANCE;
                    Object[] objArr1111116 = new Object[1];
                    objArr1111116[z ? 1 : 0] = Boxing.boxInt(r18.if1_file_size);
                    String str11111117 = String.format(str5, Arrays.copyOf(objArr1111116, 1));
                    Intrinsics.checkNotNullExpressionValue(str11111117, str);
                    String string1111116 = sbAppend1111116.append(str11111117).toString();
                    c20912.L$0 = r18;
                    c20912.label = 17;
                    objBleWriteDownloadCommand$default11 = bleWriteDownloadCommand$default(r18, string1111116, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default11 == coroutine_suspended) {
                        r19 = r18;
                        return coroutine_suspended;
                    }
                    r19 = r18;
                    if (!((Boolean) objBleWriteDownloadCommand$default11).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file6 = r19.file;
                    i12 = r19.if1_file_offset;
                    i13 = r19.if1_file_size;
                    c20912.L$0 = r19;
                    c20912.label = 18;
                    if (r19.writeFileData(file6, i12, i13, c20912) == coroutine_suspended) {
                        r20 = r19;
                        return coroutine_suspended;
                    }
                    r20 = r19;
                    StringBuilder sbAppend1111117 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE1_END()).append(c);
                    StringCompanionObject stringCompanionObject1111117 = StringCompanionObject.INSTANCE;
                    Object[] objArr1111117 = new Object[1];
                    objArr1111117[z ? 1 : 0] = Boxing.boxInt(r20.if1_file_checksum);
                    String str11111118 = String.format(str5, Arrays.copyOf(objArr1111117, 1));
                    Intrinsics.checkNotNullExpressionValue(str11111118, str);
                    String string1111117 = sbAppend1111117.append(str11111118).toString();
                    c20912.L$0 = r20;
                    c20912.label = 19;
                    objBleWriteDownloadCommand$default12 = bleWriteDownloadCommand$default(r20, string1111117, 4000, false, c20912, 4, null);
                    r21 = r20;
                    if (objBleWriteDownloadCommand$default12 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default12).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    StringBuilder sbAppend1111118 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE2_START()).append(c).append(r21.if2_file_ver).append(',');
                    StringCompanionObject stringCompanionObject1111118 = StringCompanionObject.INSTANCE;
                    Object[] objArr1111118 = new Object[1];
                    objArr1111118[z ? 1 : 0] = Boxing.boxInt(r21.if2_file_size);
                    String str11111119 = String.format(str5, Arrays.copyOf(objArr1111118, 1));
                    Intrinsics.checkNotNullExpressionValue(str11111119, str);
                    String string1111118 = sbAppend1111118.append(str11111119).toString();
                    c20912.L$0 = r21;
                    c20912.label = 20;
                    objBleWriteDownloadCommand$default13 = bleWriteDownloadCommand$default(r21, string1111118, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default13 == coroutine_suspended) {
                        r22 = r21;
                        return coroutine_suspended;
                    }
                    r22 = r21;
                    if (!((Boolean) objBleWriteDownloadCommand$default13).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file7 = r22.file;
                    i14 = r22.if2_file_offset;
                    i15 = r22.if2_file_size;
                    c20912.L$0 = r22;
                    c20912.label = 21;
                    if (r22.writeFileData(file7, i14, i15, c20912) == coroutine_suspended) {
                        r23 = r22;
                        return coroutine_suspended;
                    }
                    r23 = r22;
                    StringBuilder sbAppend1111119 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE2_END()).append(c);
                    StringCompanionObject stringCompanionObject1111119 = StringCompanionObject.INSTANCE;
                    Object[] objArr1111119 = new Object[1];
                    objArr1111119[z ? 1 : 0] = Boxing.boxInt(r23.if2_file_checksum);
                    String str211115 = String.format(str5, Arrays.copyOf(objArr1111119, 1));
                    Intrinsics.checkNotNullExpressionValue(str211115, str);
                    String string1111119 = sbAppend1111119.append(str211115).toString();
                    c20912.L$0 = r23;
                    c20912.label = 22;
                    objBleWriteDownloadCommand$default14 = bleWriteDownloadCommand$default(r23, string1111119, 4000, false, c20912, 4, null);
                    r24 = r23;
                    if (objBleWriteDownloadCommand$default14 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default14).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    if (!StringsKt.contains$default(r24.getSharePref().getDeviceName(), "R9", z, 2, obj)) {
                        break;
                    }
                    r27 = r24;
                    StringBuilder sbAppend11111110 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE3_START()).append(c).append(r24.if3_file_ver).append(',');
                    StringCompanionObject stringCompanionObject11111110 = StringCompanionObject.INSTANCE;
                    Object[] objArr11111110 = new Object[1];
                    objArr11111110[z ? 1 : 0] = Boxing.boxInt(r24.if3_file_size);
                    String str211116 = String.format(str5, Arrays.copyOf(objArr11111110, 1));
                    Intrinsics.checkNotNullExpressionValue(str211116, str);
                    String string11111110 = sbAppend11111110.append(str211116).toString();
                    c20912.L$0 = r24;
                    c20912.label = 23;
                    objBleWriteDownloadCommand$default15 = bleWriteDownloadCommand$default(r24, string11111110, 4000, false, c20912, 4, null);
                    r25 = r24;
                    if (objBleWriteDownloadCommand$default15 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default15).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file8 = r25.file;
                    i16 = r25.if3_file_offset;
                    i17 = r25.if3_file_size;
                    c20912.L$0 = r25;
                    c20912.label = 24;
                    if (r25.writeFileData(file8, i16, i17, c20912) == coroutine_suspended) {
                        r26 = r25;
                        return coroutine_suspended;
                    }
                    r26 = r25;
                    StringBuilder sbAppend11111111 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE3_END()).append(c);
                    StringCompanionObject stringCompanionObject11111111 = StringCompanionObject.INSTANCE;
                    Object[] objArr11111111 = new Object[1];
                    objArr11111111[z ? 1 : 0] = Boxing.boxInt(r26.if3_file_checksum);
                    String str211117 = String.format(str5, Arrays.copyOf(objArr11111111, 1));
                    Intrinsics.checkNotNullExpressionValue(str211117, str);
                    String string11111111 = sbAppend11111111.append(str211117).toString();
                    c20912.L$0 = r26;
                    c20912.label = 25;
                    objBleWriteDownloadCommand$default16 = bleWriteDownloadCommand$default(r26, string11111111, 4000, false, c20912, 4, null);
                    r28 = r26;
                    if (objBleWriteDownloadCommand$default16 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    r27 = r28;
                    if (!((Boolean) objBleWriteDownloadCommand$default16).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    r27 = r24;
                    StringBuilder sbAppend11111112 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_BLE_START()).append(c).append(r27.ble_file_ver).append(',');
                    StringCompanionObject stringCompanionObject11111112 = StringCompanionObject.INSTANCE;
                    Object[] objArr11111112 = new Object[1];
                    objArr11111112[z ? 1 : 0] = Boxing.boxInt(r27.ble_file_size);
                    String str211118 = String.format(str5, Arrays.copyOf(objArr11111112, 1));
                    Intrinsics.checkNotNullExpressionValue(str211118, str);
                    String string11111112 = sbAppend11111112.append(str211118).toString();
                    c20912.L$0 = r27;
                    c20912.label = 26;
                    objBleWriteDownloadCommand$default17 = bleWriteDownloadCommand$default(r27, string11111112, 4000, false, c20912, 4, null);
                    r29 = r27;
                    if (objBleWriteDownloadCommand$default17 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default17).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file9 = r29.file;
                    i18 = r29.ble_file_offset;
                    i19 = r29.ble_file_size;
                    c20912.L$0 = r29;
                    c20912.label = 27;
                    if (r29.writeFileData(file9, i18, i19, c20912) == coroutine_suspended) {
                        r30 = r29;
                        return coroutine_suspended;
                    }
                    r30 = r29;
                    StringBuilder sbAppend11111113 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_BLE_END()).append(c);
                    StringCompanionObject stringCompanionObject11111113 = StringCompanionObject.INSTANCE;
                    Object[] objArr11111113 = new Object[1];
                    objArr11111113[z ? 1 : 0] = Boxing.boxInt(r30.ble_file_checksum);
                    String str211119 = String.format(str5, Arrays.copyOf(objArr11111113, 1));
                    Intrinsics.checkNotNullExpressionValue(str211119, str);
                    String string11111113 = sbAppend11111113.append(str211119).toString();
                    c20912.L$0 = r30;
                    c20912.label = 28;
                    objBleWriteDownloadCommand$default18 = bleWriteDownloadCommand$default(r30, string11111113, 4000, false, c20912, 4, null);
                    r31 = r30;
                    if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    String str2111110 = BluetoothUtils.INSTANCE.getFD_END_COM() + ":1";
                    r31.getSharePref().setFwDownloadComplete(true);
                    r31.getSharePref().setFwFlashing(z);
                    r31.getMyApp().getFirmwareUpdateProcessBT().postValue(new UpdateProgressModel(FIrmWareUpdateProcess.FILE_INSTALL_FINISH, "", ""));
                    c20912.L$0 = r31;
                    c20912.label = 29;
                    objBleWriteDownloadCommand$default18 = r31.bleWriteDownloadCommand(str2111110, PathInterpolatorCompat.MAX_NUM_POINTS, true, c20912);
                    if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                        r32 = r31;
                        return coroutine_suspended;
                    }
                    r32 = r31;
                    if (((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                        str3 = str4;
                        Log.d(str3, "recovery update return flashBLEFile()");
                        CustomLog.INSTANCE.writeFile("recovery update return flashBLEFile()", r32.context);
                        if (r32.getSharePref().isBluetoothConnected()) {
                            c20912.L$0 = r32;
                            c20912.label = 30;
                            objFlashBLEFile = r32.flashBLEFile(c20912);
                            if (objFlashBLEFile == coroutine_suspended) {
                                r33 = r32;
                                return coroutine_suspended;
                            }
                            r33 = r32;
                            if (!((Boolean) objFlashBLEFile).booleanValue()) {
                                r33.getSharePref().setFwFlashing(z);
                                Log.d(str3, "isFwFlashing = false");
                            }
                            return Boxing.boxBoolean(true);
                        }
                        return Boxing.boxBoolean(true);
                    }
                    Log.d(str4, "recovery update return truue");
                    return Boxing.boxBoolean(true);
                    r12.send_data_piece = z ? 1 : 0;
                    r12.firmware_1_interval_size = z ? 1 : 0;
                    r12.getSharePref().setFwDownloadComplete(z);
                    r12.getSharePref().setFwFlashing(z);
                    String str2111111 = BluetoothUtils.INSTANCE.getFD_END_COM() + ":0";
                    c20912.L$0 = exc;
                    c20912.L$1 = obj;
                    c20912.label = 31;
                    objBleWriteDownloadCommand$default18 = bleWriteDownloadCommand$default(r12, str2111111, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    exc.printStackTrace();
                    return Boxing.boxBoolean(z);
                case 7:
                    str2 = (String) c20912.L$1;
                    FirmWareUpdateWorker firmWareUpdateWorker7 = (FirmWareUpdateWorker) c20912.L$0;
                    try {
                        ResultKt.throwOnFailure(objBleWriteDownloadCommand$default18);
                        z = false;
                        str4 = "TAG_FW";
                        coroutine_suspended = coroutine_suspended;
                        c20912 = c20912;
                        c = ':';
                        r15 = firmWareUpdateWorker7;
                        obj = null;
                        objBleWriteDownloadCommand$default4 = objBleWriteDownloadCommand$default18;
                        str5 = "%08X";
                        str = "format(...)";
                        if (((Boolean) objBleWriteDownloadCommand$default4).booleanValue()) {
                            return Boxing.boxBoolean(z);
                        }
                        Log.e("DSP_COMMAND", str2);
                        StringBuilder sbAppend211113 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_GPS_START()).append(c).append(r15.gps_file_ver).append(',');
                        StringCompanionObject stringCompanionObject211113 = StringCompanionObject.INSTANCE;
                        Object[] objArr211113 = new Object[1];
                        objArr211113[z ? 1 : 0] = Boxing.boxInt(r15.gps_file_size);
                        String str111111110 = String.format(str5, Arrays.copyOf(objArr211113, 1));
                        Intrinsics.checkNotNullExpressionValue(str111111110, str);
                        String string21117 = sbAppend211113.append(str111111110).toString();
                        c20912.L$0 = r15;
                        c20912.L$1 = obj;
                        c20912.label = 8;
                        r7 = r15;
                        objBleWriteDownloadCommand$default5 = bleWriteDownloadCommand$default(r15, string21117, 4000, false, c20912, 4, null);
                        if (objBleWriteDownloadCommand$default5 == coroutine_suspended) {
                            return coroutine_suspended;
                        }
                        if (!((Boolean) objBleWriteDownloadCommand$default5).booleanValue()) {
                            return Boxing.boxBoolean(z);
                        }
                        file3 = r7.file;
                        i6 = r7.gps_file_offset;
                        i7 = r7.gps_file_size;
                        c20912.L$0 = r7;
                        c20912.label = 9;
                        if (r7.writeFileData(file3, i6, i7, c20912) == coroutine_suspended) {
                            r8 = r7;
                            return coroutine_suspended;
                        }
                        r8 = r7;
                        StringBuilder sbAppend211114 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_GPS_END()).append(c);
                        StringCompanionObject stringCompanionObject211114 = StringCompanionObject.INSTANCE;
                        Object[] objArr211114 = new Object[1];
                        objArr211114[z ? 1 : 0] = Boxing.boxInt(r8.gps_file_checksum);
                        String str111111111 = String.format(str5, Arrays.copyOf(objArr211114, 1));
                        Intrinsics.checkNotNullExpressionValue(str111111111, str);
                        String string21118 = sbAppend211114.append(str111111111).toString();
                        c20912.L$0 = r8;
                        c20912.label = 10;
                        objBleWriteDownloadCommand$default6 = bleWriteDownloadCommand$default(r8, string21118, 4000, false, c20912, 4, null);
                        r9 = r8;
                        if (objBleWriteDownloadCommand$default6 == coroutine_suspended) {
                            return coroutine_suspended;
                        }
                        if (!((Boolean) objBleWriteDownloadCommand$default6).booleanValue()) {
                            return Boxing.boxBoolean(z);
                        }
                        StringBuilder sbAppend211115 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_SOUND_DB_START()).append(c).append(r9.sound_db_file_ver).append(',');
                        StringCompanionObject stringCompanionObject211115 = StringCompanionObject.INSTANCE;
                        Object[] objArr211115 = new Object[1];
                        objArr211115[z ? 1 : 0] = Boxing.boxInt(r9.sound_db_file_size);
                        String str111111112 = String.format(str5, Arrays.copyOf(objArr211115, 1));
                        Intrinsics.checkNotNullExpressionValue(str111111112, str);
                        String string21119 = sbAppend211115.append(str111111112).toString();
                        c20912.L$0 = r9;
                        c20912.label = 11;
                        objBleWriteDownloadCommand$default7 = bleWriteDownloadCommand$default(r9, string21119, 4000, false, c20912, 4, null);
                        if (objBleWriteDownloadCommand$default7 == coroutine_suspended) {
                            r10 = r9;
                            return coroutine_suspended;
                        }
                        r10 = r9;
                        if (!((Boolean) objBleWriteDownloadCommand$default7).booleanValue()) {
                            return Boxing.boxBoolean(z);
                        }
                        file4 = r10.file;
                        i8 = r10.sound_db_file_offset;
                        i9 = r10.sound_db_file_size;
                        c20912.L$0 = r10;
                        c20912.label = 12;
                        if (r10.writeFileData(file4, i8, i9, c20912) == coroutine_suspended) {
                            r13 = r10;
                            return coroutine_suspended;
                        }
                        r13 = r10;
                        StringBuilder sbAppend211116 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_SOUND_DB_END()).append(c);
                        StringCompanionObject stringCompanionObject211116 = StringCompanionObject.INSTANCE;
                        Object[] objArr211116 = new Object[1];
                        objArr211116[z ? 1 : 0] = Boxing.boxInt(r13.sound_db_file_checksum);
                        String str111111113 = String.format(str5, Arrays.copyOf(objArr211116, 1));
                        Intrinsics.checkNotNullExpressionValue(str111111113, str);
                        String string211110 = sbAppend211116.append(str111111113).toString();
                        c20912.L$0 = r13;
                        c20912.label = 13;
                        objBleWriteDownloadCommand$default8 = bleWriteDownloadCommand$default(r13, string211110, 4000, false, c20912, 4, null);
                        r14 = r13;
                        if (objBleWriteDownloadCommand$default8 == coroutine_suspended) {
                            return coroutine_suspended;
                        }
                        if (!((Boolean) objBleWriteDownloadCommand$default8).booleanValue()) {
                            return Boxing.boxBoolean(z);
                        }
                        StringBuilder sbAppend211117 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_GPS_DB_START()).append(c).append(r14.gps_db_file_ver).append(',');
                        StringCompanionObject stringCompanionObject211117 = StringCompanionObject.INSTANCE;
                        Object[] objArr211117 = new Object[1];
                        objArr211117[z ? 1 : 0] = Boxing.boxInt(r14.gps_db_file_size);
                        String str111111114 = String.format(str5, Arrays.copyOf(objArr211117, 1));
                        Intrinsics.checkNotNullExpressionValue(str111111114, str);
                        String string211111 = sbAppend211117.append(str111111114).toString();
                        c20912.L$0 = r14;
                        c20912.label = 14;
                        objBleWriteDownloadCommand$default9 = bleWriteDownloadCommand$default(r14, string211111, 4000, false, c20912, 4, null);
                        if (objBleWriteDownloadCommand$default9 == coroutine_suspended) {
                            r16 = r14;
                            return coroutine_suspended;
                        }
                        r16 = r14;
                        if (!((Boolean) objBleWriteDownloadCommand$default9).booleanValue()) {
                            return Boxing.boxBoolean(z);
                        }
                        file5 = r16.file;
                        i10 = r16.gps_db_file_offset;
                        i11 = r16.gps_db_file_size;
                        c20912.L$0 = r16;
                        c20912.label = 15;
                        if (r16.writeFileData(file5, i10, i11, c20912) == coroutine_suspended) {
                            r17 = r16;
                            return coroutine_suspended;
                        }
                        r17 = r16;
                        StringBuilder sbAppend11111114 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_GPS_DB_END()).append(c);
                        StringCompanionObject stringCompanionObject11111114 = StringCompanionObject.INSTANCE;
                        Object[] objArr11111114 = new Object[1];
                        objArr11111114[z ? 1 : 0] = Boxing.boxInt(r17.gps_db_file_checksum);
                        String str111111115 = String.format(str5, Arrays.copyOf(objArr11111114, 1));
                        Intrinsics.checkNotNullExpressionValue(str111111115, str);
                        String string11111114 = sbAppend11111114.append(str111111115).toString();
                        c20912.L$0 = r17;
                        c20912.label = 16;
                        objBleWriteDownloadCommand$default10 = bleWriteDownloadCommand$default(r17, string11111114, 4000, false, c20912, 4, null);
                        r18 = r17;
                        if (objBleWriteDownloadCommand$default10 == coroutine_suspended) {
                            return coroutine_suspended;
                        }
                        if (!((Boolean) objBleWriteDownloadCommand$default10).booleanValue()) {
                            return Boxing.boxBoolean(z);
                        }
                        StringBuilder sbAppend11111115 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE1_START()).append(c).append(r18.if1_file_ver).append(',');
                        StringCompanionObject stringCompanionObject11111115 = StringCompanionObject.INSTANCE;
                        Object[] objArr11111115 = new Object[1];
                        objArr11111115[z ? 1 : 0] = Boxing.boxInt(r18.if1_file_size);
                        String str111111116 = String.format(str5, Arrays.copyOf(objArr11111115, 1));
                        Intrinsics.checkNotNullExpressionValue(str111111116, str);
                        String string11111115 = sbAppend11111115.append(str111111116).toString();
                        c20912.L$0 = r18;
                        c20912.label = 17;
                        objBleWriteDownloadCommand$default11 = bleWriteDownloadCommand$default(r18, string11111115, 4000, false, c20912, 4, null);
                        if (objBleWriteDownloadCommand$default11 == coroutine_suspended) {
                            r19 = r18;
                            return coroutine_suspended;
                        }
                        r19 = r18;
                        if (!((Boolean) objBleWriteDownloadCommand$default11).booleanValue()) {
                            return Boxing.boxBoolean(z);
                        }
                        file6 = r19.file;
                        i12 = r19.if1_file_offset;
                        i13 = r19.if1_file_size;
                        c20912.L$0 = r19;
                        c20912.label = 18;
                        if (r19.writeFileData(file6, i12, i13, c20912) == coroutine_suspended) {
                            r20 = r19;
                            return coroutine_suspended;
                        }
                        r20 = r19;
                        StringBuilder sbAppend11111116 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE1_END()).append(c);
                        StringCompanionObject stringCompanionObject11111116 = StringCompanionObject.INSTANCE;
                        Object[] objArr11111116 = new Object[1];
                        objArr11111116[z ? 1 : 0] = Boxing.boxInt(r20.if1_file_checksum);
                        String str111111117 = String.format(str5, Arrays.copyOf(objArr11111116, 1));
                        Intrinsics.checkNotNullExpressionValue(str111111117, str);
                        String string11111116 = sbAppend11111116.append(str111111117).toString();
                        c20912.L$0 = r20;
                        c20912.label = 19;
                        objBleWriteDownloadCommand$default12 = bleWriteDownloadCommand$default(r20, string11111116, 4000, false, c20912, 4, null);
                        r21 = r20;
                        if (objBleWriteDownloadCommand$default12 == coroutine_suspended) {
                            return coroutine_suspended;
                        }
                        if (!((Boolean) objBleWriteDownloadCommand$default12).booleanValue()) {
                            return Boxing.boxBoolean(z);
                        }
                        StringBuilder sbAppend11111117 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE2_START()).append(c).append(r21.if2_file_ver).append(',');
                        StringCompanionObject stringCompanionObject11111117 = StringCompanionObject.INSTANCE;
                        Object[] objArr11111117 = new Object[1];
                        objArr11111117[z ? 1 : 0] = Boxing.boxInt(r21.if2_file_size);
                        String str111111118 = String.format(str5, Arrays.copyOf(objArr11111117, 1));
                        Intrinsics.checkNotNullExpressionValue(str111111118, str);
                        String string11111117 = sbAppend11111117.append(str111111118).toString();
                        c20912.L$0 = r21;
                        c20912.label = 20;
                        objBleWriteDownloadCommand$default13 = bleWriteDownloadCommand$default(r21, string11111117, 4000, false, c20912, 4, null);
                        if (objBleWriteDownloadCommand$default13 == coroutine_suspended) {
                            r22 = r21;
                            return coroutine_suspended;
                        }
                        r22 = r21;
                        if (!((Boolean) objBleWriteDownloadCommand$default13).booleanValue()) {
                            return Boxing.boxBoolean(z);
                        }
                        file7 = r22.file;
                        i14 = r22.if2_file_offset;
                        i15 = r22.if2_file_size;
                        c20912.L$0 = r22;
                        c20912.label = 21;
                        if (r22.writeFileData(file7, i14, i15, c20912) == coroutine_suspended) {
                            r23 = r22;
                            return coroutine_suspended;
                        }
                        r23 = r22;
                        StringBuilder sbAppend11111118 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE2_END()).append(c);
                        StringCompanionObject stringCompanionObject11111118 = StringCompanionObject.INSTANCE;
                        Object[] objArr11111118 = new Object[1];
                        objArr11111118[z ? 1 : 0] = Boxing.boxInt(r23.if2_file_checksum);
                        String str2111112 = String.format(str5, Arrays.copyOf(objArr11111118, 1));
                        Intrinsics.checkNotNullExpressionValue(str2111112, str);
                        String string11111118 = sbAppend11111118.append(str2111112).toString();
                        c20912.L$0 = r23;
                        c20912.label = 22;
                        objBleWriteDownloadCommand$default14 = bleWriteDownloadCommand$default(r23, string11111118, 4000, false, c20912, 4, null);
                        r24 = r23;
                        if (objBleWriteDownloadCommand$default14 == coroutine_suspended) {
                            return coroutine_suspended;
                        }
                        if (!((Boolean) objBleWriteDownloadCommand$default14).booleanValue()) {
                            return Boxing.boxBoolean(z);
                        }
                        if (!StringsKt.contains$default(r24.getSharePref().getDeviceName(), "R9", z, 2, obj)) {
                            break;
                        }
                        r27 = r24;
                        StringBuilder sbAppend11111119 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE3_START()).append(c).append(r24.if3_file_ver).append(',');
                        StringCompanionObject stringCompanionObject11111119 = StringCompanionObject.INSTANCE;
                        Object[] objArr11111119 = new Object[1];
                        objArr11111119[z ? 1 : 0] = Boxing.boxInt(r24.if3_file_size);
                        String str2111113 = String.format(str5, Arrays.copyOf(objArr11111119, 1));
                        Intrinsics.checkNotNullExpressionValue(str2111113, str);
                        String string11111119 = sbAppend11111119.append(str2111113).toString();
                        c20912.L$0 = r24;
                        c20912.label = 23;
                        objBleWriteDownloadCommand$default15 = bleWriteDownloadCommand$default(r24, string11111119, 4000, false, c20912, 4, null);
                        r25 = r24;
                        if (objBleWriteDownloadCommand$default15 == coroutine_suspended) {
                            return coroutine_suspended;
                        }
                        if (!((Boolean) objBleWriteDownloadCommand$default15).booleanValue()) {
                            return Boxing.boxBoolean(z);
                        }
                        file8 = r25.file;
                        i16 = r25.if3_file_offset;
                        i17 = r25.if3_file_size;
                        c20912.L$0 = r25;
                        c20912.label = 24;
                        if (r25.writeFileData(file8, i16, i17, c20912) == coroutine_suspended) {
                            r26 = r25;
                            return coroutine_suspended;
                        }
                        r26 = r25;
                        StringBuilder sbAppend111111110 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE3_END()).append(c);
                        StringCompanionObject stringCompanionObject111111110 = StringCompanionObject.INSTANCE;
                        Object[] objArr111111110 = new Object[1];
                        objArr111111110[z ? 1 : 0] = Boxing.boxInt(r26.if3_file_checksum);
                        String str2111114 = String.format(str5, Arrays.copyOf(objArr111111110, 1));
                        Intrinsics.checkNotNullExpressionValue(str2111114, str);
                        String string111111110 = sbAppend111111110.append(str2111114).toString();
                        c20912.L$0 = r26;
                        c20912.label = 25;
                        objBleWriteDownloadCommand$default16 = bleWriteDownloadCommand$default(r26, string111111110, 4000, false, c20912, 4, null);
                        r28 = r26;
                        if (objBleWriteDownloadCommand$default16 == coroutine_suspended) {
                            return coroutine_suspended;
                        }
                        r27 = r28;
                        if (!((Boolean) objBleWriteDownloadCommand$default16).booleanValue()) {
                            return Boxing.boxBoolean(z);
                        }
                        r27 = r24;
                        StringBuilder sbAppend111111111 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_BLE_START()).append(c).append(r27.ble_file_ver).append(',');
                        StringCompanionObject stringCompanionObject111111111 = StringCompanionObject.INSTANCE;
                        Object[] objArr111111111 = new Object[1];
                        objArr111111111[z ? 1 : 0] = Boxing.boxInt(r27.ble_file_size);
                        String str2111115 = String.format(str5, Arrays.copyOf(objArr111111111, 1));
                        Intrinsics.checkNotNullExpressionValue(str2111115, str);
                        String string111111111 = sbAppend111111111.append(str2111115).toString();
                        c20912.L$0 = r27;
                        c20912.label = 26;
                        objBleWriteDownloadCommand$default17 = bleWriteDownloadCommand$default(r27, string111111111, 4000, false, c20912, 4, null);
                        r29 = r27;
                        if (objBleWriteDownloadCommand$default17 == coroutine_suspended) {
                            return coroutine_suspended;
                        }
                        if (!((Boolean) objBleWriteDownloadCommand$default17).booleanValue()) {
                            return Boxing.boxBoolean(z);
                        }
                        file9 = r29.file;
                        i18 = r29.ble_file_offset;
                        i19 = r29.ble_file_size;
                        c20912.L$0 = r29;
                        c20912.label = 27;
                        if (r29.writeFileData(file9, i18, i19, c20912) == coroutine_suspended) {
                            r30 = r29;
                            return coroutine_suspended;
                        }
                        r30 = r29;
                        StringBuilder sbAppend111111112 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_BLE_END()).append(c);
                        StringCompanionObject stringCompanionObject111111112 = StringCompanionObject.INSTANCE;
                        Object[] objArr111111112 = new Object[1];
                        objArr111111112[z ? 1 : 0] = Boxing.boxInt(r30.ble_file_checksum);
                        String str2111116 = String.format(str5, Arrays.copyOf(objArr111111112, 1));
                        Intrinsics.checkNotNullExpressionValue(str2111116, str);
                        String string111111112 = sbAppend111111112.append(str2111116).toString();
                        c20912.L$0 = r30;
                        c20912.label = 28;
                        objBleWriteDownloadCommand$default18 = bleWriteDownloadCommand$default(r30, string111111112, 4000, false, c20912, 4, null);
                        r31 = r30;
                        if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                            return coroutine_suspended;
                        }
                        if (!((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                            return Boxing.boxBoolean(z);
                        }
                        String str2111117 = BluetoothUtils.INSTANCE.getFD_END_COM() + ":1";
                        r31.getSharePref().setFwDownloadComplete(true);
                        r31.getSharePref().setFwFlashing(z);
                        r31.getMyApp().getFirmwareUpdateProcessBT().postValue(new UpdateProgressModel(FIrmWareUpdateProcess.FILE_INSTALL_FINISH, "", ""));
                        c20912.L$0 = r31;
                        c20912.label = 29;
                        objBleWriteDownloadCommand$default18 = r31.bleWriteDownloadCommand(str2111117, PathInterpolatorCompat.MAX_NUM_POINTS, true, c20912);
                        if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                            r32 = r31;
                            return coroutine_suspended;
                        }
                        r32 = r31;
                        if (((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                            str3 = str4;
                            Log.d(str3, "recovery update return flashBLEFile()");
                            CustomLog.INSTANCE.writeFile("recovery update return flashBLEFile()", r32.context);
                            if (r32.getSharePref().isBluetoothConnected()) {
                                c20912.L$0 = r32;
                                c20912.label = 30;
                                objFlashBLEFile = r32.flashBLEFile(c20912);
                                if (objFlashBLEFile == coroutine_suspended) {
                                    r33 = r32;
                                    return coroutine_suspended;
                                }
                                r33 = r32;
                                if (!((Boolean) objFlashBLEFile).booleanValue()) {
                                    r33.getSharePref().setFwFlashing(z);
                                    Log.d(str3, "isFwFlashing = false");
                                }
                                return Boxing.boxBoolean(true);
                            }
                            return Boxing.boxBoolean(true);
                        }
                        Log.d(str4, "recovery update return truue");
                        return Boxing.boxBoolean(true);
                    } catch (Exception e10) {
                        exc = e10;
                        z = false;
                        coroutine_suspended = coroutine_suspended;
                        c20912 = c20912;
                        r12 = firmWareUpdateWorker7;
                        obj = null;
                    }
                    r12.send_data_piece = z ? 1 : 0;
                    r12.firmware_1_interval_size = z ? 1 : 0;
                    r12.getSharePref().setFwDownloadComplete(z);
                    r12.getSharePref().setFwFlashing(z);
                    String str2111118 = BluetoothUtils.INSTANCE.getFD_END_COM() + ":0";
                    c20912.L$0 = exc;
                    c20912.L$1 = obj;
                    c20912.label = 31;
                    objBleWriteDownloadCommand$default18 = bleWriteDownloadCommand$default(r12, str2111118, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    exc.printStackTrace();
                    return Boxing.boxBoolean(z);
                case 8:
                    FirmWareUpdateWorker firmWareUpdateWorker8 = (FirmWareUpdateWorker) c20912.L$0;
                    ResultKt.throwOnFailure(objBleWriteDownloadCommand$default18);
                    z = false;
                    obj = null;
                    str4 = "TAG_FW";
                    coroutine_suspended = coroutine_suspended;
                    c20912 = c20912;
                    c = ':';
                    objBleWriteDownloadCommand$default5 = objBleWriteDownloadCommand$default18;
                    str5 = "%08X";
                    str = "format(...)";
                    r7 = firmWareUpdateWorker8;
                    if (!((Boolean) objBleWriteDownloadCommand$default5).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file3 = r7.file;
                    i6 = r7.gps_file_offset;
                    i7 = r7.gps_file_size;
                    c20912.L$0 = r7;
                    c20912.label = 9;
                    if (r7.writeFileData(file3, i6, i7, c20912) == coroutine_suspended) {
                        r8 = r7;
                        return coroutine_suspended;
                    }
                    r8 = r7;
                    StringBuilder sbAppend211118 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_GPS_END()).append(c);
                    StringCompanionObject stringCompanionObject211118 = StringCompanionObject.INSTANCE;
                    Object[] objArr211118 = new Object[1];
                    objArr211118[z ? 1 : 0] = Boxing.boxInt(r8.gps_file_checksum);
                    String str111111119 = String.format(str5, Arrays.copyOf(objArr211118, 1));
                    Intrinsics.checkNotNullExpressionValue(str111111119, str);
                    String string211112 = sbAppend211118.append(str111111119).toString();
                    c20912.L$0 = r8;
                    c20912.label = 10;
                    objBleWriteDownloadCommand$default6 = bleWriteDownloadCommand$default(r8, string211112, 4000, false, c20912, 4, null);
                    r9 = r8;
                    if (objBleWriteDownloadCommand$default6 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default6).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    StringBuilder sbAppend211119 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_SOUND_DB_START()).append(c).append(r9.sound_db_file_ver).append(',');
                    StringCompanionObject stringCompanionObject211119 = StringCompanionObject.INSTANCE;
                    Object[] objArr211119 = new Object[1];
                    objArr211119[z ? 1 : 0] = Boxing.boxInt(r9.sound_db_file_size);
                    String str1111111110 = String.format(str5, Arrays.copyOf(objArr211119, 1));
                    Intrinsics.checkNotNullExpressionValue(str1111111110, str);
                    String string211113 = sbAppend211119.append(str1111111110).toString();
                    c20912.L$0 = r9;
                    c20912.label = 11;
                    objBleWriteDownloadCommand$default7 = bleWriteDownloadCommand$default(r9, string211113, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default7 == coroutine_suspended) {
                        r10 = r9;
                        return coroutine_suspended;
                    }
                    r10 = r9;
                    if (!((Boolean) objBleWriteDownloadCommand$default7).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file4 = r10.file;
                    i8 = r10.sound_db_file_offset;
                    i9 = r10.sound_db_file_size;
                    c20912.L$0 = r10;
                    c20912.label = 12;
                    if (r10.writeFileData(file4, i8, i9, c20912) == coroutine_suspended) {
                        r13 = r10;
                        return coroutine_suspended;
                    }
                    r13 = r10;
                    StringBuilder sbAppend2111110 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_SOUND_DB_END()).append(c);
                    StringCompanionObject stringCompanionObject2111110 = StringCompanionObject.INSTANCE;
                    Object[] objArr2111110 = new Object[1];
                    objArr2111110[z ? 1 : 0] = Boxing.boxInt(r13.sound_db_file_checksum);
                    String str1111111111 = String.format(str5, Arrays.copyOf(objArr2111110, 1));
                    Intrinsics.checkNotNullExpressionValue(str1111111111, str);
                    String string211114 = sbAppend2111110.append(str1111111111).toString();
                    c20912.L$0 = r13;
                    c20912.label = 13;
                    objBleWriteDownloadCommand$default8 = bleWriteDownloadCommand$default(r13, string211114, 4000, false, c20912, 4, null);
                    r14 = r13;
                    if (objBleWriteDownloadCommand$default8 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default8).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    StringBuilder sbAppend2111111 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_GPS_DB_START()).append(c).append(r14.gps_db_file_ver).append(',');
                    StringCompanionObject stringCompanionObject2111111 = StringCompanionObject.INSTANCE;
                    Object[] objArr2111111 = new Object[1];
                    objArr2111111[z ? 1 : 0] = Boxing.boxInt(r14.gps_db_file_size);
                    String str1111111112 = String.format(str5, Arrays.copyOf(objArr2111111, 1));
                    Intrinsics.checkNotNullExpressionValue(str1111111112, str);
                    String string211115 = sbAppend2111111.append(str1111111112).toString();
                    c20912.L$0 = r14;
                    c20912.label = 14;
                    objBleWriteDownloadCommand$default9 = bleWriteDownloadCommand$default(r14, string211115, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default9 == coroutine_suspended) {
                        r16 = r14;
                        return coroutine_suspended;
                    }
                    r16 = r14;
                    if (!((Boolean) objBleWriteDownloadCommand$default9).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file5 = r16.file;
                    i10 = r16.gps_db_file_offset;
                    i11 = r16.gps_db_file_size;
                    c20912.L$0 = r16;
                    c20912.label = 15;
                    if (r16.writeFileData(file5, i10, i11, c20912) == coroutine_suspended) {
                        r17 = r16;
                        return coroutine_suspended;
                    }
                    r17 = r16;
                    StringBuilder sbAppend111111113 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_GPS_DB_END()).append(c);
                    StringCompanionObject stringCompanionObject111111113 = StringCompanionObject.INSTANCE;
                    Object[] objArr111111113 = new Object[1];
                    objArr111111113[z ? 1 : 0] = Boxing.boxInt(r17.gps_db_file_checksum);
                    String str1111111113 = String.format(str5, Arrays.copyOf(objArr111111113, 1));
                    Intrinsics.checkNotNullExpressionValue(str1111111113, str);
                    String string111111113 = sbAppend111111113.append(str1111111113).toString();
                    c20912.L$0 = r17;
                    c20912.label = 16;
                    objBleWriteDownloadCommand$default10 = bleWriteDownloadCommand$default(r17, string111111113, 4000, false, c20912, 4, null);
                    r18 = r17;
                    if (objBleWriteDownloadCommand$default10 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default10).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    StringBuilder sbAppend111111114 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE1_START()).append(c).append(r18.if1_file_ver).append(',');
                    StringCompanionObject stringCompanionObject111111114 = StringCompanionObject.INSTANCE;
                    Object[] objArr111111114 = new Object[1];
                    objArr111111114[z ? 1 : 0] = Boxing.boxInt(r18.if1_file_size);
                    String str1111111114 = String.format(str5, Arrays.copyOf(objArr111111114, 1));
                    Intrinsics.checkNotNullExpressionValue(str1111111114, str);
                    String string111111114 = sbAppend111111114.append(str1111111114).toString();
                    c20912.L$0 = r18;
                    c20912.label = 17;
                    objBleWriteDownloadCommand$default11 = bleWriteDownloadCommand$default(r18, string111111114, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default11 == coroutine_suspended) {
                        r19 = r18;
                        return coroutine_suspended;
                    }
                    r19 = r18;
                    if (!((Boolean) objBleWriteDownloadCommand$default11).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file6 = r19.file;
                    i12 = r19.if1_file_offset;
                    i13 = r19.if1_file_size;
                    c20912.L$0 = r19;
                    c20912.label = 18;
                    if (r19.writeFileData(file6, i12, i13, c20912) == coroutine_suspended) {
                        r20 = r19;
                        return coroutine_suspended;
                    }
                    r20 = r19;
                    StringBuilder sbAppend111111115 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE1_END()).append(c);
                    StringCompanionObject stringCompanionObject111111115 = StringCompanionObject.INSTANCE;
                    Object[] objArr111111115 = new Object[1];
                    objArr111111115[z ? 1 : 0] = Boxing.boxInt(r20.if1_file_checksum);
                    String str1111111115 = String.format(str5, Arrays.copyOf(objArr111111115, 1));
                    Intrinsics.checkNotNullExpressionValue(str1111111115, str);
                    String string111111115 = sbAppend111111115.append(str1111111115).toString();
                    c20912.L$0 = r20;
                    c20912.label = 19;
                    objBleWriteDownloadCommand$default12 = bleWriteDownloadCommand$default(r20, string111111115, 4000, false, c20912, 4, null);
                    r21 = r20;
                    if (objBleWriteDownloadCommand$default12 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default12).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    StringBuilder sbAppend111111116 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE2_START()).append(c).append(r21.if2_file_ver).append(',');
                    StringCompanionObject stringCompanionObject111111116 = StringCompanionObject.INSTANCE;
                    Object[] objArr111111116 = new Object[1];
                    objArr111111116[z ? 1 : 0] = Boxing.boxInt(r21.if2_file_size);
                    String str1111111116 = String.format(str5, Arrays.copyOf(objArr111111116, 1));
                    Intrinsics.checkNotNullExpressionValue(str1111111116, str);
                    String string111111116 = sbAppend111111116.append(str1111111116).toString();
                    c20912.L$0 = r21;
                    c20912.label = 20;
                    objBleWriteDownloadCommand$default13 = bleWriteDownloadCommand$default(r21, string111111116, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default13 == coroutine_suspended) {
                        r22 = r21;
                        return coroutine_suspended;
                    }
                    r22 = r21;
                    if (!((Boolean) objBleWriteDownloadCommand$default13).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file7 = r22.file;
                    i14 = r22.if2_file_offset;
                    i15 = r22.if2_file_size;
                    c20912.L$0 = r22;
                    c20912.label = 21;
                    if (r22.writeFileData(file7, i14, i15, c20912) == coroutine_suspended) {
                        r23 = r22;
                        return coroutine_suspended;
                    }
                    r23 = r22;
                    StringBuilder sbAppend111111117 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE2_END()).append(c);
                    StringCompanionObject stringCompanionObject111111117 = StringCompanionObject.INSTANCE;
                    Object[] objArr111111117 = new Object[1];
                    objArr111111117[z ? 1 : 0] = Boxing.boxInt(r23.if2_file_checksum);
                    String str2111119 = String.format(str5, Arrays.copyOf(objArr111111117, 1));
                    Intrinsics.checkNotNullExpressionValue(str2111119, str);
                    String string111111117 = sbAppend111111117.append(str2111119).toString();
                    c20912.L$0 = r23;
                    c20912.label = 22;
                    objBleWriteDownloadCommand$default14 = bleWriteDownloadCommand$default(r23, string111111117, 4000, false, c20912, 4, null);
                    r24 = r23;
                    if (objBleWriteDownloadCommand$default14 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default14).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    if (!StringsKt.contains$default(r24.getSharePref().getDeviceName(), "R9", z, 2, obj)) {
                        break;
                    }
                    r27 = r24;
                    StringBuilder sbAppend111111118 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE3_START()).append(c).append(r24.if3_file_ver).append(',');
                    StringCompanionObject stringCompanionObject111111118 = StringCompanionObject.INSTANCE;
                    Object[] objArr111111118 = new Object[1];
                    objArr111111118[z ? 1 : 0] = Boxing.boxInt(r24.if3_file_size);
                    String str21111110 = String.format(str5, Arrays.copyOf(objArr111111118, 1));
                    Intrinsics.checkNotNullExpressionValue(str21111110, str);
                    String string111111118 = sbAppend111111118.append(str21111110).toString();
                    c20912.L$0 = r24;
                    c20912.label = 23;
                    objBleWriteDownloadCommand$default15 = bleWriteDownloadCommand$default(r24, string111111118, 4000, false, c20912, 4, null);
                    r25 = r24;
                    if (objBleWriteDownloadCommand$default15 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default15).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file8 = r25.file;
                    i16 = r25.if3_file_offset;
                    i17 = r25.if3_file_size;
                    c20912.L$0 = r25;
                    c20912.label = 24;
                    if (r25.writeFileData(file8, i16, i17, c20912) == coroutine_suspended) {
                        r26 = r25;
                        return coroutine_suspended;
                    }
                    r26 = r25;
                    StringBuilder sbAppend111111119 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE3_END()).append(c);
                    StringCompanionObject stringCompanionObject111111119 = StringCompanionObject.INSTANCE;
                    Object[] objArr111111119 = new Object[1];
                    objArr111111119[z ? 1 : 0] = Boxing.boxInt(r26.if3_file_checksum);
                    String str21111111 = String.format(str5, Arrays.copyOf(objArr111111119, 1));
                    Intrinsics.checkNotNullExpressionValue(str21111111, str);
                    String string111111119 = sbAppend111111119.append(str21111111).toString();
                    c20912.L$0 = r26;
                    c20912.label = 25;
                    objBleWriteDownloadCommand$default16 = bleWriteDownloadCommand$default(r26, string111111119, 4000, false, c20912, 4, null);
                    r28 = r26;
                    if (objBleWriteDownloadCommand$default16 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    r27 = r28;
                    if (!((Boolean) objBleWriteDownloadCommand$default16).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    r27 = r24;
                    StringBuilder sbAppend1111111110 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_BLE_START()).append(c).append(r27.ble_file_ver).append(',');
                    StringCompanionObject stringCompanionObject1111111110 = StringCompanionObject.INSTANCE;
                    Object[] objArr1111111110 = new Object[1];
                    objArr1111111110[z ? 1 : 0] = Boxing.boxInt(r27.ble_file_size);
                    String str21111112 = String.format(str5, Arrays.copyOf(objArr1111111110, 1));
                    Intrinsics.checkNotNullExpressionValue(str21111112, str);
                    String string1111111110 = sbAppend1111111110.append(str21111112).toString();
                    c20912.L$0 = r27;
                    c20912.label = 26;
                    objBleWriteDownloadCommand$default17 = bleWriteDownloadCommand$default(r27, string1111111110, 4000, false, c20912, 4, null);
                    r29 = r27;
                    if (objBleWriteDownloadCommand$default17 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default17).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file9 = r29.file;
                    i18 = r29.ble_file_offset;
                    i19 = r29.ble_file_size;
                    c20912.L$0 = r29;
                    c20912.label = 27;
                    if (r29.writeFileData(file9, i18, i19, c20912) == coroutine_suspended) {
                        r30 = r29;
                        return coroutine_suspended;
                    }
                    r30 = r29;
                    StringBuilder sbAppend1111111111 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_BLE_END()).append(c);
                    StringCompanionObject stringCompanionObject1111111111 = StringCompanionObject.INSTANCE;
                    Object[] objArr1111111111 = new Object[1];
                    objArr1111111111[z ? 1 : 0] = Boxing.boxInt(r30.ble_file_checksum);
                    String str21111113 = String.format(str5, Arrays.copyOf(objArr1111111111, 1));
                    Intrinsics.checkNotNullExpressionValue(str21111113, str);
                    String string1111111111 = sbAppend1111111111.append(str21111113).toString();
                    c20912.L$0 = r30;
                    c20912.label = 28;
                    objBleWriteDownloadCommand$default18 = bleWriteDownloadCommand$default(r30, string1111111111, 4000, false, c20912, 4, null);
                    r31 = r30;
                    if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    String str21111114 = BluetoothUtils.INSTANCE.getFD_END_COM() + ":1";
                    r31.getSharePref().setFwDownloadComplete(true);
                    r31.getSharePref().setFwFlashing(z);
                    r31.getMyApp().getFirmwareUpdateProcessBT().postValue(new UpdateProgressModel(FIrmWareUpdateProcess.FILE_INSTALL_FINISH, "", ""));
                    c20912.L$0 = r31;
                    c20912.label = 29;
                    objBleWriteDownloadCommand$default18 = r31.bleWriteDownloadCommand(str21111114, PathInterpolatorCompat.MAX_NUM_POINTS, true, c20912);
                    if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                        r32 = r31;
                        return coroutine_suspended;
                    }
                    r32 = r31;
                    if (((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                        str3 = str4;
                        Log.d(str3, "recovery update return flashBLEFile()");
                        CustomLog.INSTANCE.writeFile("recovery update return flashBLEFile()", r32.context);
                        if (r32.getSharePref().isBluetoothConnected()) {
                            c20912.L$0 = r32;
                            c20912.label = 30;
                            objFlashBLEFile = r32.flashBLEFile(c20912);
                            if (objFlashBLEFile == coroutine_suspended) {
                                r33 = r32;
                                return coroutine_suspended;
                            }
                            r33 = r32;
                            if (!((Boolean) objFlashBLEFile).booleanValue()) {
                                r33.getSharePref().setFwFlashing(z);
                                Log.d(str3, "isFwFlashing = false");
                            }
                            return Boxing.boxBoolean(true);
                        }
                        return Boxing.boxBoolean(true);
                    }
                    Log.d(str4, "recovery update return truue");
                    return Boxing.boxBoolean(true);
                case 9:
                    FirmWareUpdateWorker firmWareUpdateWorker9 = (FirmWareUpdateWorker) c20912.L$0;
                    ResultKt.throwOnFailure(objBleWriteDownloadCommand$default18);
                    str5 = "%08X";
                    z = false;
                    obj = null;
                    str4 = "TAG_FW";
                    coroutine_suspended = coroutine_suspended;
                    c20912 = c20912;
                    str = "format(...)";
                    c = ':';
                    r8 = firmWareUpdateWorker9;
                    r8 = r7;
                    StringBuilder sbAppend2111112 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_GPS_END()).append(c);
                    StringCompanionObject stringCompanionObject2111112 = StringCompanionObject.INSTANCE;
                    Object[] objArr2111112 = new Object[1];
                    objArr2111112[z ? 1 : 0] = Boxing.boxInt(r8.gps_file_checksum);
                    String str1111111117 = String.format(str5, Arrays.copyOf(objArr2111112, 1));
                    Intrinsics.checkNotNullExpressionValue(str1111111117, str);
                    String string211116 = sbAppend2111112.append(str1111111117).toString();
                    c20912.L$0 = r8;
                    c20912.label = 10;
                    objBleWriteDownloadCommand$default6 = bleWriteDownloadCommand$default(r8, string211116, 4000, false, c20912, 4, null);
                    r9 = r8;
                    if (objBleWriteDownloadCommand$default6 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default6).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    StringBuilder sbAppend2111113 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_SOUND_DB_START()).append(c).append(r9.sound_db_file_ver).append(',');
                    StringCompanionObject stringCompanionObject2111113 = StringCompanionObject.INSTANCE;
                    Object[] objArr2111113 = new Object[1];
                    objArr2111113[z ? 1 : 0] = Boxing.boxInt(r9.sound_db_file_size);
                    String str1111111118 = String.format(str5, Arrays.copyOf(objArr2111113, 1));
                    Intrinsics.checkNotNullExpressionValue(str1111111118, str);
                    String string211117 = sbAppend2111113.append(str1111111118).toString();
                    c20912.L$0 = r9;
                    c20912.label = 11;
                    objBleWriteDownloadCommand$default7 = bleWriteDownloadCommand$default(r9, string211117, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default7 == coroutine_suspended) {
                        r10 = r9;
                        return coroutine_suspended;
                    }
                    r10 = r9;
                    if (!((Boolean) objBleWriteDownloadCommand$default7).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file4 = r10.file;
                    i8 = r10.sound_db_file_offset;
                    i9 = r10.sound_db_file_size;
                    c20912.L$0 = r10;
                    c20912.label = 12;
                    if (r10.writeFileData(file4, i8, i9, c20912) == coroutine_suspended) {
                        r13 = r10;
                        return coroutine_suspended;
                    }
                    r13 = r10;
                    StringBuilder sbAppend2111114 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_SOUND_DB_END()).append(c);
                    StringCompanionObject stringCompanionObject2111114 = StringCompanionObject.INSTANCE;
                    Object[] objArr2111114 = new Object[1];
                    objArr2111114[z ? 1 : 0] = Boxing.boxInt(r13.sound_db_file_checksum);
                    String str1111111119 = String.format(str5, Arrays.copyOf(objArr2111114, 1));
                    Intrinsics.checkNotNullExpressionValue(str1111111119, str);
                    String string211118 = sbAppend2111114.append(str1111111119).toString();
                    c20912.L$0 = r13;
                    c20912.label = 13;
                    objBleWriteDownloadCommand$default8 = bleWriteDownloadCommand$default(r13, string211118, 4000, false, c20912, 4, null);
                    r14 = r13;
                    if (objBleWriteDownloadCommand$default8 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default8).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    StringBuilder sbAppend2111115 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_GPS_DB_START()).append(c).append(r14.gps_db_file_ver).append(',');
                    StringCompanionObject stringCompanionObject2111115 = StringCompanionObject.INSTANCE;
                    Object[] objArr2111115 = new Object[1];
                    objArr2111115[z ? 1 : 0] = Boxing.boxInt(r14.gps_db_file_size);
                    String str11111111110 = String.format(str5, Arrays.copyOf(objArr2111115, 1));
                    Intrinsics.checkNotNullExpressionValue(str11111111110, str);
                    String string211119 = sbAppend2111115.append(str11111111110).toString();
                    c20912.L$0 = r14;
                    c20912.label = 14;
                    objBleWriteDownloadCommand$default9 = bleWriteDownloadCommand$default(r14, string211119, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default9 == coroutine_suspended) {
                        r16 = r14;
                        return coroutine_suspended;
                    }
                    r16 = r14;
                    if (!((Boolean) objBleWriteDownloadCommand$default9).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file5 = r16.file;
                    i10 = r16.gps_db_file_offset;
                    i11 = r16.gps_db_file_size;
                    c20912.L$0 = r16;
                    c20912.label = 15;
                    if (r16.writeFileData(file5, i10, i11, c20912) == coroutine_suspended) {
                        r17 = r16;
                        return coroutine_suspended;
                    }
                    r17 = r16;
                    StringBuilder sbAppend1111111112 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_GPS_DB_END()).append(c);
                    StringCompanionObject stringCompanionObject1111111112 = StringCompanionObject.INSTANCE;
                    Object[] objArr1111111112 = new Object[1];
                    objArr1111111112[z ? 1 : 0] = Boxing.boxInt(r17.gps_db_file_checksum);
                    String str11111111111 = String.format(str5, Arrays.copyOf(objArr1111111112, 1));
                    Intrinsics.checkNotNullExpressionValue(str11111111111, str);
                    String string1111111112 = sbAppend1111111112.append(str11111111111).toString();
                    c20912.L$0 = r17;
                    c20912.label = 16;
                    objBleWriteDownloadCommand$default10 = bleWriteDownloadCommand$default(r17, string1111111112, 4000, false, c20912, 4, null);
                    r18 = r17;
                    if (objBleWriteDownloadCommand$default10 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default10).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    StringBuilder sbAppend1111111113 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE1_START()).append(c).append(r18.if1_file_ver).append(',');
                    StringCompanionObject stringCompanionObject1111111113 = StringCompanionObject.INSTANCE;
                    Object[] objArr1111111113 = new Object[1];
                    objArr1111111113[z ? 1 : 0] = Boxing.boxInt(r18.if1_file_size);
                    String str11111111112 = String.format(str5, Arrays.copyOf(objArr1111111113, 1));
                    Intrinsics.checkNotNullExpressionValue(str11111111112, str);
                    String string1111111113 = sbAppend1111111113.append(str11111111112).toString();
                    c20912.L$0 = r18;
                    c20912.label = 17;
                    objBleWriteDownloadCommand$default11 = bleWriteDownloadCommand$default(r18, string1111111113, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default11 == coroutine_suspended) {
                        r19 = r18;
                        return coroutine_suspended;
                    }
                    r19 = r18;
                    if (!((Boolean) objBleWriteDownloadCommand$default11).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file6 = r19.file;
                    i12 = r19.if1_file_offset;
                    i13 = r19.if1_file_size;
                    c20912.L$0 = r19;
                    c20912.label = 18;
                    if (r19.writeFileData(file6, i12, i13, c20912) == coroutine_suspended) {
                        r20 = r19;
                        return coroutine_suspended;
                    }
                    r20 = r19;
                    StringBuilder sbAppend1111111114 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE1_END()).append(c);
                    StringCompanionObject stringCompanionObject1111111114 = StringCompanionObject.INSTANCE;
                    Object[] objArr1111111114 = new Object[1];
                    objArr1111111114[z ? 1 : 0] = Boxing.boxInt(r20.if1_file_checksum);
                    String str11111111113 = String.format(str5, Arrays.copyOf(objArr1111111114, 1));
                    Intrinsics.checkNotNullExpressionValue(str11111111113, str);
                    String string1111111114 = sbAppend1111111114.append(str11111111113).toString();
                    c20912.L$0 = r20;
                    c20912.label = 19;
                    objBleWriteDownloadCommand$default12 = bleWriteDownloadCommand$default(r20, string1111111114, 4000, false, c20912, 4, null);
                    r21 = r20;
                    if (objBleWriteDownloadCommand$default12 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default12).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    StringBuilder sbAppend1111111115 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE2_START()).append(c).append(r21.if2_file_ver).append(',');
                    StringCompanionObject stringCompanionObject1111111115 = StringCompanionObject.INSTANCE;
                    Object[] objArr1111111115 = new Object[1];
                    objArr1111111115[z ? 1 : 0] = Boxing.boxInt(r21.if2_file_size);
                    String str11111111114 = String.format(str5, Arrays.copyOf(objArr1111111115, 1));
                    Intrinsics.checkNotNullExpressionValue(str11111111114, str);
                    String string1111111115 = sbAppend1111111115.append(str11111111114).toString();
                    c20912.L$0 = r21;
                    c20912.label = 20;
                    objBleWriteDownloadCommand$default13 = bleWriteDownloadCommand$default(r21, string1111111115, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default13 == coroutine_suspended) {
                        r22 = r21;
                        return coroutine_suspended;
                    }
                    r22 = r21;
                    if (!((Boolean) objBleWriteDownloadCommand$default13).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file7 = r22.file;
                    i14 = r22.if2_file_offset;
                    i15 = r22.if2_file_size;
                    c20912.L$0 = r22;
                    c20912.label = 21;
                    if (r22.writeFileData(file7, i14, i15, c20912) == coroutine_suspended) {
                        r23 = r22;
                        return coroutine_suspended;
                    }
                    r23 = r22;
                    StringBuilder sbAppend1111111116 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE2_END()).append(c);
                    StringCompanionObject stringCompanionObject1111111116 = StringCompanionObject.INSTANCE;
                    Object[] objArr1111111116 = new Object[1];
                    objArr1111111116[z ? 1 : 0] = Boxing.boxInt(r23.if2_file_checksum);
                    String str21111115 = String.format(str5, Arrays.copyOf(objArr1111111116, 1));
                    Intrinsics.checkNotNullExpressionValue(str21111115, str);
                    String string1111111116 = sbAppend1111111116.append(str21111115).toString();
                    c20912.L$0 = r23;
                    c20912.label = 22;
                    objBleWriteDownloadCommand$default14 = bleWriteDownloadCommand$default(r23, string1111111116, 4000, false, c20912, 4, null);
                    r24 = r23;
                    if (objBleWriteDownloadCommand$default14 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default14).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    if (!StringsKt.contains$default(r24.getSharePref().getDeviceName(), "R9", z, 2, obj)) {
                        break;
                    }
                    r27 = r24;
                    StringBuilder sbAppend1111111117 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE3_START()).append(c).append(r24.if3_file_ver).append(',');
                    StringCompanionObject stringCompanionObject1111111117 = StringCompanionObject.INSTANCE;
                    Object[] objArr1111111117 = new Object[1];
                    objArr1111111117[z ? 1 : 0] = Boxing.boxInt(r24.if3_file_size);
                    String str21111116 = String.format(str5, Arrays.copyOf(objArr1111111117, 1));
                    Intrinsics.checkNotNullExpressionValue(str21111116, str);
                    String string1111111117 = sbAppend1111111117.append(str21111116).toString();
                    c20912.L$0 = r24;
                    c20912.label = 23;
                    objBleWriteDownloadCommand$default15 = bleWriteDownloadCommand$default(r24, string1111111117, 4000, false, c20912, 4, null);
                    r25 = r24;
                    if (objBleWriteDownloadCommand$default15 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default15).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file8 = r25.file;
                    i16 = r25.if3_file_offset;
                    i17 = r25.if3_file_size;
                    c20912.L$0 = r25;
                    c20912.label = 24;
                    if (r25.writeFileData(file8, i16, i17, c20912) == coroutine_suspended) {
                        r26 = r25;
                        return coroutine_suspended;
                    }
                    r26 = r25;
                    StringBuilder sbAppend1111111118 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE3_END()).append(c);
                    StringCompanionObject stringCompanionObject1111111118 = StringCompanionObject.INSTANCE;
                    Object[] objArr1111111118 = new Object[1];
                    objArr1111111118[z ? 1 : 0] = Boxing.boxInt(r26.if3_file_checksum);
                    String str21111117 = String.format(str5, Arrays.copyOf(objArr1111111118, 1));
                    Intrinsics.checkNotNullExpressionValue(str21111117, str);
                    String string1111111118 = sbAppend1111111118.append(str21111117).toString();
                    c20912.L$0 = r26;
                    c20912.label = 25;
                    objBleWriteDownloadCommand$default16 = bleWriteDownloadCommand$default(r26, string1111111118, 4000, false, c20912, 4, null);
                    r28 = r26;
                    if (objBleWriteDownloadCommand$default16 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    r27 = r28;
                    if (!((Boolean) objBleWriteDownloadCommand$default16).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    r27 = r24;
                    StringBuilder sbAppend1111111119 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_BLE_START()).append(c).append(r27.ble_file_ver).append(',');
                    StringCompanionObject stringCompanionObject1111111119 = StringCompanionObject.INSTANCE;
                    Object[] objArr1111111119 = new Object[1];
                    objArr1111111119[z ? 1 : 0] = Boxing.boxInt(r27.ble_file_size);
                    String str21111118 = String.format(str5, Arrays.copyOf(objArr1111111119, 1));
                    Intrinsics.checkNotNullExpressionValue(str21111118, str);
                    String string1111111119 = sbAppend1111111119.append(str21111118).toString();
                    c20912.L$0 = r27;
                    c20912.label = 26;
                    objBleWriteDownloadCommand$default17 = bleWriteDownloadCommand$default(r27, string1111111119, 4000, false, c20912, 4, null);
                    r29 = r27;
                    if (objBleWriteDownloadCommand$default17 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default17).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file9 = r29.file;
                    i18 = r29.ble_file_offset;
                    i19 = r29.ble_file_size;
                    c20912.L$0 = r29;
                    c20912.label = 27;
                    if (r29.writeFileData(file9, i18, i19, c20912) == coroutine_suspended) {
                        r30 = r29;
                        return coroutine_suspended;
                    }
                    r30 = r29;
                    StringBuilder sbAppend11111111110 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_BLE_END()).append(c);
                    StringCompanionObject stringCompanionObject11111111110 = StringCompanionObject.INSTANCE;
                    Object[] objArr11111111110 = new Object[1];
                    objArr11111111110[z ? 1 : 0] = Boxing.boxInt(r30.ble_file_checksum);
                    String str21111119 = String.format(str5, Arrays.copyOf(objArr11111111110, 1));
                    Intrinsics.checkNotNullExpressionValue(str21111119, str);
                    String string11111111110 = sbAppend11111111110.append(str21111119).toString();
                    c20912.L$0 = r30;
                    c20912.label = 28;
                    objBleWriteDownloadCommand$default18 = bleWriteDownloadCommand$default(r30, string11111111110, 4000, false, c20912, 4, null);
                    r31 = r30;
                    if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    String str211111110 = BluetoothUtils.INSTANCE.getFD_END_COM() + ":1";
                    r31.getSharePref().setFwDownloadComplete(true);
                    r31.getSharePref().setFwFlashing(z);
                    r31.getMyApp().getFirmwareUpdateProcessBT().postValue(new UpdateProgressModel(FIrmWareUpdateProcess.FILE_INSTALL_FINISH, "", ""));
                    c20912.L$0 = r31;
                    c20912.label = 29;
                    objBleWriteDownloadCommand$default18 = r31.bleWriteDownloadCommand(str211111110, PathInterpolatorCompat.MAX_NUM_POINTS, true, c20912);
                    if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                        r32 = r31;
                        return coroutine_suspended;
                    }
                    r32 = r31;
                    if (((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                        str3 = str4;
                        Log.d(str3, "recovery update return flashBLEFile()");
                        CustomLog.INSTANCE.writeFile("recovery update return flashBLEFile()", r32.context);
                        if (r32.getSharePref().isBluetoothConnected()) {
                            c20912.L$0 = r32;
                            c20912.label = 30;
                            objFlashBLEFile = r32.flashBLEFile(c20912);
                            if (objFlashBLEFile == coroutine_suspended) {
                                r33 = r32;
                                return coroutine_suspended;
                            }
                            r33 = r32;
                            if (!((Boolean) objFlashBLEFile).booleanValue()) {
                                r33.getSharePref().setFwFlashing(z);
                                Log.d(str3, "isFwFlashing = false");
                            }
                            return Boxing.boxBoolean(true);
                        }
                        return Boxing.boxBoolean(true);
                    }
                    Log.d(str4, "recovery update return truue");
                    return Boxing.boxBoolean(true);
                case 10:
                    FirmWareUpdateWorker firmWareUpdateWorker10 = (FirmWareUpdateWorker) c20912.L$0;
                    ResultKt.throwOnFailure(objBleWriteDownloadCommand$default18);
                    z = false;
                    obj = null;
                    str4 = "TAG_FW";
                    coroutine_suspended = coroutine_suspended;
                    c20912 = c20912;
                    c = ':';
                    objBleWriteDownloadCommand$default6 = objBleWriteDownloadCommand$default18;
                    str5 = "%08X";
                    str = "format(...)";
                    r9 = firmWareUpdateWorker10;
                    if (!((Boolean) objBleWriteDownloadCommand$default6).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    StringBuilder sbAppend2111116 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_SOUND_DB_START()).append(c).append(r9.sound_db_file_ver).append(',');
                    StringCompanionObject stringCompanionObject2111116 = StringCompanionObject.INSTANCE;
                    Object[] objArr2111116 = new Object[1];
                    objArr2111116[z ? 1 : 0] = Boxing.boxInt(r9.sound_db_file_size);
                    String str11111111115 = String.format(str5, Arrays.copyOf(objArr2111116, 1));
                    Intrinsics.checkNotNullExpressionValue(str11111111115, str);
                    String string2111110 = sbAppend2111116.append(str11111111115).toString();
                    c20912.L$0 = r9;
                    c20912.label = 11;
                    objBleWriteDownloadCommand$default7 = bleWriteDownloadCommand$default(r9, string2111110, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default7 == coroutine_suspended) {
                        r10 = r9;
                        return coroutine_suspended;
                    }
                    r10 = r9;
                    if (!((Boolean) objBleWriteDownloadCommand$default7).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file4 = r10.file;
                    i8 = r10.sound_db_file_offset;
                    i9 = r10.sound_db_file_size;
                    c20912.L$0 = r10;
                    c20912.label = 12;
                    if (r10.writeFileData(file4, i8, i9, c20912) == coroutine_suspended) {
                        r13 = r10;
                        return coroutine_suspended;
                    }
                    r13 = r10;
                    StringBuilder sbAppend2111117 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_SOUND_DB_END()).append(c);
                    StringCompanionObject stringCompanionObject2111117 = StringCompanionObject.INSTANCE;
                    Object[] objArr2111117 = new Object[1];
                    objArr2111117[z ? 1 : 0] = Boxing.boxInt(r13.sound_db_file_checksum);
                    String str11111111116 = String.format(str5, Arrays.copyOf(objArr2111117, 1));
                    Intrinsics.checkNotNullExpressionValue(str11111111116, str);
                    String string2111111 = sbAppend2111117.append(str11111111116).toString();
                    c20912.L$0 = r13;
                    c20912.label = 13;
                    objBleWriteDownloadCommand$default8 = bleWriteDownloadCommand$default(r13, string2111111, 4000, false, c20912, 4, null);
                    r14 = r13;
                    if (objBleWriteDownloadCommand$default8 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default8).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    StringBuilder sbAppend2111118 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_GPS_DB_START()).append(c).append(r14.gps_db_file_ver).append(',');
                    StringCompanionObject stringCompanionObject2111118 = StringCompanionObject.INSTANCE;
                    Object[] objArr2111118 = new Object[1];
                    objArr2111118[z ? 1 : 0] = Boxing.boxInt(r14.gps_db_file_size);
                    String str11111111117 = String.format(str5, Arrays.copyOf(objArr2111118, 1));
                    Intrinsics.checkNotNullExpressionValue(str11111111117, str);
                    String string2111112 = sbAppend2111118.append(str11111111117).toString();
                    c20912.L$0 = r14;
                    c20912.label = 14;
                    objBleWriteDownloadCommand$default9 = bleWriteDownloadCommand$default(r14, string2111112, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default9 == coroutine_suspended) {
                        r16 = r14;
                        return coroutine_suspended;
                    }
                    r16 = r14;
                    if (!((Boolean) objBleWriteDownloadCommand$default9).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file5 = r16.file;
                    i10 = r16.gps_db_file_offset;
                    i11 = r16.gps_db_file_size;
                    c20912.L$0 = r16;
                    c20912.label = 15;
                    if (r16.writeFileData(file5, i10, i11, c20912) == coroutine_suspended) {
                        r17 = r16;
                        return coroutine_suspended;
                    }
                    r17 = r16;
                    StringBuilder sbAppend11111111111 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_GPS_DB_END()).append(c);
                    StringCompanionObject stringCompanionObject11111111111 = StringCompanionObject.INSTANCE;
                    Object[] objArr11111111111 = new Object[1];
                    objArr11111111111[z ? 1 : 0] = Boxing.boxInt(r17.gps_db_file_checksum);
                    String str11111111118 = String.format(str5, Arrays.copyOf(objArr11111111111, 1));
                    Intrinsics.checkNotNullExpressionValue(str11111111118, str);
                    String string11111111111 = sbAppend11111111111.append(str11111111118).toString();
                    c20912.L$0 = r17;
                    c20912.label = 16;
                    objBleWriteDownloadCommand$default10 = bleWriteDownloadCommand$default(r17, string11111111111, 4000, false, c20912, 4, null);
                    r18 = r17;
                    if (objBleWriteDownloadCommand$default10 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default10).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    StringBuilder sbAppend11111111112 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE1_START()).append(c).append(r18.if1_file_ver).append(',');
                    StringCompanionObject stringCompanionObject11111111112 = StringCompanionObject.INSTANCE;
                    Object[] objArr11111111112 = new Object[1];
                    objArr11111111112[z ? 1 : 0] = Boxing.boxInt(r18.if1_file_size);
                    String str11111111119 = String.format(str5, Arrays.copyOf(objArr11111111112, 1));
                    Intrinsics.checkNotNullExpressionValue(str11111111119, str);
                    String string11111111112 = sbAppend11111111112.append(str11111111119).toString();
                    c20912.L$0 = r18;
                    c20912.label = 17;
                    objBleWriteDownloadCommand$default11 = bleWriteDownloadCommand$default(r18, string11111111112, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default11 == coroutine_suspended) {
                        r19 = r18;
                        return coroutine_suspended;
                    }
                    r19 = r18;
                    if (!((Boolean) objBleWriteDownloadCommand$default11).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file6 = r19.file;
                    i12 = r19.if1_file_offset;
                    i13 = r19.if1_file_size;
                    c20912.L$0 = r19;
                    c20912.label = 18;
                    if (r19.writeFileData(file6, i12, i13, c20912) == coroutine_suspended) {
                        r20 = r19;
                        return coroutine_suspended;
                    }
                    r20 = r19;
                    StringBuilder sbAppend11111111113 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE1_END()).append(c);
                    StringCompanionObject stringCompanionObject11111111113 = StringCompanionObject.INSTANCE;
                    Object[] objArr11111111113 = new Object[1];
                    objArr11111111113[z ? 1 : 0] = Boxing.boxInt(r20.if1_file_checksum);
                    String str111111111110 = String.format(str5, Arrays.copyOf(objArr11111111113, 1));
                    Intrinsics.checkNotNullExpressionValue(str111111111110, str);
                    String string11111111113 = sbAppend11111111113.append(str111111111110).toString();
                    c20912.L$0 = r20;
                    c20912.label = 19;
                    objBleWriteDownloadCommand$default12 = bleWriteDownloadCommand$default(r20, string11111111113, 4000, false, c20912, 4, null);
                    r21 = r20;
                    if (objBleWriteDownloadCommand$default12 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default12).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    StringBuilder sbAppend11111111114 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE2_START()).append(c).append(r21.if2_file_ver).append(',');
                    StringCompanionObject stringCompanionObject11111111114 = StringCompanionObject.INSTANCE;
                    Object[] objArr11111111114 = new Object[1];
                    objArr11111111114[z ? 1 : 0] = Boxing.boxInt(r21.if2_file_size);
                    String str111111111111 = String.format(str5, Arrays.copyOf(objArr11111111114, 1));
                    Intrinsics.checkNotNullExpressionValue(str111111111111, str);
                    String string11111111114 = sbAppend11111111114.append(str111111111111).toString();
                    c20912.L$0 = r21;
                    c20912.label = 20;
                    objBleWriteDownloadCommand$default13 = bleWriteDownloadCommand$default(r21, string11111111114, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default13 == coroutine_suspended) {
                        r22 = r21;
                        return coroutine_suspended;
                    }
                    r22 = r21;
                    if (!((Boolean) objBleWriteDownloadCommand$default13).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file7 = r22.file;
                    i14 = r22.if2_file_offset;
                    i15 = r22.if2_file_size;
                    c20912.L$0 = r22;
                    c20912.label = 21;
                    if (r22.writeFileData(file7, i14, i15, c20912) == coroutine_suspended) {
                        r23 = r22;
                        return coroutine_suspended;
                    }
                    r23 = r22;
                    StringBuilder sbAppend11111111115 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE2_END()).append(c);
                    StringCompanionObject stringCompanionObject11111111115 = StringCompanionObject.INSTANCE;
                    Object[] objArr11111111115 = new Object[1];
                    objArr11111111115[z ? 1 : 0] = Boxing.boxInt(r23.if2_file_checksum);
                    String str211111111 = String.format(str5, Arrays.copyOf(objArr11111111115, 1));
                    Intrinsics.checkNotNullExpressionValue(str211111111, str);
                    String string11111111115 = sbAppend11111111115.append(str211111111).toString();
                    c20912.L$0 = r23;
                    c20912.label = 22;
                    objBleWriteDownloadCommand$default14 = bleWriteDownloadCommand$default(r23, string11111111115, 4000, false, c20912, 4, null);
                    r24 = r23;
                    if (objBleWriteDownloadCommand$default14 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default14).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    if (!StringsKt.contains$default(r24.getSharePref().getDeviceName(), "R9", z, 2, obj)) {
                        break;
                    }
                    r27 = r24;
                    StringBuilder sbAppend11111111116 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE3_START()).append(c).append(r24.if3_file_ver).append(',');
                    StringCompanionObject stringCompanionObject11111111116 = StringCompanionObject.INSTANCE;
                    Object[] objArr11111111116 = new Object[1];
                    objArr11111111116[z ? 1 : 0] = Boxing.boxInt(r24.if3_file_size);
                    String str211111112 = String.format(str5, Arrays.copyOf(objArr11111111116, 1));
                    Intrinsics.checkNotNullExpressionValue(str211111112, str);
                    String string11111111116 = sbAppend11111111116.append(str211111112).toString();
                    c20912.L$0 = r24;
                    c20912.label = 23;
                    objBleWriteDownloadCommand$default15 = bleWriteDownloadCommand$default(r24, string11111111116, 4000, false, c20912, 4, null);
                    r25 = r24;
                    if (objBleWriteDownloadCommand$default15 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default15).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file8 = r25.file;
                    i16 = r25.if3_file_offset;
                    i17 = r25.if3_file_size;
                    c20912.L$0 = r25;
                    c20912.label = 24;
                    if (r25.writeFileData(file8, i16, i17, c20912) == coroutine_suspended) {
                        r26 = r25;
                        return coroutine_suspended;
                    }
                    r26 = r25;
                    StringBuilder sbAppend11111111117 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE3_END()).append(c);
                    StringCompanionObject stringCompanionObject11111111117 = StringCompanionObject.INSTANCE;
                    Object[] objArr11111111117 = new Object[1];
                    objArr11111111117[z ? 1 : 0] = Boxing.boxInt(r26.if3_file_checksum);
                    String str211111113 = String.format(str5, Arrays.copyOf(objArr11111111117, 1));
                    Intrinsics.checkNotNullExpressionValue(str211111113, str);
                    String string11111111117 = sbAppend11111111117.append(str211111113).toString();
                    c20912.L$0 = r26;
                    c20912.label = 25;
                    objBleWriteDownloadCommand$default16 = bleWriteDownloadCommand$default(r26, string11111111117, 4000, false, c20912, 4, null);
                    r28 = r26;
                    if (objBleWriteDownloadCommand$default16 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    r27 = r28;
                    if (!((Boolean) objBleWriteDownloadCommand$default16).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    r27 = r24;
                    StringBuilder sbAppend11111111118 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_BLE_START()).append(c).append(r27.ble_file_ver).append(',');
                    StringCompanionObject stringCompanionObject11111111118 = StringCompanionObject.INSTANCE;
                    Object[] objArr11111111118 = new Object[1];
                    objArr11111111118[z ? 1 : 0] = Boxing.boxInt(r27.ble_file_size);
                    String str211111114 = String.format(str5, Arrays.copyOf(objArr11111111118, 1));
                    Intrinsics.checkNotNullExpressionValue(str211111114, str);
                    String string11111111118 = sbAppend11111111118.append(str211111114).toString();
                    c20912.L$0 = r27;
                    c20912.label = 26;
                    objBleWriteDownloadCommand$default17 = bleWriteDownloadCommand$default(r27, string11111111118, 4000, false, c20912, 4, null);
                    r29 = r27;
                    if (objBleWriteDownloadCommand$default17 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default17).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file9 = r29.file;
                    i18 = r29.ble_file_offset;
                    i19 = r29.ble_file_size;
                    c20912.L$0 = r29;
                    c20912.label = 27;
                    if (r29.writeFileData(file9, i18, i19, c20912) == coroutine_suspended) {
                        r30 = r29;
                        return coroutine_suspended;
                    }
                    r30 = r29;
                    StringBuilder sbAppend11111111119 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_BLE_END()).append(c);
                    StringCompanionObject stringCompanionObject11111111119 = StringCompanionObject.INSTANCE;
                    Object[] objArr11111111119 = new Object[1];
                    objArr11111111119[z ? 1 : 0] = Boxing.boxInt(r30.ble_file_checksum);
                    String str211111115 = String.format(str5, Arrays.copyOf(objArr11111111119, 1));
                    Intrinsics.checkNotNullExpressionValue(str211111115, str);
                    String string11111111119 = sbAppend11111111119.append(str211111115).toString();
                    c20912.L$0 = r30;
                    c20912.label = 28;
                    objBleWriteDownloadCommand$default18 = bleWriteDownloadCommand$default(r30, string11111111119, 4000, false, c20912, 4, null);
                    r31 = r30;
                    if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    String str211111116 = BluetoothUtils.INSTANCE.getFD_END_COM() + ":1";
                    r31.getSharePref().setFwDownloadComplete(true);
                    r31.getSharePref().setFwFlashing(z);
                    r31.getMyApp().getFirmwareUpdateProcessBT().postValue(new UpdateProgressModel(FIrmWareUpdateProcess.FILE_INSTALL_FINISH, "", ""));
                    c20912.L$0 = r31;
                    c20912.label = 29;
                    objBleWriteDownloadCommand$default18 = r31.bleWriteDownloadCommand(str211111116, PathInterpolatorCompat.MAX_NUM_POINTS, true, c20912);
                    if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                        r32 = r31;
                        return coroutine_suspended;
                    }
                    r32 = r31;
                    if (((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                        str3 = str4;
                        Log.d(str3, "recovery update return flashBLEFile()");
                        CustomLog.INSTANCE.writeFile("recovery update return flashBLEFile()", r32.context);
                        if (r32.getSharePref().isBluetoothConnected()) {
                            c20912.L$0 = r32;
                            c20912.label = 30;
                            objFlashBLEFile = r32.flashBLEFile(c20912);
                            if (objFlashBLEFile == coroutine_suspended) {
                                r33 = r32;
                                return coroutine_suspended;
                            }
                            r33 = r32;
                            if (!((Boolean) objFlashBLEFile).booleanValue()) {
                                r33.getSharePref().setFwFlashing(z);
                                Log.d(str3, "isFwFlashing = false");
                            }
                            return Boxing.boxBoolean(true);
                        }
                        return Boxing.boxBoolean(true);
                    }
                    Log.d(str4, "recovery update return truue");
                    return Boxing.boxBoolean(true);
                case 11:
                    FirmWareUpdateWorker firmWareUpdateWorker11 = (FirmWareUpdateWorker) c20912.L$0;
                    ResultKt.throwOnFailure(objBleWriteDownloadCommand$default18);
                    z = false;
                    obj = null;
                    str4 = "TAG_FW";
                    coroutine_suspended = coroutine_suspended;
                    c20912 = c20912;
                    c = ':';
                    objBleWriteDownloadCommand$default7 = objBleWriteDownloadCommand$default18;
                    str5 = "%08X";
                    str = "format(...)";
                    r10 = firmWareUpdateWorker11;
                    r10 = r9;
                    if (!((Boolean) objBleWriteDownloadCommand$default7).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file4 = r10.file;
                    i8 = r10.sound_db_file_offset;
                    i9 = r10.sound_db_file_size;
                    c20912.L$0 = r10;
                    c20912.label = 12;
                    if (r10.writeFileData(file4, i8, i9, c20912) == coroutine_suspended) {
                        r13 = r10;
                        return coroutine_suspended;
                    }
                    r13 = r10;
                    StringBuilder sbAppend2111119 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_SOUND_DB_END()).append(c);
                    StringCompanionObject stringCompanionObject2111119 = StringCompanionObject.INSTANCE;
                    Object[] objArr2111119 = new Object[1];
                    objArr2111119[z ? 1 : 0] = Boxing.boxInt(r13.sound_db_file_checksum);
                    String str111111111112 = String.format(str5, Arrays.copyOf(objArr2111119, 1));
                    Intrinsics.checkNotNullExpressionValue(str111111111112, str);
                    String string2111113 = sbAppend2111119.append(str111111111112).toString();
                    c20912.L$0 = r13;
                    c20912.label = 13;
                    objBleWriteDownloadCommand$default8 = bleWriteDownloadCommand$default(r13, string2111113, 4000, false, c20912, 4, null);
                    r14 = r13;
                    if (objBleWriteDownloadCommand$default8 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default8).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    StringBuilder sbAppend21111110 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_GPS_DB_START()).append(c).append(r14.gps_db_file_ver).append(',');
                    StringCompanionObject stringCompanionObject21111110 = StringCompanionObject.INSTANCE;
                    Object[] objArr21111110 = new Object[1];
                    objArr21111110[z ? 1 : 0] = Boxing.boxInt(r14.gps_db_file_size);
                    String str111111111113 = String.format(str5, Arrays.copyOf(objArr21111110, 1));
                    Intrinsics.checkNotNullExpressionValue(str111111111113, str);
                    String string2111114 = sbAppend21111110.append(str111111111113).toString();
                    c20912.L$0 = r14;
                    c20912.label = 14;
                    objBleWriteDownloadCommand$default9 = bleWriteDownloadCommand$default(r14, string2111114, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default9 == coroutine_suspended) {
                        r16 = r14;
                        return coroutine_suspended;
                    }
                    r16 = r14;
                    if (!((Boolean) objBleWriteDownloadCommand$default9).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file5 = r16.file;
                    i10 = r16.gps_db_file_offset;
                    i11 = r16.gps_db_file_size;
                    c20912.L$0 = r16;
                    c20912.label = 15;
                    if (r16.writeFileData(file5, i10, i11, c20912) == coroutine_suspended) {
                        r17 = r16;
                        return coroutine_suspended;
                    }
                    r17 = r16;
                    StringBuilder sbAppend111111111110 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_GPS_DB_END()).append(c);
                    StringCompanionObject stringCompanionObject111111111110 = StringCompanionObject.INSTANCE;
                    Object[] objArr111111111110 = new Object[1];
                    objArr111111111110[z ? 1 : 0] = Boxing.boxInt(r17.gps_db_file_checksum);
                    String str111111111114 = String.format(str5, Arrays.copyOf(objArr111111111110, 1));
                    Intrinsics.checkNotNullExpressionValue(str111111111114, str);
                    String string111111111110 = sbAppend111111111110.append(str111111111114).toString();
                    c20912.L$0 = r17;
                    c20912.label = 16;
                    objBleWriteDownloadCommand$default10 = bleWriteDownloadCommand$default(r17, string111111111110, 4000, false, c20912, 4, null);
                    r18 = r17;
                    if (objBleWriteDownloadCommand$default10 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default10).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    StringBuilder sbAppend111111111111 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE1_START()).append(c).append(r18.if1_file_ver).append(',');
                    StringCompanionObject stringCompanionObject111111111111 = StringCompanionObject.INSTANCE;
                    Object[] objArr111111111111 = new Object[1];
                    objArr111111111111[z ? 1 : 0] = Boxing.boxInt(r18.if1_file_size);
                    String str111111111115 = String.format(str5, Arrays.copyOf(objArr111111111111, 1));
                    Intrinsics.checkNotNullExpressionValue(str111111111115, str);
                    String string111111111111 = sbAppend111111111111.append(str111111111115).toString();
                    c20912.L$0 = r18;
                    c20912.label = 17;
                    objBleWriteDownloadCommand$default11 = bleWriteDownloadCommand$default(r18, string111111111111, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default11 == coroutine_suspended) {
                        r19 = r18;
                        return coroutine_suspended;
                    }
                    r19 = r18;
                    if (!((Boolean) objBleWriteDownloadCommand$default11).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file6 = r19.file;
                    i12 = r19.if1_file_offset;
                    i13 = r19.if1_file_size;
                    c20912.L$0 = r19;
                    c20912.label = 18;
                    if (r19.writeFileData(file6, i12, i13, c20912) == coroutine_suspended) {
                        r20 = r19;
                        return coroutine_suspended;
                    }
                    r20 = r19;
                    StringBuilder sbAppend111111111112 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE1_END()).append(c);
                    StringCompanionObject stringCompanionObject111111111112 = StringCompanionObject.INSTANCE;
                    Object[] objArr111111111112 = new Object[1];
                    objArr111111111112[z ? 1 : 0] = Boxing.boxInt(r20.if1_file_checksum);
                    String str111111111116 = String.format(str5, Arrays.copyOf(objArr111111111112, 1));
                    Intrinsics.checkNotNullExpressionValue(str111111111116, str);
                    String string111111111112 = sbAppend111111111112.append(str111111111116).toString();
                    c20912.L$0 = r20;
                    c20912.label = 19;
                    objBleWriteDownloadCommand$default12 = bleWriteDownloadCommand$default(r20, string111111111112, 4000, false, c20912, 4, null);
                    r21 = r20;
                    if (objBleWriteDownloadCommand$default12 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default12).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    StringBuilder sbAppend111111111113 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE2_START()).append(c).append(r21.if2_file_ver).append(',');
                    StringCompanionObject stringCompanionObject111111111113 = StringCompanionObject.INSTANCE;
                    Object[] objArr111111111113 = new Object[1];
                    objArr111111111113[z ? 1 : 0] = Boxing.boxInt(r21.if2_file_size);
                    String str111111111117 = String.format(str5, Arrays.copyOf(objArr111111111113, 1));
                    Intrinsics.checkNotNullExpressionValue(str111111111117, str);
                    String string111111111113 = sbAppend111111111113.append(str111111111117).toString();
                    c20912.L$0 = r21;
                    c20912.label = 20;
                    objBleWriteDownloadCommand$default13 = bleWriteDownloadCommand$default(r21, string111111111113, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default13 == coroutine_suspended) {
                        r22 = r21;
                        return coroutine_suspended;
                    }
                    r22 = r21;
                    if (!((Boolean) objBleWriteDownloadCommand$default13).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file7 = r22.file;
                    i14 = r22.if2_file_offset;
                    i15 = r22.if2_file_size;
                    c20912.L$0 = r22;
                    c20912.label = 21;
                    if (r22.writeFileData(file7, i14, i15, c20912) == coroutine_suspended) {
                        r23 = r22;
                        return coroutine_suspended;
                    }
                    r23 = r22;
                    StringBuilder sbAppend111111111114 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE2_END()).append(c);
                    StringCompanionObject stringCompanionObject111111111114 = StringCompanionObject.INSTANCE;
                    Object[] objArr111111111114 = new Object[1];
                    objArr111111111114[z ? 1 : 0] = Boxing.boxInt(r23.if2_file_checksum);
                    String str211111117 = String.format(str5, Arrays.copyOf(objArr111111111114, 1));
                    Intrinsics.checkNotNullExpressionValue(str211111117, str);
                    String string111111111114 = sbAppend111111111114.append(str211111117).toString();
                    c20912.L$0 = r23;
                    c20912.label = 22;
                    objBleWriteDownloadCommand$default14 = bleWriteDownloadCommand$default(r23, string111111111114, 4000, false, c20912, 4, null);
                    r24 = r23;
                    if (objBleWriteDownloadCommand$default14 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default14).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    if (!StringsKt.contains$default(r24.getSharePref().getDeviceName(), "R9", z, 2, obj)) {
                        break;
                    }
                    r27 = r24;
                    StringBuilder sbAppend111111111115 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE3_START()).append(c).append(r24.if3_file_ver).append(',');
                    StringCompanionObject stringCompanionObject111111111115 = StringCompanionObject.INSTANCE;
                    Object[] objArr111111111115 = new Object[1];
                    objArr111111111115[z ? 1 : 0] = Boxing.boxInt(r24.if3_file_size);
                    String str211111118 = String.format(str5, Arrays.copyOf(objArr111111111115, 1));
                    Intrinsics.checkNotNullExpressionValue(str211111118, str);
                    String string111111111115 = sbAppend111111111115.append(str211111118).toString();
                    c20912.L$0 = r24;
                    c20912.label = 23;
                    objBleWriteDownloadCommand$default15 = bleWriteDownloadCommand$default(r24, string111111111115, 4000, false, c20912, 4, null);
                    r25 = r24;
                    if (objBleWriteDownloadCommand$default15 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default15).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file8 = r25.file;
                    i16 = r25.if3_file_offset;
                    i17 = r25.if3_file_size;
                    c20912.L$0 = r25;
                    c20912.label = 24;
                    if (r25.writeFileData(file8, i16, i17, c20912) == coroutine_suspended) {
                        r26 = r25;
                        return coroutine_suspended;
                    }
                    r26 = r25;
                    StringBuilder sbAppend111111111116 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE3_END()).append(c);
                    StringCompanionObject stringCompanionObject111111111116 = StringCompanionObject.INSTANCE;
                    Object[] objArr111111111116 = new Object[1];
                    objArr111111111116[z ? 1 : 0] = Boxing.boxInt(r26.if3_file_checksum);
                    String str211111119 = String.format(str5, Arrays.copyOf(objArr111111111116, 1));
                    Intrinsics.checkNotNullExpressionValue(str211111119, str);
                    String string111111111116 = sbAppend111111111116.append(str211111119).toString();
                    c20912.L$0 = r26;
                    c20912.label = 25;
                    objBleWriteDownloadCommand$default16 = bleWriteDownloadCommand$default(r26, string111111111116, 4000, false, c20912, 4, null);
                    r28 = r26;
                    if (objBleWriteDownloadCommand$default16 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    r27 = r28;
                    if (!((Boolean) objBleWriteDownloadCommand$default16).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    r27 = r24;
                    StringBuilder sbAppend111111111117 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_BLE_START()).append(c).append(r27.ble_file_ver).append(',');
                    StringCompanionObject stringCompanionObject111111111117 = StringCompanionObject.INSTANCE;
                    Object[] objArr111111111117 = new Object[1];
                    objArr111111111117[z ? 1 : 0] = Boxing.boxInt(r27.ble_file_size);
                    String str2111111110 = String.format(str5, Arrays.copyOf(objArr111111111117, 1));
                    Intrinsics.checkNotNullExpressionValue(str2111111110, str);
                    String string111111111117 = sbAppend111111111117.append(str2111111110).toString();
                    c20912.L$0 = r27;
                    c20912.label = 26;
                    objBleWriteDownloadCommand$default17 = bleWriteDownloadCommand$default(r27, string111111111117, 4000, false, c20912, 4, null);
                    r29 = r27;
                    if (objBleWriteDownloadCommand$default17 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default17).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file9 = r29.file;
                    i18 = r29.ble_file_offset;
                    i19 = r29.ble_file_size;
                    c20912.L$0 = r29;
                    c20912.label = 27;
                    if (r29.writeFileData(file9, i18, i19, c20912) == coroutine_suspended) {
                        r30 = r29;
                        return coroutine_suspended;
                    }
                    r30 = r29;
                    StringBuilder sbAppend111111111118 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_BLE_END()).append(c);
                    StringCompanionObject stringCompanionObject111111111118 = StringCompanionObject.INSTANCE;
                    Object[] objArr111111111118 = new Object[1];
                    objArr111111111118[z ? 1 : 0] = Boxing.boxInt(r30.ble_file_checksum);
                    String str2111111111 = String.format(str5, Arrays.copyOf(objArr111111111118, 1));
                    Intrinsics.checkNotNullExpressionValue(str2111111111, str);
                    String string111111111118 = sbAppend111111111118.append(str2111111111).toString();
                    c20912.L$0 = r30;
                    c20912.label = 28;
                    objBleWriteDownloadCommand$default18 = bleWriteDownloadCommand$default(r30, string111111111118, 4000, false, c20912, 4, null);
                    r31 = r30;
                    if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    String str2111111112 = BluetoothUtils.INSTANCE.getFD_END_COM() + ":1";
                    r31.getSharePref().setFwDownloadComplete(true);
                    r31.getSharePref().setFwFlashing(z);
                    r31.getMyApp().getFirmwareUpdateProcessBT().postValue(new UpdateProgressModel(FIrmWareUpdateProcess.FILE_INSTALL_FINISH, "", ""));
                    c20912.L$0 = r31;
                    c20912.label = 29;
                    objBleWriteDownloadCommand$default18 = r31.bleWriteDownloadCommand(str2111111112, PathInterpolatorCompat.MAX_NUM_POINTS, true, c20912);
                    if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                        r32 = r31;
                        return coroutine_suspended;
                    }
                    r32 = r31;
                    if (((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                        str3 = str4;
                        Log.d(str3, "recovery update return flashBLEFile()");
                        CustomLog.INSTANCE.writeFile("recovery update return flashBLEFile()", r32.context);
                        if (r32.getSharePref().isBluetoothConnected()) {
                            c20912.L$0 = r32;
                            c20912.label = 30;
                            objFlashBLEFile = r32.flashBLEFile(c20912);
                            if (objFlashBLEFile == coroutine_suspended) {
                                r33 = r32;
                                return coroutine_suspended;
                            }
                            r33 = r32;
                            if (!((Boolean) objFlashBLEFile).booleanValue()) {
                                r33.getSharePref().setFwFlashing(z);
                                Log.d(str3, "isFwFlashing = false");
                            }
                            return Boxing.boxBoolean(true);
                        }
                        return Boxing.boxBoolean(true);
                    }
                    Log.d(str4, "recovery update return truue");
                    return Boxing.boxBoolean(true);
                case 12:
                    FirmWareUpdateWorker firmWareUpdateWorker12 = (FirmWareUpdateWorker) c20912.L$0;
                    ResultKt.throwOnFailure(objBleWriteDownloadCommand$default18);
                    str5 = "%08X";
                    z = false;
                    obj = null;
                    str4 = "TAG_FW";
                    coroutine_suspended = coroutine_suspended;
                    c20912 = c20912;
                    str = "format(...)";
                    c = ':';
                    r13 = firmWareUpdateWorker12;
                    r13 = r10;
                    StringBuilder sbAppend21111111 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_SOUND_DB_END()).append(c);
                    StringCompanionObject stringCompanionObject21111111 = StringCompanionObject.INSTANCE;
                    Object[] objArr21111111 = new Object[1];
                    objArr21111111[z ? 1 : 0] = Boxing.boxInt(r13.sound_db_file_checksum);
                    String str111111111118 = String.format(str5, Arrays.copyOf(objArr21111111, 1));
                    Intrinsics.checkNotNullExpressionValue(str111111111118, str);
                    String string2111115 = sbAppend21111111.append(str111111111118).toString();
                    c20912.L$0 = r13;
                    c20912.label = 13;
                    objBleWriteDownloadCommand$default8 = bleWriteDownloadCommand$default(r13, string2111115, 4000, false, c20912, 4, null);
                    r14 = r13;
                    if (objBleWriteDownloadCommand$default8 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default8).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    StringBuilder sbAppend21111112 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_GPS_DB_START()).append(c).append(r14.gps_db_file_ver).append(',');
                    StringCompanionObject stringCompanionObject21111112 = StringCompanionObject.INSTANCE;
                    Object[] objArr21111112 = new Object[1];
                    objArr21111112[z ? 1 : 0] = Boxing.boxInt(r14.gps_db_file_size);
                    String str111111111119 = String.format(str5, Arrays.copyOf(objArr21111112, 1));
                    Intrinsics.checkNotNullExpressionValue(str111111111119, str);
                    String string2111116 = sbAppend21111112.append(str111111111119).toString();
                    c20912.L$0 = r14;
                    c20912.label = 14;
                    objBleWriteDownloadCommand$default9 = bleWriteDownloadCommand$default(r14, string2111116, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default9 == coroutine_suspended) {
                        r16 = r14;
                        return coroutine_suspended;
                    }
                    r16 = r14;
                    if (!((Boolean) objBleWriteDownloadCommand$default9).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file5 = r16.file;
                    i10 = r16.gps_db_file_offset;
                    i11 = r16.gps_db_file_size;
                    c20912.L$0 = r16;
                    c20912.label = 15;
                    if (r16.writeFileData(file5, i10, i11, c20912) == coroutine_suspended) {
                        r17 = r16;
                        return coroutine_suspended;
                    }
                    r17 = r16;
                    StringBuilder sbAppend111111111119 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_GPS_DB_END()).append(c);
                    StringCompanionObject stringCompanionObject111111111119 = StringCompanionObject.INSTANCE;
                    Object[] objArr111111111119 = new Object[1];
                    objArr111111111119[z ? 1 : 0] = Boxing.boxInt(r17.gps_db_file_checksum);
                    String str1111111111110 = String.format(str5, Arrays.copyOf(objArr111111111119, 1));
                    Intrinsics.checkNotNullExpressionValue(str1111111111110, str);
                    String string111111111119 = sbAppend111111111119.append(str1111111111110).toString();
                    c20912.L$0 = r17;
                    c20912.label = 16;
                    objBleWriteDownloadCommand$default10 = bleWriteDownloadCommand$default(r17, string111111111119, 4000, false, c20912, 4, null);
                    r18 = r17;
                    if (objBleWriteDownloadCommand$default10 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default10).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    StringBuilder sbAppend1111111111110 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE1_START()).append(c).append(r18.if1_file_ver).append(',');
                    StringCompanionObject stringCompanionObject1111111111110 = StringCompanionObject.INSTANCE;
                    Object[] objArr1111111111110 = new Object[1];
                    objArr1111111111110[z ? 1 : 0] = Boxing.boxInt(r18.if1_file_size);
                    String str1111111111111 = String.format(str5, Arrays.copyOf(objArr1111111111110, 1));
                    Intrinsics.checkNotNullExpressionValue(str1111111111111, str);
                    String string1111111111110 = sbAppend1111111111110.append(str1111111111111).toString();
                    c20912.L$0 = r18;
                    c20912.label = 17;
                    objBleWriteDownloadCommand$default11 = bleWriteDownloadCommand$default(r18, string1111111111110, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default11 == coroutine_suspended) {
                        r19 = r18;
                        return coroutine_suspended;
                    }
                    r19 = r18;
                    if (!((Boolean) objBleWriteDownloadCommand$default11).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file6 = r19.file;
                    i12 = r19.if1_file_offset;
                    i13 = r19.if1_file_size;
                    c20912.L$0 = r19;
                    c20912.label = 18;
                    if (r19.writeFileData(file6, i12, i13, c20912) == coroutine_suspended) {
                        r20 = r19;
                        return coroutine_suspended;
                    }
                    r20 = r19;
                    StringBuilder sbAppend1111111111111 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE1_END()).append(c);
                    StringCompanionObject stringCompanionObject1111111111111 = StringCompanionObject.INSTANCE;
                    Object[] objArr1111111111111 = new Object[1];
                    objArr1111111111111[z ? 1 : 0] = Boxing.boxInt(r20.if1_file_checksum);
                    String str1111111111112 = String.format(str5, Arrays.copyOf(objArr1111111111111, 1));
                    Intrinsics.checkNotNullExpressionValue(str1111111111112, str);
                    String string1111111111111 = sbAppend1111111111111.append(str1111111111112).toString();
                    c20912.L$0 = r20;
                    c20912.label = 19;
                    objBleWriteDownloadCommand$default12 = bleWriteDownloadCommand$default(r20, string1111111111111, 4000, false, c20912, 4, null);
                    r21 = r20;
                    if (objBleWriteDownloadCommand$default12 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default12).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    StringBuilder sbAppend1111111111112 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE2_START()).append(c).append(r21.if2_file_ver).append(',');
                    StringCompanionObject stringCompanionObject1111111111112 = StringCompanionObject.INSTANCE;
                    Object[] objArr1111111111112 = new Object[1];
                    objArr1111111111112[z ? 1 : 0] = Boxing.boxInt(r21.if2_file_size);
                    String str1111111111113 = String.format(str5, Arrays.copyOf(objArr1111111111112, 1));
                    Intrinsics.checkNotNullExpressionValue(str1111111111113, str);
                    String string1111111111112 = sbAppend1111111111112.append(str1111111111113).toString();
                    c20912.L$0 = r21;
                    c20912.label = 20;
                    objBleWriteDownloadCommand$default13 = bleWriteDownloadCommand$default(r21, string1111111111112, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default13 == coroutine_suspended) {
                        r22 = r21;
                        return coroutine_suspended;
                    }
                    r22 = r21;
                    if (!((Boolean) objBleWriteDownloadCommand$default13).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file7 = r22.file;
                    i14 = r22.if2_file_offset;
                    i15 = r22.if2_file_size;
                    c20912.L$0 = r22;
                    c20912.label = 21;
                    if (r22.writeFileData(file7, i14, i15, c20912) == coroutine_suspended) {
                        r23 = r22;
                        return coroutine_suspended;
                    }
                    r23 = r22;
                    StringBuilder sbAppend1111111111113 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE2_END()).append(c);
                    StringCompanionObject stringCompanionObject1111111111113 = StringCompanionObject.INSTANCE;
                    Object[] objArr1111111111113 = new Object[1];
                    objArr1111111111113[z ? 1 : 0] = Boxing.boxInt(r23.if2_file_checksum);
                    String str2111111113 = String.format(str5, Arrays.copyOf(objArr1111111111113, 1));
                    Intrinsics.checkNotNullExpressionValue(str2111111113, str);
                    String string1111111111113 = sbAppend1111111111113.append(str2111111113).toString();
                    c20912.L$0 = r23;
                    c20912.label = 22;
                    objBleWriteDownloadCommand$default14 = bleWriteDownloadCommand$default(r23, string1111111111113, 4000, false, c20912, 4, null);
                    r24 = r23;
                    if (objBleWriteDownloadCommand$default14 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default14).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    if (!StringsKt.contains$default(r24.getSharePref().getDeviceName(), "R9", z, 2, obj)) {
                        break;
                    }
                    r27 = r24;
                    StringBuilder sbAppend1111111111114 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE3_START()).append(c).append(r24.if3_file_ver).append(',');
                    StringCompanionObject stringCompanionObject1111111111114 = StringCompanionObject.INSTANCE;
                    Object[] objArr1111111111114 = new Object[1];
                    objArr1111111111114[z ? 1 : 0] = Boxing.boxInt(r24.if3_file_size);
                    String str2111111114 = String.format(str5, Arrays.copyOf(objArr1111111111114, 1));
                    Intrinsics.checkNotNullExpressionValue(str2111111114, str);
                    String string1111111111114 = sbAppend1111111111114.append(str2111111114).toString();
                    c20912.L$0 = r24;
                    c20912.label = 23;
                    objBleWriteDownloadCommand$default15 = bleWriteDownloadCommand$default(r24, string1111111111114, 4000, false, c20912, 4, null);
                    r25 = r24;
                    if (objBleWriteDownloadCommand$default15 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default15).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file8 = r25.file;
                    i16 = r25.if3_file_offset;
                    i17 = r25.if3_file_size;
                    c20912.L$0 = r25;
                    c20912.label = 24;
                    if (r25.writeFileData(file8, i16, i17, c20912) == coroutine_suspended) {
                        r26 = r25;
                        return coroutine_suspended;
                    }
                    r26 = r25;
                    StringBuilder sbAppend1111111111115 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE3_END()).append(c);
                    StringCompanionObject stringCompanionObject1111111111115 = StringCompanionObject.INSTANCE;
                    Object[] objArr1111111111115 = new Object[1];
                    objArr1111111111115[z ? 1 : 0] = Boxing.boxInt(r26.if3_file_checksum);
                    String str2111111115 = String.format(str5, Arrays.copyOf(objArr1111111111115, 1));
                    Intrinsics.checkNotNullExpressionValue(str2111111115, str);
                    String string1111111111115 = sbAppend1111111111115.append(str2111111115).toString();
                    c20912.L$0 = r26;
                    c20912.label = 25;
                    objBleWriteDownloadCommand$default16 = bleWriteDownloadCommand$default(r26, string1111111111115, 4000, false, c20912, 4, null);
                    r28 = r26;
                    if (objBleWriteDownloadCommand$default16 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    r27 = r28;
                    if (!((Boolean) objBleWriteDownloadCommand$default16).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    r27 = r24;
                    StringBuilder sbAppend1111111111116 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_BLE_START()).append(c).append(r27.ble_file_ver).append(',');
                    StringCompanionObject stringCompanionObject1111111111116 = StringCompanionObject.INSTANCE;
                    Object[] objArr1111111111116 = new Object[1];
                    objArr1111111111116[z ? 1 : 0] = Boxing.boxInt(r27.ble_file_size);
                    String str2111111116 = String.format(str5, Arrays.copyOf(objArr1111111111116, 1));
                    Intrinsics.checkNotNullExpressionValue(str2111111116, str);
                    String string1111111111116 = sbAppend1111111111116.append(str2111111116).toString();
                    c20912.L$0 = r27;
                    c20912.label = 26;
                    objBleWriteDownloadCommand$default17 = bleWriteDownloadCommand$default(r27, string1111111111116, 4000, false, c20912, 4, null);
                    r29 = r27;
                    if (objBleWriteDownloadCommand$default17 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default17).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file9 = r29.file;
                    i18 = r29.ble_file_offset;
                    i19 = r29.ble_file_size;
                    c20912.L$0 = r29;
                    c20912.label = 27;
                    if (r29.writeFileData(file9, i18, i19, c20912) == coroutine_suspended) {
                        r30 = r29;
                        return coroutine_suspended;
                    }
                    r30 = r29;
                    StringBuilder sbAppend1111111111117 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_BLE_END()).append(c);
                    StringCompanionObject stringCompanionObject1111111111117 = StringCompanionObject.INSTANCE;
                    Object[] objArr1111111111117 = new Object[1];
                    objArr1111111111117[z ? 1 : 0] = Boxing.boxInt(r30.ble_file_checksum);
                    String str2111111117 = String.format(str5, Arrays.copyOf(objArr1111111111117, 1));
                    Intrinsics.checkNotNullExpressionValue(str2111111117, str);
                    String string1111111111117 = sbAppend1111111111117.append(str2111111117).toString();
                    c20912.L$0 = r30;
                    c20912.label = 28;
                    objBleWriteDownloadCommand$default18 = bleWriteDownloadCommand$default(r30, string1111111111117, 4000, false, c20912, 4, null);
                    r31 = r30;
                    if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    String str2111111118 = BluetoothUtils.INSTANCE.getFD_END_COM() + ":1";
                    r31.getSharePref().setFwDownloadComplete(true);
                    r31.getSharePref().setFwFlashing(z);
                    r31.getMyApp().getFirmwareUpdateProcessBT().postValue(new UpdateProgressModel(FIrmWareUpdateProcess.FILE_INSTALL_FINISH, "", ""));
                    c20912.L$0 = r31;
                    c20912.label = 29;
                    objBleWriteDownloadCommand$default18 = r31.bleWriteDownloadCommand(str2111111118, PathInterpolatorCompat.MAX_NUM_POINTS, true, c20912);
                    if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                        r32 = r31;
                        return coroutine_suspended;
                    }
                    r32 = r31;
                    if (((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                        str3 = str4;
                        Log.d(str3, "recovery update return flashBLEFile()");
                        CustomLog.INSTANCE.writeFile("recovery update return flashBLEFile()", r32.context);
                        if (r32.getSharePref().isBluetoothConnected()) {
                            c20912.L$0 = r32;
                            c20912.label = 30;
                            objFlashBLEFile = r32.flashBLEFile(c20912);
                            if (objFlashBLEFile == coroutine_suspended) {
                                r33 = r32;
                                return coroutine_suspended;
                            }
                            r33 = r32;
                            if (!((Boolean) objFlashBLEFile).booleanValue()) {
                                r33.getSharePref().setFwFlashing(z);
                                Log.d(str3, "isFwFlashing = false");
                            }
                            return Boxing.boxBoolean(true);
                        }
                        return Boxing.boxBoolean(true);
                    }
                    Log.d(str4, "recovery update return truue");
                    return Boxing.boxBoolean(true);
                case 13:
                    FirmWareUpdateWorker firmWareUpdateWorker13 = (FirmWareUpdateWorker) c20912.L$0;
                    ResultKt.throwOnFailure(objBleWriteDownloadCommand$default18);
                    z = false;
                    obj = null;
                    str4 = "TAG_FW";
                    coroutine_suspended = coroutine_suspended;
                    c20912 = c20912;
                    c = ':';
                    objBleWriteDownloadCommand$default8 = objBleWriteDownloadCommand$default18;
                    str5 = "%08X";
                    str = "format(...)";
                    r14 = firmWareUpdateWorker13;
                    if (!((Boolean) objBleWriteDownloadCommand$default8).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    StringBuilder sbAppend21111113 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_GPS_DB_START()).append(c).append(r14.gps_db_file_ver).append(',');
                    StringCompanionObject stringCompanionObject21111113 = StringCompanionObject.INSTANCE;
                    Object[] objArr21111113 = new Object[1];
                    objArr21111113[z ? 1 : 0] = Boxing.boxInt(r14.gps_db_file_size);
                    String str1111111111114 = String.format(str5, Arrays.copyOf(objArr21111113, 1));
                    Intrinsics.checkNotNullExpressionValue(str1111111111114, str);
                    String string2111117 = sbAppend21111113.append(str1111111111114).toString();
                    c20912.L$0 = r14;
                    c20912.label = 14;
                    objBleWriteDownloadCommand$default9 = bleWriteDownloadCommand$default(r14, string2111117, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default9 == coroutine_suspended) {
                        r16 = r14;
                        return coroutine_suspended;
                    }
                    r16 = r14;
                    if (!((Boolean) objBleWriteDownloadCommand$default9).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file5 = r16.file;
                    i10 = r16.gps_db_file_offset;
                    i11 = r16.gps_db_file_size;
                    c20912.L$0 = r16;
                    c20912.label = 15;
                    if (r16.writeFileData(file5, i10, i11, c20912) == coroutine_suspended) {
                        r17 = r16;
                        return coroutine_suspended;
                    }
                    r17 = r16;
                    StringBuilder sbAppend1111111111118 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_GPS_DB_END()).append(c);
                    StringCompanionObject stringCompanionObject1111111111118 = StringCompanionObject.INSTANCE;
                    Object[] objArr1111111111118 = new Object[1];
                    objArr1111111111118[z ? 1 : 0] = Boxing.boxInt(r17.gps_db_file_checksum);
                    String str1111111111115 = String.format(str5, Arrays.copyOf(objArr1111111111118, 1));
                    Intrinsics.checkNotNullExpressionValue(str1111111111115, str);
                    String string1111111111118 = sbAppend1111111111118.append(str1111111111115).toString();
                    c20912.L$0 = r17;
                    c20912.label = 16;
                    objBleWriteDownloadCommand$default10 = bleWriteDownloadCommand$default(r17, string1111111111118, 4000, false, c20912, 4, null);
                    r18 = r17;
                    if (objBleWriteDownloadCommand$default10 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default10).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    StringBuilder sbAppend1111111111119 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE1_START()).append(c).append(r18.if1_file_ver).append(',');
                    StringCompanionObject stringCompanionObject1111111111119 = StringCompanionObject.INSTANCE;
                    Object[] objArr1111111111119 = new Object[1];
                    objArr1111111111119[z ? 1 : 0] = Boxing.boxInt(r18.if1_file_size);
                    String str1111111111116 = String.format(str5, Arrays.copyOf(objArr1111111111119, 1));
                    Intrinsics.checkNotNullExpressionValue(str1111111111116, str);
                    String string1111111111119 = sbAppend1111111111119.append(str1111111111116).toString();
                    c20912.L$0 = r18;
                    c20912.label = 17;
                    objBleWriteDownloadCommand$default11 = bleWriteDownloadCommand$default(r18, string1111111111119, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default11 == coroutine_suspended) {
                        r19 = r18;
                        return coroutine_suspended;
                    }
                    r19 = r18;
                    if (!((Boolean) objBleWriteDownloadCommand$default11).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file6 = r19.file;
                    i12 = r19.if1_file_offset;
                    i13 = r19.if1_file_size;
                    c20912.L$0 = r19;
                    c20912.label = 18;
                    if (r19.writeFileData(file6, i12, i13, c20912) == coroutine_suspended) {
                        r20 = r19;
                        return coroutine_suspended;
                    }
                    r20 = r19;
                    StringBuilder sbAppend11111111111110 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE1_END()).append(c);
                    StringCompanionObject stringCompanionObject11111111111110 = StringCompanionObject.INSTANCE;
                    Object[] objArr11111111111110 = new Object[1];
                    objArr11111111111110[z ? 1 : 0] = Boxing.boxInt(r20.if1_file_checksum);
                    String str1111111111117 = String.format(str5, Arrays.copyOf(objArr11111111111110, 1));
                    Intrinsics.checkNotNullExpressionValue(str1111111111117, str);
                    String string11111111111110 = sbAppend11111111111110.append(str1111111111117).toString();
                    c20912.L$0 = r20;
                    c20912.label = 19;
                    objBleWriteDownloadCommand$default12 = bleWriteDownloadCommand$default(r20, string11111111111110, 4000, false, c20912, 4, null);
                    r21 = r20;
                    if (objBleWriteDownloadCommand$default12 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default12).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    StringBuilder sbAppend11111111111111 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE2_START()).append(c).append(r21.if2_file_ver).append(',');
                    StringCompanionObject stringCompanionObject11111111111111 = StringCompanionObject.INSTANCE;
                    Object[] objArr11111111111111 = new Object[1];
                    objArr11111111111111[z ? 1 : 0] = Boxing.boxInt(r21.if2_file_size);
                    String str1111111111118 = String.format(str5, Arrays.copyOf(objArr11111111111111, 1));
                    Intrinsics.checkNotNullExpressionValue(str1111111111118, str);
                    String string11111111111111 = sbAppend11111111111111.append(str1111111111118).toString();
                    c20912.L$0 = r21;
                    c20912.label = 20;
                    objBleWriteDownloadCommand$default13 = bleWriteDownloadCommand$default(r21, string11111111111111, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default13 == coroutine_suspended) {
                        r22 = r21;
                        return coroutine_suspended;
                    }
                    r22 = r21;
                    if (!((Boolean) objBleWriteDownloadCommand$default13).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file7 = r22.file;
                    i14 = r22.if2_file_offset;
                    i15 = r22.if2_file_size;
                    c20912.L$0 = r22;
                    c20912.label = 21;
                    if (r22.writeFileData(file7, i14, i15, c20912) == coroutine_suspended) {
                        r23 = r22;
                        return coroutine_suspended;
                    }
                    r23 = r22;
                    StringBuilder sbAppend11111111111112 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE2_END()).append(c);
                    StringCompanionObject stringCompanionObject11111111111112 = StringCompanionObject.INSTANCE;
                    Object[] objArr11111111111112 = new Object[1];
                    objArr11111111111112[z ? 1 : 0] = Boxing.boxInt(r23.if2_file_checksum);
                    String str2111111119 = String.format(str5, Arrays.copyOf(objArr11111111111112, 1));
                    Intrinsics.checkNotNullExpressionValue(str2111111119, str);
                    String string11111111111112 = sbAppend11111111111112.append(str2111111119).toString();
                    c20912.L$0 = r23;
                    c20912.label = 22;
                    objBleWriteDownloadCommand$default14 = bleWriteDownloadCommand$default(r23, string11111111111112, 4000, false, c20912, 4, null);
                    r24 = r23;
                    if (objBleWriteDownloadCommand$default14 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default14).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    if (!StringsKt.contains$default(r24.getSharePref().getDeviceName(), "R9", z, 2, obj)) {
                        break;
                    }
                    r27 = r24;
                    StringBuilder sbAppend11111111111113 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE3_START()).append(c).append(r24.if3_file_ver).append(',');
                    StringCompanionObject stringCompanionObject11111111111113 = StringCompanionObject.INSTANCE;
                    Object[] objArr11111111111113 = new Object[1];
                    objArr11111111111113[z ? 1 : 0] = Boxing.boxInt(r24.if3_file_size);
                    String str21111111110 = String.format(str5, Arrays.copyOf(objArr11111111111113, 1));
                    Intrinsics.checkNotNullExpressionValue(str21111111110, str);
                    String string11111111111113 = sbAppend11111111111113.append(str21111111110).toString();
                    c20912.L$0 = r24;
                    c20912.label = 23;
                    objBleWriteDownloadCommand$default15 = bleWriteDownloadCommand$default(r24, string11111111111113, 4000, false, c20912, 4, null);
                    r25 = r24;
                    if (objBleWriteDownloadCommand$default15 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default15).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file8 = r25.file;
                    i16 = r25.if3_file_offset;
                    i17 = r25.if3_file_size;
                    c20912.L$0 = r25;
                    c20912.label = 24;
                    if (r25.writeFileData(file8, i16, i17, c20912) == coroutine_suspended) {
                        r26 = r25;
                        return coroutine_suspended;
                    }
                    r26 = r25;
                    StringBuilder sbAppend11111111111114 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE3_END()).append(c);
                    StringCompanionObject stringCompanionObject11111111111114 = StringCompanionObject.INSTANCE;
                    Object[] objArr11111111111114 = new Object[1];
                    objArr11111111111114[z ? 1 : 0] = Boxing.boxInt(r26.if3_file_checksum);
                    String str21111111111 = String.format(str5, Arrays.copyOf(objArr11111111111114, 1));
                    Intrinsics.checkNotNullExpressionValue(str21111111111, str);
                    String string11111111111114 = sbAppend11111111111114.append(str21111111111).toString();
                    c20912.L$0 = r26;
                    c20912.label = 25;
                    objBleWriteDownloadCommand$default16 = bleWriteDownloadCommand$default(r26, string11111111111114, 4000, false, c20912, 4, null);
                    r28 = r26;
                    if (objBleWriteDownloadCommand$default16 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    r27 = r28;
                    if (!((Boolean) objBleWriteDownloadCommand$default16).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    r27 = r24;
                    StringBuilder sbAppend11111111111115 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_BLE_START()).append(c).append(r27.ble_file_ver).append(',');
                    StringCompanionObject stringCompanionObject11111111111115 = StringCompanionObject.INSTANCE;
                    Object[] objArr11111111111115 = new Object[1];
                    objArr11111111111115[z ? 1 : 0] = Boxing.boxInt(r27.ble_file_size);
                    String str21111111112 = String.format(str5, Arrays.copyOf(objArr11111111111115, 1));
                    Intrinsics.checkNotNullExpressionValue(str21111111112, str);
                    String string11111111111115 = sbAppend11111111111115.append(str21111111112).toString();
                    c20912.L$0 = r27;
                    c20912.label = 26;
                    objBleWriteDownloadCommand$default17 = bleWriteDownloadCommand$default(r27, string11111111111115, 4000, false, c20912, 4, null);
                    r29 = r27;
                    if (objBleWriteDownloadCommand$default17 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default17).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file9 = r29.file;
                    i18 = r29.ble_file_offset;
                    i19 = r29.ble_file_size;
                    c20912.L$0 = r29;
                    c20912.label = 27;
                    if (r29.writeFileData(file9, i18, i19, c20912) == coroutine_suspended) {
                        r30 = r29;
                        return coroutine_suspended;
                    }
                    r30 = r29;
                    StringBuilder sbAppend11111111111116 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_BLE_END()).append(c);
                    StringCompanionObject stringCompanionObject11111111111116 = StringCompanionObject.INSTANCE;
                    Object[] objArr11111111111116 = new Object[1];
                    objArr11111111111116[z ? 1 : 0] = Boxing.boxInt(r30.ble_file_checksum);
                    String str21111111113 = String.format(str5, Arrays.copyOf(objArr11111111111116, 1));
                    Intrinsics.checkNotNullExpressionValue(str21111111113, str);
                    String string11111111111116 = sbAppend11111111111116.append(str21111111113).toString();
                    c20912.L$0 = r30;
                    c20912.label = 28;
                    objBleWriteDownloadCommand$default18 = bleWriteDownloadCommand$default(r30, string11111111111116, 4000, false, c20912, 4, null);
                    r31 = r30;
                    if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    String str21111111114 = BluetoothUtils.INSTANCE.getFD_END_COM() + ":1";
                    r31.getSharePref().setFwDownloadComplete(true);
                    r31.getSharePref().setFwFlashing(z);
                    r31.getMyApp().getFirmwareUpdateProcessBT().postValue(new UpdateProgressModel(FIrmWareUpdateProcess.FILE_INSTALL_FINISH, "", ""));
                    c20912.L$0 = r31;
                    c20912.label = 29;
                    objBleWriteDownloadCommand$default18 = r31.bleWriteDownloadCommand(str21111111114, PathInterpolatorCompat.MAX_NUM_POINTS, true, c20912);
                    if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                        r32 = r31;
                        return coroutine_suspended;
                    }
                    r32 = r31;
                    if (((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                        str3 = str4;
                        Log.d(str3, "recovery update return flashBLEFile()");
                        CustomLog.INSTANCE.writeFile("recovery update return flashBLEFile()", r32.context);
                        if (r32.getSharePref().isBluetoothConnected()) {
                            c20912.L$0 = r32;
                            c20912.label = 30;
                            objFlashBLEFile = r32.flashBLEFile(c20912);
                            if (objFlashBLEFile == coroutine_suspended) {
                                r33 = r32;
                                return coroutine_suspended;
                            }
                            r33 = r32;
                            if (!((Boolean) objFlashBLEFile).booleanValue()) {
                                r33.getSharePref().setFwFlashing(z);
                                Log.d(str3, "isFwFlashing = false");
                            }
                            return Boxing.boxBoolean(true);
                        }
                        return Boxing.boxBoolean(true);
                    }
                    Log.d(str4, "recovery update return truue");
                    return Boxing.boxBoolean(true);
                case 14:
                    FirmWareUpdateWorker firmWareUpdateWorker14 = (FirmWareUpdateWorker) c20912.L$0;
                    ResultKt.throwOnFailure(objBleWriteDownloadCommand$default18);
                    z = false;
                    obj = null;
                    str4 = "TAG_FW";
                    coroutine_suspended = coroutine_suspended;
                    c20912 = c20912;
                    c = ':';
                    objBleWriteDownloadCommand$default9 = objBleWriteDownloadCommand$default18;
                    str5 = "%08X";
                    str = "format(...)";
                    r16 = firmWareUpdateWorker14;
                    r16 = r14;
                    if (!((Boolean) objBleWriteDownloadCommand$default9).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file5 = r16.file;
                    i10 = r16.gps_db_file_offset;
                    i11 = r16.gps_db_file_size;
                    c20912.L$0 = r16;
                    c20912.label = 15;
                    if (r16.writeFileData(file5, i10, i11, c20912) == coroutine_suspended) {
                        r17 = r16;
                        return coroutine_suspended;
                    }
                    r17 = r16;
                    StringBuilder sbAppend11111111111117 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_GPS_DB_END()).append(c);
                    StringCompanionObject stringCompanionObject11111111111117 = StringCompanionObject.INSTANCE;
                    Object[] objArr11111111111117 = new Object[1];
                    objArr11111111111117[z ? 1 : 0] = Boxing.boxInt(r17.gps_db_file_checksum);
                    String str1111111111119 = String.format(str5, Arrays.copyOf(objArr11111111111117, 1));
                    Intrinsics.checkNotNullExpressionValue(str1111111111119, str);
                    String string11111111111117 = sbAppend11111111111117.append(str1111111111119).toString();
                    c20912.L$0 = r17;
                    c20912.label = 16;
                    objBleWriteDownloadCommand$default10 = bleWriteDownloadCommand$default(r17, string11111111111117, 4000, false, c20912, 4, null);
                    r18 = r17;
                    if (objBleWriteDownloadCommand$default10 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default10).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    StringBuilder sbAppend11111111111118 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE1_START()).append(c).append(r18.if1_file_ver).append(',');
                    StringCompanionObject stringCompanionObject11111111111118 = StringCompanionObject.INSTANCE;
                    Object[] objArr11111111111118 = new Object[1];
                    objArr11111111111118[z ? 1 : 0] = Boxing.boxInt(r18.if1_file_size);
                    String str11111111111110 = String.format(str5, Arrays.copyOf(objArr11111111111118, 1));
                    Intrinsics.checkNotNullExpressionValue(str11111111111110, str);
                    String string11111111111118 = sbAppend11111111111118.append(str11111111111110).toString();
                    c20912.L$0 = r18;
                    c20912.label = 17;
                    objBleWriteDownloadCommand$default11 = bleWriteDownloadCommand$default(r18, string11111111111118, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default11 == coroutine_suspended) {
                        r19 = r18;
                        return coroutine_suspended;
                    }
                    r19 = r18;
                    if (!((Boolean) objBleWriteDownloadCommand$default11).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file6 = r19.file;
                    i12 = r19.if1_file_offset;
                    i13 = r19.if1_file_size;
                    c20912.L$0 = r19;
                    c20912.label = 18;
                    if (r19.writeFileData(file6, i12, i13, c20912) == coroutine_suspended) {
                        r20 = r19;
                        return coroutine_suspended;
                    }
                    r20 = r19;
                    StringBuilder sbAppend11111111111119 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE1_END()).append(c);
                    StringCompanionObject stringCompanionObject11111111111119 = StringCompanionObject.INSTANCE;
                    Object[] objArr11111111111119 = new Object[1];
                    objArr11111111111119[z ? 1 : 0] = Boxing.boxInt(r20.if1_file_checksum);
                    String str11111111111111 = String.format(str5, Arrays.copyOf(objArr11111111111119, 1));
                    Intrinsics.checkNotNullExpressionValue(str11111111111111, str);
                    String string11111111111119 = sbAppend11111111111119.append(str11111111111111).toString();
                    c20912.L$0 = r20;
                    c20912.label = 19;
                    objBleWriteDownloadCommand$default12 = bleWriteDownloadCommand$default(r20, string11111111111119, 4000, false, c20912, 4, null);
                    r21 = r20;
                    if (objBleWriteDownloadCommand$default12 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default12).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    StringBuilder sbAppend111111111111110 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE2_START()).append(c).append(r21.if2_file_ver).append(',');
                    StringCompanionObject stringCompanionObject111111111111110 = StringCompanionObject.INSTANCE;
                    Object[] objArr111111111111110 = new Object[1];
                    objArr111111111111110[z ? 1 : 0] = Boxing.boxInt(r21.if2_file_size);
                    String str11111111111112 = String.format(str5, Arrays.copyOf(objArr111111111111110, 1));
                    Intrinsics.checkNotNullExpressionValue(str11111111111112, str);
                    String string111111111111110 = sbAppend111111111111110.append(str11111111111112).toString();
                    c20912.L$0 = r21;
                    c20912.label = 20;
                    objBleWriteDownloadCommand$default13 = bleWriteDownloadCommand$default(r21, string111111111111110, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default13 == coroutine_suspended) {
                        r22 = r21;
                        return coroutine_suspended;
                    }
                    r22 = r21;
                    if (!((Boolean) objBleWriteDownloadCommand$default13).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file7 = r22.file;
                    i14 = r22.if2_file_offset;
                    i15 = r22.if2_file_size;
                    c20912.L$0 = r22;
                    c20912.label = 21;
                    if (r22.writeFileData(file7, i14, i15, c20912) == coroutine_suspended) {
                        r23 = r22;
                        return coroutine_suspended;
                    }
                    r23 = r22;
                    StringBuilder sbAppend111111111111111 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE2_END()).append(c);
                    StringCompanionObject stringCompanionObject111111111111111 = StringCompanionObject.INSTANCE;
                    Object[] objArr111111111111111 = new Object[1];
                    objArr111111111111111[z ? 1 : 0] = Boxing.boxInt(r23.if2_file_checksum);
                    String str21111111115 = String.format(str5, Arrays.copyOf(objArr111111111111111, 1));
                    Intrinsics.checkNotNullExpressionValue(str21111111115, str);
                    String string111111111111111 = sbAppend111111111111111.append(str21111111115).toString();
                    c20912.L$0 = r23;
                    c20912.label = 22;
                    objBleWriteDownloadCommand$default14 = bleWriteDownloadCommand$default(r23, string111111111111111, 4000, false, c20912, 4, null);
                    r24 = r23;
                    if (objBleWriteDownloadCommand$default14 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default14).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    if (!StringsKt.contains$default(r24.getSharePref().getDeviceName(), "R9", z, 2, obj)) {
                        break;
                    }
                    r27 = r24;
                    StringBuilder sbAppend111111111111112 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE3_START()).append(c).append(r24.if3_file_ver).append(',');
                    StringCompanionObject stringCompanionObject111111111111112 = StringCompanionObject.INSTANCE;
                    Object[] objArr111111111111112 = new Object[1];
                    objArr111111111111112[z ? 1 : 0] = Boxing.boxInt(r24.if3_file_size);
                    String str21111111116 = String.format(str5, Arrays.copyOf(objArr111111111111112, 1));
                    Intrinsics.checkNotNullExpressionValue(str21111111116, str);
                    String string111111111111112 = sbAppend111111111111112.append(str21111111116).toString();
                    c20912.L$0 = r24;
                    c20912.label = 23;
                    objBleWriteDownloadCommand$default15 = bleWriteDownloadCommand$default(r24, string111111111111112, 4000, false, c20912, 4, null);
                    r25 = r24;
                    if (objBleWriteDownloadCommand$default15 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default15).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file8 = r25.file;
                    i16 = r25.if3_file_offset;
                    i17 = r25.if3_file_size;
                    c20912.L$0 = r25;
                    c20912.label = 24;
                    if (r25.writeFileData(file8, i16, i17, c20912) == coroutine_suspended) {
                        r26 = r25;
                        return coroutine_suspended;
                    }
                    r26 = r25;
                    StringBuilder sbAppend111111111111113 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE3_END()).append(c);
                    StringCompanionObject stringCompanionObject111111111111113 = StringCompanionObject.INSTANCE;
                    Object[] objArr111111111111113 = new Object[1];
                    objArr111111111111113[z ? 1 : 0] = Boxing.boxInt(r26.if3_file_checksum);
                    String str21111111117 = String.format(str5, Arrays.copyOf(objArr111111111111113, 1));
                    Intrinsics.checkNotNullExpressionValue(str21111111117, str);
                    String string111111111111113 = sbAppend111111111111113.append(str21111111117).toString();
                    c20912.L$0 = r26;
                    c20912.label = 25;
                    objBleWriteDownloadCommand$default16 = bleWriteDownloadCommand$default(r26, string111111111111113, 4000, false, c20912, 4, null);
                    r28 = r26;
                    if (objBleWriteDownloadCommand$default16 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    r27 = r28;
                    if (!((Boolean) objBleWriteDownloadCommand$default16).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    r27 = r24;
                    StringBuilder sbAppend111111111111114 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_BLE_START()).append(c).append(r27.ble_file_ver).append(',');
                    StringCompanionObject stringCompanionObject111111111111114 = StringCompanionObject.INSTANCE;
                    Object[] objArr111111111111114 = new Object[1];
                    objArr111111111111114[z ? 1 : 0] = Boxing.boxInt(r27.ble_file_size);
                    String str21111111118 = String.format(str5, Arrays.copyOf(objArr111111111111114, 1));
                    Intrinsics.checkNotNullExpressionValue(str21111111118, str);
                    String string111111111111114 = sbAppend111111111111114.append(str21111111118).toString();
                    c20912.L$0 = r27;
                    c20912.label = 26;
                    objBleWriteDownloadCommand$default17 = bleWriteDownloadCommand$default(r27, string111111111111114, 4000, false, c20912, 4, null);
                    r29 = r27;
                    if (objBleWriteDownloadCommand$default17 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default17).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file9 = r29.file;
                    i18 = r29.ble_file_offset;
                    i19 = r29.ble_file_size;
                    c20912.L$0 = r29;
                    c20912.label = 27;
                    if (r29.writeFileData(file9, i18, i19, c20912) == coroutine_suspended) {
                        r30 = r29;
                        return coroutine_suspended;
                    }
                    r30 = r29;
                    StringBuilder sbAppend111111111111115 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_BLE_END()).append(c);
                    StringCompanionObject stringCompanionObject111111111111115 = StringCompanionObject.INSTANCE;
                    Object[] objArr111111111111115 = new Object[1];
                    objArr111111111111115[z ? 1 : 0] = Boxing.boxInt(r30.ble_file_checksum);
                    String str21111111119 = String.format(str5, Arrays.copyOf(objArr111111111111115, 1));
                    Intrinsics.checkNotNullExpressionValue(str21111111119, str);
                    String string111111111111115 = sbAppend111111111111115.append(str21111111119).toString();
                    c20912.L$0 = r30;
                    c20912.label = 28;
                    objBleWriteDownloadCommand$default18 = bleWriteDownloadCommand$default(r30, string111111111111115, 4000, false, c20912, 4, null);
                    r31 = r30;
                    if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    String str211111111110 = BluetoothUtils.INSTANCE.getFD_END_COM() + ":1";
                    r31.getSharePref().setFwDownloadComplete(true);
                    r31.getSharePref().setFwFlashing(z);
                    r31.getMyApp().getFirmwareUpdateProcessBT().postValue(new UpdateProgressModel(FIrmWareUpdateProcess.FILE_INSTALL_FINISH, "", ""));
                    c20912.L$0 = r31;
                    c20912.label = 29;
                    objBleWriteDownloadCommand$default18 = r31.bleWriteDownloadCommand(str211111111110, PathInterpolatorCompat.MAX_NUM_POINTS, true, c20912);
                    if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                        r32 = r31;
                        return coroutine_suspended;
                    }
                    r32 = r31;
                    if (((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                        str3 = str4;
                        Log.d(str3, "recovery update return flashBLEFile()");
                        CustomLog.INSTANCE.writeFile("recovery update return flashBLEFile()", r32.context);
                        if (r32.getSharePref().isBluetoothConnected()) {
                            c20912.L$0 = r32;
                            c20912.label = 30;
                            objFlashBLEFile = r32.flashBLEFile(c20912);
                            if (objFlashBLEFile == coroutine_suspended) {
                                r33 = r32;
                                return coroutine_suspended;
                            }
                            r33 = r32;
                            if (!((Boolean) objFlashBLEFile).booleanValue()) {
                                r33.getSharePref().setFwFlashing(z);
                                Log.d(str3, "isFwFlashing = false");
                            }
                            return Boxing.boxBoolean(true);
                        }
                        return Boxing.boxBoolean(true);
                    }
                    Log.d(str4, "recovery update return truue");
                    return Boxing.boxBoolean(true);
                case 15:
                    FirmWareUpdateWorker firmWareUpdateWorker15 = (FirmWareUpdateWorker) c20912.L$0;
                    ResultKt.throwOnFailure(objBleWriteDownloadCommand$default18);
                    str5 = "%08X";
                    z = false;
                    obj = null;
                    str4 = "TAG_FW";
                    coroutine_suspended = coroutine_suspended;
                    c20912 = c20912;
                    str = "format(...)";
                    c = ':';
                    r17 = firmWareUpdateWorker15;
                    r17 = r16;
                    StringBuilder sbAppend111111111111116 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_GPS_DB_END()).append(c);
                    StringCompanionObject stringCompanionObject111111111111116 = StringCompanionObject.INSTANCE;
                    Object[] objArr111111111111116 = new Object[1];
                    objArr111111111111116[z ? 1 : 0] = Boxing.boxInt(r17.gps_db_file_checksum);
                    String str11111111111113 = String.format(str5, Arrays.copyOf(objArr111111111111116, 1));
                    Intrinsics.checkNotNullExpressionValue(str11111111111113, str);
                    String string111111111111116 = sbAppend111111111111116.append(str11111111111113).toString();
                    c20912.L$0 = r17;
                    c20912.label = 16;
                    objBleWriteDownloadCommand$default10 = bleWriteDownloadCommand$default(r17, string111111111111116, 4000, false, c20912, 4, null);
                    r18 = r17;
                    if (objBleWriteDownloadCommand$default10 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default10).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    StringBuilder sbAppend111111111111117 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE1_START()).append(c).append(r18.if1_file_ver).append(',');
                    StringCompanionObject stringCompanionObject111111111111117 = StringCompanionObject.INSTANCE;
                    Object[] objArr111111111111117 = new Object[1];
                    objArr111111111111117[z ? 1 : 0] = Boxing.boxInt(r18.if1_file_size);
                    String str11111111111114 = String.format(str5, Arrays.copyOf(objArr111111111111117, 1));
                    Intrinsics.checkNotNullExpressionValue(str11111111111114, str);
                    String string111111111111117 = sbAppend111111111111117.append(str11111111111114).toString();
                    c20912.L$0 = r18;
                    c20912.label = 17;
                    objBleWriteDownloadCommand$default11 = bleWriteDownloadCommand$default(r18, string111111111111117, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default11 == coroutine_suspended) {
                        r19 = r18;
                        return coroutine_suspended;
                    }
                    r19 = r18;
                    if (!((Boolean) objBleWriteDownloadCommand$default11).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file6 = r19.file;
                    i12 = r19.if1_file_offset;
                    i13 = r19.if1_file_size;
                    c20912.L$0 = r19;
                    c20912.label = 18;
                    if (r19.writeFileData(file6, i12, i13, c20912) == coroutine_suspended) {
                        r20 = r19;
                        return coroutine_suspended;
                    }
                    r20 = r19;
                    StringBuilder sbAppend111111111111118 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE1_END()).append(c);
                    StringCompanionObject stringCompanionObject111111111111118 = StringCompanionObject.INSTANCE;
                    Object[] objArr111111111111118 = new Object[1];
                    objArr111111111111118[z ? 1 : 0] = Boxing.boxInt(r20.if1_file_checksum);
                    String str11111111111115 = String.format(str5, Arrays.copyOf(objArr111111111111118, 1));
                    Intrinsics.checkNotNullExpressionValue(str11111111111115, str);
                    String string111111111111118 = sbAppend111111111111118.append(str11111111111115).toString();
                    c20912.L$0 = r20;
                    c20912.label = 19;
                    objBleWriteDownloadCommand$default12 = bleWriteDownloadCommand$default(r20, string111111111111118, 4000, false, c20912, 4, null);
                    r21 = r20;
                    if (objBleWriteDownloadCommand$default12 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default12).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    StringBuilder sbAppend111111111111119 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE2_START()).append(c).append(r21.if2_file_ver).append(',');
                    StringCompanionObject stringCompanionObject111111111111119 = StringCompanionObject.INSTANCE;
                    Object[] objArr111111111111119 = new Object[1];
                    objArr111111111111119[z ? 1 : 0] = Boxing.boxInt(r21.if2_file_size);
                    String str11111111111116 = String.format(str5, Arrays.copyOf(objArr111111111111119, 1));
                    Intrinsics.checkNotNullExpressionValue(str11111111111116, str);
                    String string111111111111119 = sbAppend111111111111119.append(str11111111111116).toString();
                    c20912.L$0 = r21;
                    c20912.label = 20;
                    objBleWriteDownloadCommand$default13 = bleWriteDownloadCommand$default(r21, string111111111111119, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default13 == coroutine_suspended) {
                        r22 = r21;
                        return coroutine_suspended;
                    }
                    r22 = r21;
                    if (!((Boolean) objBleWriteDownloadCommand$default13).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file7 = r22.file;
                    i14 = r22.if2_file_offset;
                    i15 = r22.if2_file_size;
                    c20912.L$0 = r22;
                    c20912.label = 21;
                    if (r22.writeFileData(file7, i14, i15, c20912) == coroutine_suspended) {
                        r23 = r22;
                        return coroutine_suspended;
                    }
                    r23 = r22;
                    StringBuilder sbAppend1111111111111110 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE2_END()).append(c);
                    StringCompanionObject stringCompanionObject1111111111111110 = StringCompanionObject.INSTANCE;
                    Object[] objArr1111111111111110 = new Object[1];
                    objArr1111111111111110[z ? 1 : 0] = Boxing.boxInt(r23.if2_file_checksum);
                    String str211111111111 = String.format(str5, Arrays.copyOf(objArr1111111111111110, 1));
                    Intrinsics.checkNotNullExpressionValue(str211111111111, str);
                    String string1111111111111110 = sbAppend1111111111111110.append(str211111111111).toString();
                    c20912.L$0 = r23;
                    c20912.label = 22;
                    objBleWriteDownloadCommand$default14 = bleWriteDownloadCommand$default(r23, string1111111111111110, 4000, false, c20912, 4, null);
                    r24 = r23;
                    if (objBleWriteDownloadCommand$default14 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default14).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    if (!StringsKt.contains$default(r24.getSharePref().getDeviceName(), "R9", z, 2, obj)) {
                        break;
                    }
                    r27 = r24;
                    StringBuilder sbAppend1111111111111111 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE3_START()).append(c).append(r24.if3_file_ver).append(',');
                    StringCompanionObject stringCompanionObject1111111111111111 = StringCompanionObject.INSTANCE;
                    Object[] objArr1111111111111111 = new Object[1];
                    objArr1111111111111111[z ? 1 : 0] = Boxing.boxInt(r24.if3_file_size);
                    String str211111111112 = String.format(str5, Arrays.copyOf(objArr1111111111111111, 1));
                    Intrinsics.checkNotNullExpressionValue(str211111111112, str);
                    String string1111111111111111 = sbAppend1111111111111111.append(str211111111112).toString();
                    c20912.L$0 = r24;
                    c20912.label = 23;
                    objBleWriteDownloadCommand$default15 = bleWriteDownloadCommand$default(r24, string1111111111111111, 4000, false, c20912, 4, null);
                    r25 = r24;
                    if (objBleWriteDownloadCommand$default15 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default15).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file8 = r25.file;
                    i16 = r25.if3_file_offset;
                    i17 = r25.if3_file_size;
                    c20912.L$0 = r25;
                    c20912.label = 24;
                    if (r25.writeFileData(file8, i16, i17, c20912) == coroutine_suspended) {
                        r26 = r25;
                        return coroutine_suspended;
                    }
                    r26 = r25;
                    StringBuilder sbAppend1111111111111112 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE3_END()).append(c);
                    StringCompanionObject stringCompanionObject1111111111111112 = StringCompanionObject.INSTANCE;
                    Object[] objArr1111111111111112 = new Object[1];
                    objArr1111111111111112[z ? 1 : 0] = Boxing.boxInt(r26.if3_file_checksum);
                    String str211111111113 = String.format(str5, Arrays.copyOf(objArr1111111111111112, 1));
                    Intrinsics.checkNotNullExpressionValue(str211111111113, str);
                    String string1111111111111112 = sbAppend1111111111111112.append(str211111111113).toString();
                    c20912.L$0 = r26;
                    c20912.label = 25;
                    objBleWriteDownloadCommand$default16 = bleWriteDownloadCommand$default(r26, string1111111111111112, 4000, false, c20912, 4, null);
                    r28 = r26;
                    if (objBleWriteDownloadCommand$default16 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    r27 = r28;
                    if (!((Boolean) objBleWriteDownloadCommand$default16).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    r27 = r24;
                    StringBuilder sbAppend1111111111111113 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_BLE_START()).append(c).append(r27.ble_file_ver).append(',');
                    StringCompanionObject stringCompanionObject1111111111111113 = StringCompanionObject.INSTANCE;
                    Object[] objArr1111111111111113 = new Object[1];
                    objArr1111111111111113[z ? 1 : 0] = Boxing.boxInt(r27.ble_file_size);
                    String str211111111114 = String.format(str5, Arrays.copyOf(objArr1111111111111113, 1));
                    Intrinsics.checkNotNullExpressionValue(str211111111114, str);
                    String string1111111111111113 = sbAppend1111111111111113.append(str211111111114).toString();
                    c20912.L$0 = r27;
                    c20912.label = 26;
                    objBleWriteDownloadCommand$default17 = bleWriteDownloadCommand$default(r27, string1111111111111113, 4000, false, c20912, 4, null);
                    r29 = r27;
                    if (objBleWriteDownloadCommand$default17 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default17).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file9 = r29.file;
                    i18 = r29.ble_file_offset;
                    i19 = r29.ble_file_size;
                    c20912.L$0 = r29;
                    c20912.label = 27;
                    if (r29.writeFileData(file9, i18, i19, c20912) == coroutine_suspended) {
                        r30 = r29;
                        return coroutine_suspended;
                    }
                    r30 = r29;
                    StringBuilder sbAppend1111111111111114 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_BLE_END()).append(c);
                    StringCompanionObject stringCompanionObject1111111111111114 = StringCompanionObject.INSTANCE;
                    Object[] objArr1111111111111114 = new Object[1];
                    objArr1111111111111114[z ? 1 : 0] = Boxing.boxInt(r30.ble_file_checksum);
                    String str211111111115 = String.format(str5, Arrays.copyOf(objArr1111111111111114, 1));
                    Intrinsics.checkNotNullExpressionValue(str211111111115, str);
                    String string1111111111111114 = sbAppend1111111111111114.append(str211111111115).toString();
                    c20912.L$0 = r30;
                    c20912.label = 28;
                    objBleWriteDownloadCommand$default18 = bleWriteDownloadCommand$default(r30, string1111111111111114, 4000, false, c20912, 4, null);
                    r31 = r30;
                    if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    String str211111111116 = BluetoothUtils.INSTANCE.getFD_END_COM() + ":1";
                    r31.getSharePref().setFwDownloadComplete(true);
                    r31.getSharePref().setFwFlashing(z);
                    r31.getMyApp().getFirmwareUpdateProcessBT().postValue(new UpdateProgressModel(FIrmWareUpdateProcess.FILE_INSTALL_FINISH, "", ""));
                    c20912.L$0 = r31;
                    c20912.label = 29;
                    objBleWriteDownloadCommand$default18 = r31.bleWriteDownloadCommand(str211111111116, PathInterpolatorCompat.MAX_NUM_POINTS, true, c20912);
                    if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                        r32 = r31;
                        return coroutine_suspended;
                    }
                    r32 = r31;
                    if (((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                        str3 = str4;
                        Log.d(str3, "recovery update return flashBLEFile()");
                        CustomLog.INSTANCE.writeFile("recovery update return flashBLEFile()", r32.context);
                        if (r32.getSharePref().isBluetoothConnected()) {
                            c20912.L$0 = r32;
                            c20912.label = 30;
                            objFlashBLEFile = r32.flashBLEFile(c20912);
                            if (objFlashBLEFile == coroutine_suspended) {
                                r33 = r32;
                                return coroutine_suspended;
                            }
                            r33 = r32;
                            if (!((Boolean) objFlashBLEFile).booleanValue()) {
                                r33.getSharePref().setFwFlashing(z);
                                Log.d(str3, "isFwFlashing = false");
                            }
                            return Boxing.boxBoolean(true);
                        }
                        return Boxing.boxBoolean(true);
                    }
                    Log.d(str4, "recovery update return truue");
                    return Boxing.boxBoolean(true);
                case 16:
                    FirmWareUpdateWorker firmWareUpdateWorker16 = (FirmWareUpdateWorker) c20912.L$0;
                    ResultKt.throwOnFailure(objBleWriteDownloadCommand$default18);
                    z = false;
                    obj = null;
                    str4 = "TAG_FW";
                    coroutine_suspended = coroutine_suspended;
                    c20912 = c20912;
                    c = ':';
                    objBleWriteDownloadCommand$default10 = objBleWriteDownloadCommand$default18;
                    str5 = "%08X";
                    str = "format(...)";
                    r18 = firmWareUpdateWorker16;
                    if (!((Boolean) objBleWriteDownloadCommand$default10).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    StringBuilder sbAppend1111111111111115 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE1_START()).append(c).append(r18.if1_file_ver).append(',');
                    StringCompanionObject stringCompanionObject1111111111111115 = StringCompanionObject.INSTANCE;
                    Object[] objArr1111111111111115 = new Object[1];
                    objArr1111111111111115[z ? 1 : 0] = Boxing.boxInt(r18.if1_file_size);
                    String str11111111111117 = String.format(str5, Arrays.copyOf(objArr1111111111111115, 1));
                    Intrinsics.checkNotNullExpressionValue(str11111111111117, str);
                    String string1111111111111115 = sbAppend1111111111111115.append(str11111111111117).toString();
                    c20912.L$0 = r18;
                    c20912.label = 17;
                    objBleWriteDownloadCommand$default11 = bleWriteDownloadCommand$default(r18, string1111111111111115, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default11 == coroutine_suspended) {
                        r19 = r18;
                        return coroutine_suspended;
                    }
                    r19 = r18;
                    if (!((Boolean) objBleWriteDownloadCommand$default11).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file6 = r19.file;
                    i12 = r19.if1_file_offset;
                    i13 = r19.if1_file_size;
                    c20912.L$0 = r19;
                    c20912.label = 18;
                    if (r19.writeFileData(file6, i12, i13, c20912) == coroutine_suspended) {
                        r20 = r19;
                        return coroutine_suspended;
                    }
                    r20 = r19;
                    StringBuilder sbAppend1111111111111116 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE1_END()).append(c);
                    StringCompanionObject stringCompanionObject1111111111111116 = StringCompanionObject.INSTANCE;
                    Object[] objArr1111111111111116 = new Object[1];
                    objArr1111111111111116[z ? 1 : 0] = Boxing.boxInt(r20.if1_file_checksum);
                    String str11111111111118 = String.format(str5, Arrays.copyOf(objArr1111111111111116, 1));
                    Intrinsics.checkNotNullExpressionValue(str11111111111118, str);
                    String string1111111111111116 = sbAppend1111111111111116.append(str11111111111118).toString();
                    c20912.L$0 = r20;
                    c20912.label = 19;
                    objBleWriteDownloadCommand$default12 = bleWriteDownloadCommand$default(r20, string1111111111111116, 4000, false, c20912, 4, null);
                    r21 = r20;
                    if (objBleWriteDownloadCommand$default12 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default12).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    StringBuilder sbAppend1111111111111117 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE2_START()).append(c).append(r21.if2_file_ver).append(',');
                    StringCompanionObject stringCompanionObject1111111111111117 = StringCompanionObject.INSTANCE;
                    Object[] objArr1111111111111117 = new Object[1];
                    objArr1111111111111117[z ? 1 : 0] = Boxing.boxInt(r21.if2_file_size);
                    String str11111111111119 = String.format(str5, Arrays.copyOf(objArr1111111111111117, 1));
                    Intrinsics.checkNotNullExpressionValue(str11111111111119, str);
                    String string1111111111111117 = sbAppend1111111111111117.append(str11111111111119).toString();
                    c20912.L$0 = r21;
                    c20912.label = 20;
                    objBleWriteDownloadCommand$default13 = bleWriteDownloadCommand$default(r21, string1111111111111117, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default13 == coroutine_suspended) {
                        r22 = r21;
                        return coroutine_suspended;
                    }
                    r22 = r21;
                    if (!((Boolean) objBleWriteDownloadCommand$default13).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file7 = r22.file;
                    i14 = r22.if2_file_offset;
                    i15 = r22.if2_file_size;
                    c20912.L$0 = r22;
                    c20912.label = 21;
                    if (r22.writeFileData(file7, i14, i15, c20912) == coroutine_suspended) {
                        r23 = r22;
                        return coroutine_suspended;
                    }
                    r23 = r22;
                    StringBuilder sbAppend1111111111111118 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE2_END()).append(c);
                    StringCompanionObject stringCompanionObject1111111111111118 = StringCompanionObject.INSTANCE;
                    Object[] objArr1111111111111118 = new Object[1];
                    objArr1111111111111118[z ? 1 : 0] = Boxing.boxInt(r23.if2_file_checksum);
                    String str211111111117 = String.format(str5, Arrays.copyOf(objArr1111111111111118, 1));
                    Intrinsics.checkNotNullExpressionValue(str211111111117, str);
                    String string1111111111111118 = sbAppend1111111111111118.append(str211111111117).toString();
                    c20912.L$0 = r23;
                    c20912.label = 22;
                    objBleWriteDownloadCommand$default14 = bleWriteDownloadCommand$default(r23, string1111111111111118, 4000, false, c20912, 4, null);
                    r24 = r23;
                    if (objBleWriteDownloadCommand$default14 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default14).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    if (!StringsKt.contains$default(r24.getSharePref().getDeviceName(), "R9", z, 2, obj)) {
                        break;
                    }
                    r27 = r24;
                    StringBuilder sbAppend1111111111111119 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE3_START()).append(c).append(r24.if3_file_ver).append(',');
                    StringCompanionObject stringCompanionObject1111111111111119 = StringCompanionObject.INSTANCE;
                    Object[] objArr1111111111111119 = new Object[1];
                    objArr1111111111111119[z ? 1 : 0] = Boxing.boxInt(r24.if3_file_size);
                    String str211111111118 = String.format(str5, Arrays.copyOf(objArr1111111111111119, 1));
                    Intrinsics.checkNotNullExpressionValue(str211111111118, str);
                    String string1111111111111119 = sbAppend1111111111111119.append(str211111111118).toString();
                    c20912.L$0 = r24;
                    c20912.label = 23;
                    objBleWriteDownloadCommand$default15 = bleWriteDownloadCommand$default(r24, string1111111111111119, 4000, false, c20912, 4, null);
                    r25 = r24;
                    if (objBleWriteDownloadCommand$default15 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default15).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file8 = r25.file;
                    i16 = r25.if3_file_offset;
                    i17 = r25.if3_file_size;
                    c20912.L$0 = r25;
                    c20912.label = 24;
                    if (r25.writeFileData(file8, i16, i17, c20912) == coroutine_suspended) {
                        r26 = r25;
                        return coroutine_suspended;
                    }
                    r26 = r25;
                    StringBuilder sbAppend11111111111111110 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE3_END()).append(c);
                    StringCompanionObject stringCompanionObject11111111111111110 = StringCompanionObject.INSTANCE;
                    Object[] objArr11111111111111110 = new Object[1];
                    objArr11111111111111110[z ? 1 : 0] = Boxing.boxInt(r26.if3_file_checksum);
                    String str211111111119 = String.format(str5, Arrays.copyOf(objArr11111111111111110, 1));
                    Intrinsics.checkNotNullExpressionValue(str211111111119, str);
                    String string11111111111111110 = sbAppend11111111111111110.append(str211111111119).toString();
                    c20912.L$0 = r26;
                    c20912.label = 25;
                    objBleWriteDownloadCommand$default16 = bleWriteDownloadCommand$default(r26, string11111111111111110, 4000, false, c20912, 4, null);
                    r28 = r26;
                    if (objBleWriteDownloadCommand$default16 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    r27 = r28;
                    if (!((Boolean) objBleWriteDownloadCommand$default16).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    r27 = r24;
                    StringBuilder sbAppend11111111111111111 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_BLE_START()).append(c).append(r27.ble_file_ver).append(',');
                    StringCompanionObject stringCompanionObject11111111111111111 = StringCompanionObject.INSTANCE;
                    Object[] objArr11111111111111111 = new Object[1];
                    objArr11111111111111111[z ? 1 : 0] = Boxing.boxInt(r27.ble_file_size);
                    String str2111111111110 = String.format(str5, Arrays.copyOf(objArr11111111111111111, 1));
                    Intrinsics.checkNotNullExpressionValue(str2111111111110, str);
                    String string11111111111111111 = sbAppend11111111111111111.append(str2111111111110).toString();
                    c20912.L$0 = r27;
                    c20912.label = 26;
                    objBleWriteDownloadCommand$default17 = bleWriteDownloadCommand$default(r27, string11111111111111111, 4000, false, c20912, 4, null);
                    r29 = r27;
                    if (objBleWriteDownloadCommand$default17 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default17).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file9 = r29.file;
                    i18 = r29.ble_file_offset;
                    i19 = r29.ble_file_size;
                    c20912.L$0 = r29;
                    c20912.label = 27;
                    if (r29.writeFileData(file9, i18, i19, c20912) == coroutine_suspended) {
                        r30 = r29;
                        return coroutine_suspended;
                    }
                    r30 = r29;
                    StringBuilder sbAppend11111111111111112 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_BLE_END()).append(c);
                    StringCompanionObject stringCompanionObject11111111111111112 = StringCompanionObject.INSTANCE;
                    Object[] objArr11111111111111112 = new Object[1];
                    objArr11111111111111112[z ? 1 : 0] = Boxing.boxInt(r30.ble_file_checksum);
                    String str2111111111111 = String.format(str5, Arrays.copyOf(objArr11111111111111112, 1));
                    Intrinsics.checkNotNullExpressionValue(str2111111111111, str);
                    String string11111111111111112 = sbAppend11111111111111112.append(str2111111111111).toString();
                    c20912.L$0 = r30;
                    c20912.label = 28;
                    objBleWriteDownloadCommand$default18 = bleWriteDownloadCommand$default(r30, string11111111111111112, 4000, false, c20912, 4, null);
                    r31 = r30;
                    if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    String str2111111111112 = BluetoothUtils.INSTANCE.getFD_END_COM() + ":1";
                    r31.getSharePref().setFwDownloadComplete(true);
                    r31.getSharePref().setFwFlashing(z);
                    r31.getMyApp().getFirmwareUpdateProcessBT().postValue(new UpdateProgressModel(FIrmWareUpdateProcess.FILE_INSTALL_FINISH, "", ""));
                    c20912.L$0 = r31;
                    c20912.label = 29;
                    objBleWriteDownloadCommand$default18 = r31.bleWriteDownloadCommand(str2111111111112, PathInterpolatorCompat.MAX_NUM_POINTS, true, c20912);
                    if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                        r32 = r31;
                        return coroutine_suspended;
                    }
                    r32 = r31;
                    if (((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                        str3 = str4;
                        Log.d(str3, "recovery update return flashBLEFile()");
                        CustomLog.INSTANCE.writeFile("recovery update return flashBLEFile()", r32.context);
                        if (r32.getSharePref().isBluetoothConnected()) {
                            c20912.L$0 = r32;
                            c20912.label = 30;
                            objFlashBLEFile = r32.flashBLEFile(c20912);
                            if (objFlashBLEFile == coroutine_suspended) {
                                r33 = r32;
                                return coroutine_suspended;
                            }
                            r33 = r32;
                            if (!((Boolean) objFlashBLEFile).booleanValue()) {
                                r33.getSharePref().setFwFlashing(z);
                                Log.d(str3, "isFwFlashing = false");
                            }
                            return Boxing.boxBoolean(true);
                        }
                        return Boxing.boxBoolean(true);
                    }
                    Log.d(str4, "recovery update return truue");
                    return Boxing.boxBoolean(true);
                case 17:
                    FirmWareUpdateWorker firmWareUpdateWorker17 = (FirmWareUpdateWorker) c20912.L$0;
                    ResultKt.throwOnFailure(objBleWriteDownloadCommand$default18);
                    z = false;
                    obj = null;
                    str4 = "TAG_FW";
                    coroutine_suspended = coroutine_suspended;
                    c20912 = c20912;
                    c = ':';
                    objBleWriteDownloadCommand$default11 = objBleWriteDownloadCommand$default18;
                    str5 = "%08X";
                    str = "format(...)";
                    r19 = firmWareUpdateWorker17;
                    r19 = r18;
                    if (!((Boolean) objBleWriteDownloadCommand$default11).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file6 = r19.file;
                    i12 = r19.if1_file_offset;
                    i13 = r19.if1_file_size;
                    c20912.L$0 = r19;
                    c20912.label = 18;
                    if (r19.writeFileData(file6, i12, i13, c20912) == coroutine_suspended) {
                        r20 = r19;
                        return coroutine_suspended;
                    }
                    r20 = r19;
                    StringBuilder sbAppend11111111111111113 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE1_END()).append(c);
                    StringCompanionObject stringCompanionObject11111111111111113 = StringCompanionObject.INSTANCE;
                    Object[] objArr11111111111111113 = new Object[1];
                    objArr11111111111111113[z ? 1 : 0] = Boxing.boxInt(r20.if1_file_checksum);
                    String str111111111111110 = String.format(str5, Arrays.copyOf(objArr11111111111111113, 1));
                    Intrinsics.checkNotNullExpressionValue(str111111111111110, str);
                    String string11111111111111113 = sbAppend11111111111111113.append(str111111111111110).toString();
                    c20912.L$0 = r20;
                    c20912.label = 19;
                    objBleWriteDownloadCommand$default12 = bleWriteDownloadCommand$default(r20, string11111111111111113, 4000, false, c20912, 4, null);
                    r21 = r20;
                    if (objBleWriteDownloadCommand$default12 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default12).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    StringBuilder sbAppend11111111111111114 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE2_START()).append(c).append(r21.if2_file_ver).append(',');
                    StringCompanionObject stringCompanionObject11111111111111114 = StringCompanionObject.INSTANCE;
                    Object[] objArr11111111111111114 = new Object[1];
                    objArr11111111111111114[z ? 1 : 0] = Boxing.boxInt(r21.if2_file_size);
                    String str111111111111111 = String.format(str5, Arrays.copyOf(objArr11111111111111114, 1));
                    Intrinsics.checkNotNullExpressionValue(str111111111111111, str);
                    String string11111111111111114 = sbAppend11111111111111114.append(str111111111111111).toString();
                    c20912.L$0 = r21;
                    c20912.label = 20;
                    objBleWriteDownloadCommand$default13 = bleWriteDownloadCommand$default(r21, string11111111111111114, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default13 == coroutine_suspended) {
                        r22 = r21;
                        return coroutine_suspended;
                    }
                    r22 = r21;
                    if (!((Boolean) objBleWriteDownloadCommand$default13).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file7 = r22.file;
                    i14 = r22.if2_file_offset;
                    i15 = r22.if2_file_size;
                    c20912.L$0 = r22;
                    c20912.label = 21;
                    if (r22.writeFileData(file7, i14, i15, c20912) == coroutine_suspended) {
                        r23 = r22;
                        return coroutine_suspended;
                    }
                    r23 = r22;
                    StringBuilder sbAppend11111111111111115 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE2_END()).append(c);
                    StringCompanionObject stringCompanionObject11111111111111115 = StringCompanionObject.INSTANCE;
                    Object[] objArr11111111111111115 = new Object[1];
                    objArr11111111111111115[z ? 1 : 0] = Boxing.boxInt(r23.if2_file_checksum);
                    String str2111111111113 = String.format(str5, Arrays.copyOf(objArr11111111111111115, 1));
                    Intrinsics.checkNotNullExpressionValue(str2111111111113, str);
                    String string11111111111111115 = sbAppend11111111111111115.append(str2111111111113).toString();
                    c20912.L$0 = r23;
                    c20912.label = 22;
                    objBleWriteDownloadCommand$default14 = bleWriteDownloadCommand$default(r23, string11111111111111115, 4000, false, c20912, 4, null);
                    r24 = r23;
                    if (objBleWriteDownloadCommand$default14 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default14).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    if (!StringsKt.contains$default(r24.getSharePref().getDeviceName(), "R9", z, 2, obj)) {
                        break;
                    }
                    r27 = r24;
                    StringBuilder sbAppend11111111111111116 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE3_START()).append(c).append(r24.if3_file_ver).append(',');
                    StringCompanionObject stringCompanionObject11111111111111116 = StringCompanionObject.INSTANCE;
                    Object[] objArr11111111111111116 = new Object[1];
                    objArr11111111111111116[z ? 1 : 0] = Boxing.boxInt(r24.if3_file_size);
                    String str2111111111114 = String.format(str5, Arrays.copyOf(objArr11111111111111116, 1));
                    Intrinsics.checkNotNullExpressionValue(str2111111111114, str);
                    String string11111111111111116 = sbAppend11111111111111116.append(str2111111111114).toString();
                    c20912.L$0 = r24;
                    c20912.label = 23;
                    objBleWriteDownloadCommand$default15 = bleWriteDownloadCommand$default(r24, string11111111111111116, 4000, false, c20912, 4, null);
                    r25 = r24;
                    if (objBleWriteDownloadCommand$default15 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default15).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file8 = r25.file;
                    i16 = r25.if3_file_offset;
                    i17 = r25.if3_file_size;
                    c20912.L$0 = r25;
                    c20912.label = 24;
                    if (r25.writeFileData(file8, i16, i17, c20912) == coroutine_suspended) {
                        r26 = r25;
                        return coroutine_suspended;
                    }
                    r26 = r25;
                    StringBuilder sbAppend11111111111111117 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE3_END()).append(c);
                    StringCompanionObject stringCompanionObject11111111111111117 = StringCompanionObject.INSTANCE;
                    Object[] objArr11111111111111117 = new Object[1];
                    objArr11111111111111117[z ? 1 : 0] = Boxing.boxInt(r26.if3_file_checksum);
                    String str2111111111115 = String.format(str5, Arrays.copyOf(objArr11111111111111117, 1));
                    Intrinsics.checkNotNullExpressionValue(str2111111111115, str);
                    String string11111111111111117 = sbAppend11111111111111117.append(str2111111111115).toString();
                    c20912.L$0 = r26;
                    c20912.label = 25;
                    objBleWriteDownloadCommand$default16 = bleWriteDownloadCommand$default(r26, string11111111111111117, 4000, false, c20912, 4, null);
                    r28 = r26;
                    if (objBleWriteDownloadCommand$default16 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    r27 = r28;
                    if (!((Boolean) objBleWriteDownloadCommand$default16).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    r27 = r24;
                    StringBuilder sbAppend11111111111111118 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_BLE_START()).append(c).append(r27.ble_file_ver).append(',');
                    StringCompanionObject stringCompanionObject11111111111111118 = StringCompanionObject.INSTANCE;
                    Object[] objArr11111111111111118 = new Object[1];
                    objArr11111111111111118[z ? 1 : 0] = Boxing.boxInt(r27.ble_file_size);
                    String str2111111111116 = String.format(str5, Arrays.copyOf(objArr11111111111111118, 1));
                    Intrinsics.checkNotNullExpressionValue(str2111111111116, str);
                    String string11111111111111118 = sbAppend11111111111111118.append(str2111111111116).toString();
                    c20912.L$0 = r27;
                    c20912.label = 26;
                    objBleWriteDownloadCommand$default17 = bleWriteDownloadCommand$default(r27, string11111111111111118, 4000, false, c20912, 4, null);
                    r29 = r27;
                    if (objBleWriteDownloadCommand$default17 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default17).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file9 = r29.file;
                    i18 = r29.ble_file_offset;
                    i19 = r29.ble_file_size;
                    c20912.L$0 = r29;
                    c20912.label = 27;
                    if (r29.writeFileData(file9, i18, i19, c20912) == coroutine_suspended) {
                        r30 = r29;
                        return coroutine_suspended;
                    }
                    r30 = r29;
                    StringBuilder sbAppend11111111111111119 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_BLE_END()).append(c);
                    StringCompanionObject stringCompanionObject11111111111111119 = StringCompanionObject.INSTANCE;
                    Object[] objArr11111111111111119 = new Object[1];
                    objArr11111111111111119[z ? 1 : 0] = Boxing.boxInt(r30.ble_file_checksum);
                    String str2111111111117 = String.format(str5, Arrays.copyOf(objArr11111111111111119, 1));
                    Intrinsics.checkNotNullExpressionValue(str2111111111117, str);
                    String string11111111111111119 = sbAppend11111111111111119.append(str2111111111117).toString();
                    c20912.L$0 = r30;
                    c20912.label = 28;
                    objBleWriteDownloadCommand$default18 = bleWriteDownloadCommand$default(r30, string11111111111111119, 4000, false, c20912, 4, null);
                    r31 = r30;
                    if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    String str2111111111118 = BluetoothUtils.INSTANCE.getFD_END_COM() + ":1";
                    r31.getSharePref().setFwDownloadComplete(true);
                    r31.getSharePref().setFwFlashing(z);
                    r31.getMyApp().getFirmwareUpdateProcessBT().postValue(new UpdateProgressModel(FIrmWareUpdateProcess.FILE_INSTALL_FINISH, "", ""));
                    c20912.L$0 = r31;
                    c20912.label = 29;
                    objBleWriteDownloadCommand$default18 = r31.bleWriteDownloadCommand(str2111111111118, PathInterpolatorCompat.MAX_NUM_POINTS, true, c20912);
                    if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                        r32 = r31;
                        return coroutine_suspended;
                    }
                    r32 = r31;
                    if (((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                        str3 = str4;
                        Log.d(str3, "recovery update return flashBLEFile()");
                        CustomLog.INSTANCE.writeFile("recovery update return flashBLEFile()", r32.context);
                        if (r32.getSharePref().isBluetoothConnected()) {
                            c20912.L$0 = r32;
                            c20912.label = 30;
                            objFlashBLEFile = r32.flashBLEFile(c20912);
                            if (objFlashBLEFile == coroutine_suspended) {
                                r33 = r32;
                                return coroutine_suspended;
                            }
                            r33 = r32;
                            if (!((Boolean) objFlashBLEFile).booleanValue()) {
                                r33.getSharePref().setFwFlashing(z);
                                Log.d(str3, "isFwFlashing = false");
                            }
                            return Boxing.boxBoolean(true);
                        }
                        return Boxing.boxBoolean(true);
                    }
                    Log.d(str4, "recovery update return truue");
                    return Boxing.boxBoolean(true);
                case 18:
                    FirmWareUpdateWorker firmWareUpdateWorker18 = (FirmWareUpdateWorker) c20912.L$0;
                    ResultKt.throwOnFailure(objBleWriteDownloadCommand$default18);
                    str5 = "%08X";
                    z = false;
                    obj = null;
                    str4 = "TAG_FW";
                    coroutine_suspended = coroutine_suspended;
                    c20912 = c20912;
                    str = "format(...)";
                    c = ':';
                    r20 = firmWareUpdateWorker18;
                    r20 = r19;
                    StringBuilder sbAppend111111111111111110 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE1_END()).append(c);
                    StringCompanionObject stringCompanionObject111111111111111110 = StringCompanionObject.INSTANCE;
                    Object[] objArr111111111111111110 = new Object[1];
                    objArr111111111111111110[z ? 1 : 0] = Boxing.boxInt(r20.if1_file_checksum);
                    String str111111111111112 = String.format(str5, Arrays.copyOf(objArr111111111111111110, 1));
                    Intrinsics.checkNotNullExpressionValue(str111111111111112, str);
                    String string111111111111111110 = sbAppend111111111111111110.append(str111111111111112).toString();
                    c20912.L$0 = r20;
                    c20912.label = 19;
                    objBleWriteDownloadCommand$default12 = bleWriteDownloadCommand$default(r20, string111111111111111110, 4000, false, c20912, 4, null);
                    r21 = r20;
                    if (objBleWriteDownloadCommand$default12 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default12).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    StringBuilder sbAppend111111111111111111 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE2_START()).append(c).append(r21.if2_file_ver).append(',');
                    StringCompanionObject stringCompanionObject111111111111111111 = StringCompanionObject.INSTANCE;
                    Object[] objArr111111111111111111 = new Object[1];
                    objArr111111111111111111[z ? 1 : 0] = Boxing.boxInt(r21.if2_file_size);
                    String str111111111111113 = String.format(str5, Arrays.copyOf(objArr111111111111111111, 1));
                    Intrinsics.checkNotNullExpressionValue(str111111111111113, str);
                    String string111111111111111111 = sbAppend111111111111111111.append(str111111111111113).toString();
                    c20912.L$0 = r21;
                    c20912.label = 20;
                    objBleWriteDownloadCommand$default13 = bleWriteDownloadCommand$default(r21, string111111111111111111, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default13 == coroutine_suspended) {
                        r22 = r21;
                        return coroutine_suspended;
                    }
                    r22 = r21;
                    if (!((Boolean) objBleWriteDownloadCommand$default13).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file7 = r22.file;
                    i14 = r22.if2_file_offset;
                    i15 = r22.if2_file_size;
                    c20912.L$0 = r22;
                    c20912.label = 21;
                    if (r22.writeFileData(file7, i14, i15, c20912) == coroutine_suspended) {
                        r23 = r22;
                        return coroutine_suspended;
                    }
                    r23 = r22;
                    StringBuilder sbAppend111111111111111112 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE2_END()).append(c);
                    StringCompanionObject stringCompanionObject111111111111111112 = StringCompanionObject.INSTANCE;
                    Object[] objArr111111111111111112 = new Object[1];
                    objArr111111111111111112[z ? 1 : 0] = Boxing.boxInt(r23.if2_file_checksum);
                    String str2111111111119 = String.format(str5, Arrays.copyOf(objArr111111111111111112, 1));
                    Intrinsics.checkNotNullExpressionValue(str2111111111119, str);
                    String string111111111111111112 = sbAppend111111111111111112.append(str2111111111119).toString();
                    c20912.L$0 = r23;
                    c20912.label = 22;
                    objBleWriteDownloadCommand$default14 = bleWriteDownloadCommand$default(r23, string111111111111111112, 4000, false, c20912, 4, null);
                    r24 = r23;
                    if (objBleWriteDownloadCommand$default14 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default14).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    if (!StringsKt.contains$default(r24.getSharePref().getDeviceName(), "R9", z, 2, obj)) {
                        break;
                    }
                    r27 = r24;
                    StringBuilder sbAppend111111111111111113 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE3_START()).append(c).append(r24.if3_file_ver).append(',');
                    StringCompanionObject stringCompanionObject111111111111111113 = StringCompanionObject.INSTANCE;
                    Object[] objArr111111111111111113 = new Object[1];
                    objArr111111111111111113[z ? 1 : 0] = Boxing.boxInt(r24.if3_file_size);
                    String str21111111111110 = String.format(str5, Arrays.copyOf(objArr111111111111111113, 1));
                    Intrinsics.checkNotNullExpressionValue(str21111111111110, str);
                    String string111111111111111113 = sbAppend111111111111111113.append(str21111111111110).toString();
                    c20912.L$0 = r24;
                    c20912.label = 23;
                    objBleWriteDownloadCommand$default15 = bleWriteDownloadCommand$default(r24, string111111111111111113, 4000, false, c20912, 4, null);
                    r25 = r24;
                    if (objBleWriteDownloadCommand$default15 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default15).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file8 = r25.file;
                    i16 = r25.if3_file_offset;
                    i17 = r25.if3_file_size;
                    c20912.L$0 = r25;
                    c20912.label = 24;
                    if (r25.writeFileData(file8, i16, i17, c20912) == coroutine_suspended) {
                        r26 = r25;
                        return coroutine_suspended;
                    }
                    r26 = r25;
                    StringBuilder sbAppend111111111111111114 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE3_END()).append(c);
                    StringCompanionObject stringCompanionObject111111111111111114 = StringCompanionObject.INSTANCE;
                    Object[] objArr111111111111111114 = new Object[1];
                    objArr111111111111111114[z ? 1 : 0] = Boxing.boxInt(r26.if3_file_checksum);
                    String str21111111111111 = String.format(str5, Arrays.copyOf(objArr111111111111111114, 1));
                    Intrinsics.checkNotNullExpressionValue(str21111111111111, str);
                    String string111111111111111114 = sbAppend111111111111111114.append(str21111111111111).toString();
                    c20912.L$0 = r26;
                    c20912.label = 25;
                    objBleWriteDownloadCommand$default16 = bleWriteDownloadCommand$default(r26, string111111111111111114, 4000, false, c20912, 4, null);
                    r28 = r26;
                    if (objBleWriteDownloadCommand$default16 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    r27 = r28;
                    if (!((Boolean) objBleWriteDownloadCommand$default16).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    r27 = r24;
                    StringBuilder sbAppend111111111111111115 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_BLE_START()).append(c).append(r27.ble_file_ver).append(',');
                    StringCompanionObject stringCompanionObject111111111111111115 = StringCompanionObject.INSTANCE;
                    Object[] objArr111111111111111115 = new Object[1];
                    objArr111111111111111115[z ? 1 : 0] = Boxing.boxInt(r27.ble_file_size);
                    String str21111111111112 = String.format(str5, Arrays.copyOf(objArr111111111111111115, 1));
                    Intrinsics.checkNotNullExpressionValue(str21111111111112, str);
                    String string111111111111111115 = sbAppend111111111111111115.append(str21111111111112).toString();
                    c20912.L$0 = r27;
                    c20912.label = 26;
                    objBleWriteDownloadCommand$default17 = bleWriteDownloadCommand$default(r27, string111111111111111115, 4000, false, c20912, 4, null);
                    r29 = r27;
                    if (objBleWriteDownloadCommand$default17 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default17).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file9 = r29.file;
                    i18 = r29.ble_file_offset;
                    i19 = r29.ble_file_size;
                    c20912.L$0 = r29;
                    c20912.label = 27;
                    if (r29.writeFileData(file9, i18, i19, c20912) == coroutine_suspended) {
                        r30 = r29;
                        return coroutine_suspended;
                    }
                    r30 = r29;
                    StringBuilder sbAppend111111111111111116 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_BLE_END()).append(c);
                    StringCompanionObject stringCompanionObject111111111111111116 = StringCompanionObject.INSTANCE;
                    Object[] objArr111111111111111116 = new Object[1];
                    objArr111111111111111116[z ? 1 : 0] = Boxing.boxInt(r30.ble_file_checksum);
                    String str21111111111113 = String.format(str5, Arrays.copyOf(objArr111111111111111116, 1));
                    Intrinsics.checkNotNullExpressionValue(str21111111111113, str);
                    String string111111111111111116 = sbAppend111111111111111116.append(str21111111111113).toString();
                    c20912.L$0 = r30;
                    c20912.label = 28;
                    objBleWriteDownloadCommand$default18 = bleWriteDownloadCommand$default(r30, string111111111111111116, 4000, false, c20912, 4, null);
                    r31 = r30;
                    if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    String str21111111111114 = BluetoothUtils.INSTANCE.getFD_END_COM() + ":1";
                    r31.getSharePref().setFwDownloadComplete(true);
                    r31.getSharePref().setFwFlashing(z);
                    r31.getMyApp().getFirmwareUpdateProcessBT().postValue(new UpdateProgressModel(FIrmWareUpdateProcess.FILE_INSTALL_FINISH, "", ""));
                    c20912.L$0 = r31;
                    c20912.label = 29;
                    objBleWriteDownloadCommand$default18 = r31.bleWriteDownloadCommand(str21111111111114, PathInterpolatorCompat.MAX_NUM_POINTS, true, c20912);
                    if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                        r32 = r31;
                        return coroutine_suspended;
                    }
                    r32 = r31;
                    if (((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                        str3 = str4;
                        Log.d(str3, "recovery update return flashBLEFile()");
                        CustomLog.INSTANCE.writeFile("recovery update return flashBLEFile()", r32.context);
                        if (r32.getSharePref().isBluetoothConnected()) {
                            c20912.L$0 = r32;
                            c20912.label = 30;
                            objFlashBLEFile = r32.flashBLEFile(c20912);
                            if (objFlashBLEFile == coroutine_suspended) {
                                r33 = r32;
                                return coroutine_suspended;
                            }
                            r33 = r32;
                            if (!((Boolean) objFlashBLEFile).booleanValue()) {
                                r33.getSharePref().setFwFlashing(z);
                                Log.d(str3, "isFwFlashing = false");
                            }
                            return Boxing.boxBoolean(true);
                        }
                        return Boxing.boxBoolean(true);
                    }
                    Log.d(str4, "recovery update return truue");
                    return Boxing.boxBoolean(true);
                case 19:
                    FirmWareUpdateWorker firmWareUpdateWorker19 = (FirmWareUpdateWorker) c20912.L$0;
                    ResultKt.throwOnFailure(objBleWriteDownloadCommand$default18);
                    z = false;
                    obj = null;
                    str4 = "TAG_FW";
                    coroutine_suspended = coroutine_suspended;
                    c20912 = c20912;
                    c = ':';
                    objBleWriteDownloadCommand$default12 = objBleWriteDownloadCommand$default18;
                    str5 = "%08X";
                    str = "format(...)";
                    r21 = firmWareUpdateWorker19;
                    if (!((Boolean) objBleWriteDownloadCommand$default12).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    StringBuilder sbAppend111111111111111117 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE2_START()).append(c).append(r21.if2_file_ver).append(',');
                    StringCompanionObject stringCompanionObject111111111111111117 = StringCompanionObject.INSTANCE;
                    Object[] objArr111111111111111117 = new Object[1];
                    objArr111111111111111117[z ? 1 : 0] = Boxing.boxInt(r21.if2_file_size);
                    String str111111111111114 = String.format(str5, Arrays.copyOf(objArr111111111111111117, 1));
                    Intrinsics.checkNotNullExpressionValue(str111111111111114, str);
                    String string111111111111111117 = sbAppend111111111111111117.append(str111111111111114).toString();
                    c20912.L$0 = r21;
                    c20912.label = 20;
                    objBleWriteDownloadCommand$default13 = bleWriteDownloadCommand$default(r21, string111111111111111117, 4000, false, c20912, 4, null);
                    if (objBleWriteDownloadCommand$default13 == coroutine_suspended) {
                        r22 = r21;
                        return coroutine_suspended;
                    }
                    r22 = r21;
                    if (!((Boolean) objBleWriteDownloadCommand$default13).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file7 = r22.file;
                    i14 = r22.if2_file_offset;
                    i15 = r22.if2_file_size;
                    c20912.L$0 = r22;
                    c20912.label = 21;
                    if (r22.writeFileData(file7, i14, i15, c20912) == coroutine_suspended) {
                        r23 = r22;
                        return coroutine_suspended;
                    }
                    r23 = r22;
                    StringBuilder sbAppend111111111111111118 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE2_END()).append(c);
                    StringCompanionObject stringCompanionObject111111111111111118 = StringCompanionObject.INSTANCE;
                    Object[] objArr111111111111111118 = new Object[1];
                    objArr111111111111111118[z ? 1 : 0] = Boxing.boxInt(r23.if2_file_checksum);
                    String str21111111111115 = String.format(str5, Arrays.copyOf(objArr111111111111111118, 1));
                    Intrinsics.checkNotNullExpressionValue(str21111111111115, str);
                    String string111111111111111118 = sbAppend111111111111111118.append(str21111111111115).toString();
                    c20912.L$0 = r23;
                    c20912.label = 22;
                    objBleWriteDownloadCommand$default14 = bleWriteDownloadCommand$default(r23, string111111111111111118, 4000, false, c20912, 4, null);
                    r24 = r23;
                    if (objBleWriteDownloadCommand$default14 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default14).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    if (!StringsKt.contains$default(r24.getSharePref().getDeviceName(), "R9", z, 2, obj)) {
                        break;
                    }
                    r27 = r24;
                    StringBuilder sbAppend111111111111111119 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE3_START()).append(c).append(r24.if3_file_ver).append(',');
                    StringCompanionObject stringCompanionObject111111111111111119 = StringCompanionObject.INSTANCE;
                    Object[] objArr111111111111111119 = new Object[1];
                    objArr111111111111111119[z ? 1 : 0] = Boxing.boxInt(r24.if3_file_size);
                    String str21111111111116 = String.format(str5, Arrays.copyOf(objArr111111111111111119, 1));
                    Intrinsics.checkNotNullExpressionValue(str21111111111116, str);
                    String string111111111111111119 = sbAppend111111111111111119.append(str21111111111116).toString();
                    c20912.L$0 = r24;
                    c20912.label = 23;
                    objBleWriteDownloadCommand$default15 = bleWriteDownloadCommand$default(r24, string111111111111111119, 4000, false, c20912, 4, null);
                    r25 = r24;
                    if (objBleWriteDownloadCommand$default15 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default15).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file8 = r25.file;
                    i16 = r25.if3_file_offset;
                    i17 = r25.if3_file_size;
                    c20912.L$0 = r25;
                    c20912.label = 24;
                    if (r25.writeFileData(file8, i16, i17, c20912) == coroutine_suspended) {
                        r26 = r25;
                        return coroutine_suspended;
                    }
                    r26 = r25;
                    StringBuilder sbAppend1111111111111111110 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE3_END()).append(c);
                    StringCompanionObject stringCompanionObject1111111111111111110 = StringCompanionObject.INSTANCE;
                    Object[] objArr1111111111111111110 = new Object[1];
                    objArr1111111111111111110[z ? 1 : 0] = Boxing.boxInt(r26.if3_file_checksum);
                    String str21111111111117 = String.format(str5, Arrays.copyOf(objArr1111111111111111110, 1));
                    Intrinsics.checkNotNullExpressionValue(str21111111111117, str);
                    String string1111111111111111110 = sbAppend1111111111111111110.append(str21111111111117).toString();
                    c20912.L$0 = r26;
                    c20912.label = 25;
                    objBleWriteDownloadCommand$default16 = bleWriteDownloadCommand$default(r26, string1111111111111111110, 4000, false, c20912, 4, null);
                    r28 = r26;
                    if (objBleWriteDownloadCommand$default16 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    r27 = r28;
                    if (!((Boolean) objBleWriteDownloadCommand$default16).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    r27 = r24;
                    StringBuilder sbAppend1111111111111111111 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_BLE_START()).append(c).append(r27.ble_file_ver).append(',');
                    StringCompanionObject stringCompanionObject1111111111111111111 = StringCompanionObject.INSTANCE;
                    Object[] objArr1111111111111111111 = new Object[1];
                    objArr1111111111111111111[z ? 1 : 0] = Boxing.boxInt(r27.ble_file_size);
                    String str21111111111118 = String.format(str5, Arrays.copyOf(objArr1111111111111111111, 1));
                    Intrinsics.checkNotNullExpressionValue(str21111111111118, str);
                    String string1111111111111111111 = sbAppend1111111111111111111.append(str21111111111118).toString();
                    c20912.L$0 = r27;
                    c20912.label = 26;
                    objBleWriteDownloadCommand$default17 = bleWriteDownloadCommand$default(r27, string1111111111111111111, 4000, false, c20912, 4, null);
                    r29 = r27;
                    if (objBleWriteDownloadCommand$default17 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default17).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file9 = r29.file;
                    i18 = r29.ble_file_offset;
                    i19 = r29.ble_file_size;
                    c20912.L$0 = r29;
                    c20912.label = 27;
                    if (r29.writeFileData(file9, i18, i19, c20912) == coroutine_suspended) {
                        r30 = r29;
                        return coroutine_suspended;
                    }
                    r30 = r29;
                    StringBuilder sbAppend1111111111111111112 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_BLE_END()).append(c);
                    StringCompanionObject stringCompanionObject1111111111111111112 = StringCompanionObject.INSTANCE;
                    Object[] objArr1111111111111111112 = new Object[1];
                    objArr1111111111111111112[z ? 1 : 0] = Boxing.boxInt(r30.ble_file_checksum);
                    String str21111111111119 = String.format(str5, Arrays.copyOf(objArr1111111111111111112, 1));
                    Intrinsics.checkNotNullExpressionValue(str21111111111119, str);
                    String string1111111111111111112 = sbAppend1111111111111111112.append(str21111111111119).toString();
                    c20912.L$0 = r30;
                    c20912.label = 28;
                    objBleWriteDownloadCommand$default18 = bleWriteDownloadCommand$default(r30, string1111111111111111112, 4000, false, c20912, 4, null);
                    r31 = r30;
                    if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    String str211111111111110 = BluetoothUtils.INSTANCE.getFD_END_COM() + ":1";
                    r31.getSharePref().setFwDownloadComplete(true);
                    r31.getSharePref().setFwFlashing(z);
                    r31.getMyApp().getFirmwareUpdateProcessBT().postValue(new UpdateProgressModel(FIrmWareUpdateProcess.FILE_INSTALL_FINISH, "", ""));
                    c20912.L$0 = r31;
                    c20912.label = 29;
                    objBleWriteDownloadCommand$default18 = r31.bleWriteDownloadCommand(str211111111111110, PathInterpolatorCompat.MAX_NUM_POINTS, true, c20912);
                    if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                        r32 = r31;
                        return coroutine_suspended;
                    }
                    r32 = r31;
                    if (((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                        str3 = str4;
                        Log.d(str3, "recovery update return flashBLEFile()");
                        CustomLog.INSTANCE.writeFile("recovery update return flashBLEFile()", r32.context);
                        if (r32.getSharePref().isBluetoothConnected()) {
                            c20912.L$0 = r32;
                            c20912.label = 30;
                            objFlashBLEFile = r32.flashBLEFile(c20912);
                            if (objFlashBLEFile == coroutine_suspended) {
                                r33 = r32;
                                return coroutine_suspended;
                            }
                            r33 = r32;
                            if (!((Boolean) objFlashBLEFile).booleanValue()) {
                                r33.getSharePref().setFwFlashing(z);
                                Log.d(str3, "isFwFlashing = false");
                            }
                            return Boxing.boxBoolean(true);
                        }
                        return Boxing.boxBoolean(true);
                    }
                    Log.d(str4, "recovery update return truue");
                    return Boxing.boxBoolean(true);
                case 20:
                    FirmWareUpdateWorker firmWareUpdateWorker20 = (FirmWareUpdateWorker) c20912.L$0;
                    ResultKt.throwOnFailure(objBleWriteDownloadCommand$default18);
                    z = false;
                    obj = null;
                    str4 = "TAG_FW";
                    coroutine_suspended = coroutine_suspended;
                    c20912 = c20912;
                    c = ':';
                    objBleWriteDownloadCommand$default13 = objBleWriteDownloadCommand$default18;
                    str5 = "%08X";
                    str = "format(...)";
                    r22 = firmWareUpdateWorker20;
                    r22 = r21;
                    if (!((Boolean) objBleWriteDownloadCommand$default13).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file7 = r22.file;
                    i14 = r22.if2_file_offset;
                    i15 = r22.if2_file_size;
                    c20912.L$0 = r22;
                    c20912.label = 21;
                    if (r22.writeFileData(file7, i14, i15, c20912) == coroutine_suspended) {
                        r23 = r22;
                        return coroutine_suspended;
                    }
                    r23 = r22;
                    StringBuilder sbAppend1111111111111111113 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE2_END()).append(c);
                    StringCompanionObject stringCompanionObject1111111111111111113 = StringCompanionObject.INSTANCE;
                    Object[] objArr1111111111111111113 = new Object[1];
                    objArr1111111111111111113[z ? 1 : 0] = Boxing.boxInt(r23.if2_file_checksum);
                    String str211111111111111 = String.format(str5, Arrays.copyOf(objArr1111111111111111113, 1));
                    Intrinsics.checkNotNullExpressionValue(str211111111111111, str);
                    String string1111111111111111113 = sbAppend1111111111111111113.append(str211111111111111).toString();
                    c20912.L$0 = r23;
                    c20912.label = 22;
                    objBleWriteDownloadCommand$default14 = bleWriteDownloadCommand$default(r23, string1111111111111111113, 4000, false, c20912, 4, null);
                    r24 = r23;
                    if (objBleWriteDownloadCommand$default14 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default14).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    if (!StringsKt.contains$default(r24.getSharePref().getDeviceName(), "R9", z, 2, obj)) {
                        break;
                    }
                    r27 = r24;
                    StringBuilder sbAppend1111111111111111114 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE3_START()).append(c).append(r24.if3_file_ver).append(',');
                    StringCompanionObject stringCompanionObject1111111111111111114 = StringCompanionObject.INSTANCE;
                    Object[] objArr1111111111111111114 = new Object[1];
                    objArr1111111111111111114[z ? 1 : 0] = Boxing.boxInt(r24.if3_file_size);
                    String str211111111111112 = String.format(str5, Arrays.copyOf(objArr1111111111111111114, 1));
                    Intrinsics.checkNotNullExpressionValue(str211111111111112, str);
                    String string1111111111111111114 = sbAppend1111111111111111114.append(str211111111111112).toString();
                    c20912.L$0 = r24;
                    c20912.label = 23;
                    objBleWriteDownloadCommand$default15 = bleWriteDownloadCommand$default(r24, string1111111111111111114, 4000, false, c20912, 4, null);
                    r25 = r24;
                    if (objBleWriteDownloadCommand$default15 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default15).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file8 = r25.file;
                    i16 = r25.if3_file_offset;
                    i17 = r25.if3_file_size;
                    c20912.L$0 = r25;
                    c20912.label = 24;
                    if (r25.writeFileData(file8, i16, i17, c20912) == coroutine_suspended) {
                        r26 = r25;
                        return coroutine_suspended;
                    }
                    r26 = r25;
                    StringBuilder sbAppend1111111111111111115 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE3_END()).append(c);
                    StringCompanionObject stringCompanionObject1111111111111111115 = StringCompanionObject.INSTANCE;
                    Object[] objArr1111111111111111115 = new Object[1];
                    objArr1111111111111111115[z ? 1 : 0] = Boxing.boxInt(r26.if3_file_checksum);
                    String str211111111111113 = String.format(str5, Arrays.copyOf(objArr1111111111111111115, 1));
                    Intrinsics.checkNotNullExpressionValue(str211111111111113, str);
                    String string1111111111111111115 = sbAppend1111111111111111115.append(str211111111111113).toString();
                    c20912.L$0 = r26;
                    c20912.label = 25;
                    objBleWriteDownloadCommand$default16 = bleWriteDownloadCommand$default(r26, string1111111111111111115, 4000, false, c20912, 4, null);
                    r28 = r26;
                    if (objBleWriteDownloadCommand$default16 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    r27 = r28;
                    if (!((Boolean) objBleWriteDownloadCommand$default16).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    r27 = r24;
                    StringBuilder sbAppend1111111111111111116 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_BLE_START()).append(c).append(r27.ble_file_ver).append(',');
                    StringCompanionObject stringCompanionObject1111111111111111116 = StringCompanionObject.INSTANCE;
                    Object[] objArr1111111111111111116 = new Object[1];
                    objArr1111111111111111116[z ? 1 : 0] = Boxing.boxInt(r27.ble_file_size);
                    String str211111111111114 = String.format(str5, Arrays.copyOf(objArr1111111111111111116, 1));
                    Intrinsics.checkNotNullExpressionValue(str211111111111114, str);
                    String string1111111111111111116 = sbAppend1111111111111111116.append(str211111111111114).toString();
                    c20912.L$0 = r27;
                    c20912.label = 26;
                    objBleWriteDownloadCommand$default17 = bleWriteDownloadCommand$default(r27, string1111111111111111116, 4000, false, c20912, 4, null);
                    r29 = r27;
                    if (objBleWriteDownloadCommand$default17 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default17).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file9 = r29.file;
                    i18 = r29.ble_file_offset;
                    i19 = r29.ble_file_size;
                    c20912.L$0 = r29;
                    c20912.label = 27;
                    if (r29.writeFileData(file9, i18, i19, c20912) == coroutine_suspended) {
                        r30 = r29;
                        return coroutine_suspended;
                    }
                    r30 = r29;
                    StringBuilder sbAppend1111111111111111117 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_BLE_END()).append(c);
                    StringCompanionObject stringCompanionObject1111111111111111117 = StringCompanionObject.INSTANCE;
                    Object[] objArr1111111111111111117 = new Object[1];
                    objArr1111111111111111117[z ? 1 : 0] = Boxing.boxInt(r30.ble_file_checksum);
                    String str211111111111115 = String.format(str5, Arrays.copyOf(objArr1111111111111111117, 1));
                    Intrinsics.checkNotNullExpressionValue(str211111111111115, str);
                    String string1111111111111111117 = sbAppend1111111111111111117.append(str211111111111115).toString();
                    c20912.L$0 = r30;
                    c20912.label = 28;
                    objBleWriteDownloadCommand$default18 = bleWriteDownloadCommand$default(r30, string1111111111111111117, 4000, false, c20912, 4, null);
                    r31 = r30;
                    if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    String str211111111111116 = BluetoothUtils.INSTANCE.getFD_END_COM() + ":1";
                    r31.getSharePref().setFwDownloadComplete(true);
                    r31.getSharePref().setFwFlashing(z);
                    r31.getMyApp().getFirmwareUpdateProcessBT().postValue(new UpdateProgressModel(FIrmWareUpdateProcess.FILE_INSTALL_FINISH, "", ""));
                    c20912.L$0 = r31;
                    c20912.label = 29;
                    objBleWriteDownloadCommand$default18 = r31.bleWriteDownloadCommand(str211111111111116, PathInterpolatorCompat.MAX_NUM_POINTS, true, c20912);
                    if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                        r32 = r31;
                        return coroutine_suspended;
                    }
                    r32 = r31;
                    if (((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                        str3 = str4;
                        Log.d(str3, "recovery update return flashBLEFile()");
                        CustomLog.INSTANCE.writeFile("recovery update return flashBLEFile()", r32.context);
                        if (r32.getSharePref().isBluetoothConnected()) {
                            c20912.L$0 = r32;
                            c20912.label = 30;
                            objFlashBLEFile = r32.flashBLEFile(c20912);
                            if (objFlashBLEFile == coroutine_suspended) {
                                r33 = r32;
                                return coroutine_suspended;
                            }
                            r33 = r32;
                            if (!((Boolean) objFlashBLEFile).booleanValue()) {
                                r33.getSharePref().setFwFlashing(z);
                                Log.d(str3, "isFwFlashing = false");
                            }
                            return Boxing.boxBoolean(true);
                        }
                        return Boxing.boxBoolean(true);
                    }
                    Log.d(str4, "recovery update return truue");
                    return Boxing.boxBoolean(true);
                case 21:
                    FirmWareUpdateWorker firmWareUpdateWorker21 = (FirmWareUpdateWorker) c20912.L$0;
                    ResultKt.throwOnFailure(objBleWriteDownloadCommand$default18);
                    str5 = "%08X";
                    z = false;
                    obj = null;
                    str4 = "TAG_FW";
                    coroutine_suspended = coroutine_suspended;
                    c20912 = c20912;
                    str = "format(...)";
                    c = ':';
                    r23 = firmWareUpdateWorker21;
                    r23 = r22;
                    StringBuilder sbAppend1111111111111111118 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE2_END()).append(c);
                    StringCompanionObject stringCompanionObject1111111111111111118 = StringCompanionObject.INSTANCE;
                    Object[] objArr1111111111111111118 = new Object[1];
                    objArr1111111111111111118[z ? 1 : 0] = Boxing.boxInt(r23.if2_file_checksum);
                    String str211111111111117 = String.format(str5, Arrays.copyOf(objArr1111111111111111118, 1));
                    Intrinsics.checkNotNullExpressionValue(str211111111111117, str);
                    String string1111111111111111118 = sbAppend1111111111111111118.append(str211111111111117).toString();
                    c20912.L$0 = r23;
                    c20912.label = 22;
                    objBleWriteDownloadCommand$default14 = bleWriteDownloadCommand$default(r23, string1111111111111111118, 4000, false, c20912, 4, null);
                    r24 = r23;
                    if (objBleWriteDownloadCommand$default14 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default14).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    if (!StringsKt.contains$default(r24.getSharePref().getDeviceName(), "R9", z, 2, obj)) {
                        break;
                    }
                    r27 = r24;
                    StringBuilder sbAppend1111111111111111119 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE3_START()).append(c).append(r24.if3_file_ver).append(',');
                    StringCompanionObject stringCompanionObject1111111111111111119 = StringCompanionObject.INSTANCE;
                    Object[] objArr1111111111111111119 = new Object[1];
                    objArr1111111111111111119[z ? 1 : 0] = Boxing.boxInt(r24.if3_file_size);
                    String str211111111111118 = String.format(str5, Arrays.copyOf(objArr1111111111111111119, 1));
                    Intrinsics.checkNotNullExpressionValue(str211111111111118, str);
                    String string1111111111111111119 = sbAppend1111111111111111119.append(str211111111111118).toString();
                    c20912.L$0 = r24;
                    c20912.label = 23;
                    objBleWriteDownloadCommand$default15 = bleWriteDownloadCommand$default(r24, string1111111111111111119, 4000, false, c20912, 4, null);
                    r25 = r24;
                    if (objBleWriteDownloadCommand$default15 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default15).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file8 = r25.file;
                    i16 = r25.if3_file_offset;
                    i17 = r25.if3_file_size;
                    c20912.L$0 = r25;
                    c20912.label = 24;
                    if (r25.writeFileData(file8, i16, i17, c20912) == coroutine_suspended) {
                        r26 = r25;
                        return coroutine_suspended;
                    }
                    r26 = r25;
                    StringBuilder sbAppend11111111111111111110 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE3_END()).append(c);
                    StringCompanionObject stringCompanionObject11111111111111111110 = StringCompanionObject.INSTANCE;
                    Object[] objArr11111111111111111110 = new Object[1];
                    objArr11111111111111111110[z ? 1 : 0] = Boxing.boxInt(r26.if3_file_checksum);
                    String str211111111111119 = String.format(str5, Arrays.copyOf(objArr11111111111111111110, 1));
                    Intrinsics.checkNotNullExpressionValue(str211111111111119, str);
                    String string11111111111111111110 = sbAppend11111111111111111110.append(str211111111111119).toString();
                    c20912.L$0 = r26;
                    c20912.label = 25;
                    objBleWriteDownloadCommand$default16 = bleWriteDownloadCommand$default(r26, string11111111111111111110, 4000, false, c20912, 4, null);
                    r28 = r26;
                    if (objBleWriteDownloadCommand$default16 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    r27 = r28;
                    if (!((Boolean) objBleWriteDownloadCommand$default16).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    r27 = r24;
                    StringBuilder sbAppend11111111111111111111 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_BLE_START()).append(c).append(r27.ble_file_ver).append(',');
                    StringCompanionObject stringCompanionObject11111111111111111111 = StringCompanionObject.INSTANCE;
                    Object[] objArr11111111111111111111 = new Object[1];
                    objArr11111111111111111111[z ? 1 : 0] = Boxing.boxInt(r27.ble_file_size);
                    String str2111111111111110 = String.format(str5, Arrays.copyOf(objArr11111111111111111111, 1));
                    Intrinsics.checkNotNullExpressionValue(str2111111111111110, str);
                    String string11111111111111111111 = sbAppend11111111111111111111.append(str2111111111111110).toString();
                    c20912.L$0 = r27;
                    c20912.label = 26;
                    objBleWriteDownloadCommand$default17 = bleWriteDownloadCommand$default(r27, string11111111111111111111, 4000, false, c20912, 4, null);
                    r29 = r27;
                    if (objBleWriteDownloadCommand$default17 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default17).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file9 = r29.file;
                    i18 = r29.ble_file_offset;
                    i19 = r29.ble_file_size;
                    c20912.L$0 = r29;
                    c20912.label = 27;
                    if (r29.writeFileData(file9, i18, i19, c20912) == coroutine_suspended) {
                        r30 = r29;
                        return coroutine_suspended;
                    }
                    r30 = r29;
                    StringBuilder sbAppend11111111111111111112 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_BLE_END()).append(c);
                    StringCompanionObject stringCompanionObject11111111111111111112 = StringCompanionObject.INSTANCE;
                    Object[] objArr11111111111111111112 = new Object[1];
                    objArr11111111111111111112[z ? 1 : 0] = Boxing.boxInt(r30.ble_file_checksum);
                    String str2111111111111111 = String.format(str5, Arrays.copyOf(objArr11111111111111111112, 1));
                    Intrinsics.checkNotNullExpressionValue(str2111111111111111, str);
                    String string11111111111111111112 = sbAppend11111111111111111112.append(str2111111111111111).toString();
                    c20912.L$0 = r30;
                    c20912.label = 28;
                    objBleWriteDownloadCommand$default18 = bleWriteDownloadCommand$default(r30, string11111111111111111112, 4000, false, c20912, 4, null);
                    r31 = r30;
                    if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    String str2111111111111112 = BluetoothUtils.INSTANCE.getFD_END_COM() + ":1";
                    r31.getSharePref().setFwDownloadComplete(true);
                    r31.getSharePref().setFwFlashing(z);
                    r31.getMyApp().getFirmwareUpdateProcessBT().postValue(new UpdateProgressModel(FIrmWareUpdateProcess.FILE_INSTALL_FINISH, "", ""));
                    c20912.L$0 = r31;
                    c20912.label = 29;
                    objBleWriteDownloadCommand$default18 = r31.bleWriteDownloadCommand(str2111111111111112, PathInterpolatorCompat.MAX_NUM_POINTS, true, c20912);
                    if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                        r32 = r31;
                        return coroutine_suspended;
                    }
                    r32 = r31;
                    if (((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                        str3 = str4;
                        Log.d(str3, "recovery update return flashBLEFile()");
                        CustomLog.INSTANCE.writeFile("recovery update return flashBLEFile()", r32.context);
                        if (r32.getSharePref().isBluetoothConnected()) {
                            c20912.L$0 = r32;
                            c20912.label = 30;
                            objFlashBLEFile = r32.flashBLEFile(c20912);
                            if (objFlashBLEFile == coroutine_suspended) {
                                r33 = r32;
                                return coroutine_suspended;
                            }
                            r33 = r32;
                            if (!((Boolean) objFlashBLEFile).booleanValue()) {
                                r33.getSharePref().setFwFlashing(z);
                                Log.d(str3, "isFwFlashing = false");
                            }
                            return Boxing.boxBoolean(true);
                        }
                        return Boxing.boxBoolean(true);
                    }
                    Log.d(str4, "recovery update return truue");
                    return Boxing.boxBoolean(true);
                case 22:
                    FirmWareUpdateWorker firmWareUpdateWorker22 = (FirmWareUpdateWorker) c20912.L$0;
                    ResultKt.throwOnFailure(objBleWriteDownloadCommand$default18);
                    z = false;
                    obj = null;
                    str4 = "TAG_FW";
                    coroutine_suspended = coroutine_suspended;
                    c20912 = c20912;
                    c = ':';
                    objBleWriteDownloadCommand$default14 = objBleWriteDownloadCommand$default18;
                    str5 = "%08X";
                    str = "format(...)";
                    r24 = firmWareUpdateWorker22;
                    if (!((Boolean) objBleWriteDownloadCommand$default14).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    if (!StringsKt.contains$default(r24.getSharePref().getDeviceName(), "R9", z, 2, obj)) {
                        break;
                    }
                    r27 = r24;
                    StringBuilder sbAppend11111111111111111113 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE3_START()).append(c).append(r24.if3_file_ver).append(',');
                    StringCompanionObject stringCompanionObject11111111111111111113 = StringCompanionObject.INSTANCE;
                    Object[] objArr11111111111111111113 = new Object[1];
                    objArr11111111111111111113[z ? 1 : 0] = Boxing.boxInt(r24.if3_file_size);
                    String str2111111111111113 = String.format(str5, Arrays.copyOf(objArr11111111111111111113, 1));
                    Intrinsics.checkNotNullExpressionValue(str2111111111111113, str);
                    String string11111111111111111113 = sbAppend11111111111111111113.append(str2111111111111113).toString();
                    c20912.L$0 = r24;
                    c20912.label = 23;
                    objBleWriteDownloadCommand$default15 = bleWriteDownloadCommand$default(r24, string11111111111111111113, 4000, false, c20912, 4, null);
                    r25 = r24;
                    if (objBleWriteDownloadCommand$default15 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default15).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file8 = r25.file;
                    i16 = r25.if3_file_offset;
                    i17 = r25.if3_file_size;
                    c20912.L$0 = r25;
                    c20912.label = 24;
                    if (r25.writeFileData(file8, i16, i17, c20912) == coroutine_suspended) {
                        r26 = r25;
                        return coroutine_suspended;
                    }
                    r26 = r25;
                    StringBuilder sbAppend11111111111111111114 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE3_END()).append(c);
                    StringCompanionObject stringCompanionObject11111111111111111114 = StringCompanionObject.INSTANCE;
                    Object[] objArr11111111111111111114 = new Object[1];
                    objArr11111111111111111114[z ? 1 : 0] = Boxing.boxInt(r26.if3_file_checksum);
                    String str2111111111111114 = String.format(str5, Arrays.copyOf(objArr11111111111111111114, 1));
                    Intrinsics.checkNotNullExpressionValue(str2111111111111114, str);
                    String string11111111111111111114 = sbAppend11111111111111111114.append(str2111111111111114).toString();
                    c20912.L$0 = r26;
                    c20912.label = 25;
                    objBleWriteDownloadCommand$default16 = bleWriteDownloadCommand$default(r26, string11111111111111111114, 4000, false, c20912, 4, null);
                    r28 = r26;
                    if (objBleWriteDownloadCommand$default16 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    r27 = r28;
                    if (!((Boolean) objBleWriteDownloadCommand$default16).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    r27 = r24;
                    StringBuilder sbAppend11111111111111111115 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_BLE_START()).append(c).append(r27.ble_file_ver).append(',');
                    StringCompanionObject stringCompanionObject11111111111111111115 = StringCompanionObject.INSTANCE;
                    Object[] objArr11111111111111111115 = new Object[1];
                    objArr11111111111111111115[z ? 1 : 0] = Boxing.boxInt(r27.ble_file_size);
                    String str2111111111111115 = String.format(str5, Arrays.copyOf(objArr11111111111111111115, 1));
                    Intrinsics.checkNotNullExpressionValue(str2111111111111115, str);
                    String string11111111111111111115 = sbAppend11111111111111111115.append(str2111111111111115).toString();
                    c20912.L$0 = r27;
                    c20912.label = 26;
                    objBleWriteDownloadCommand$default17 = bleWriteDownloadCommand$default(r27, string11111111111111111115, 4000, false, c20912, 4, null);
                    r29 = r27;
                    if (objBleWriteDownloadCommand$default17 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default17).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file9 = r29.file;
                    i18 = r29.ble_file_offset;
                    i19 = r29.ble_file_size;
                    c20912.L$0 = r29;
                    c20912.label = 27;
                    if (r29.writeFileData(file9, i18, i19, c20912) == coroutine_suspended) {
                        r30 = r29;
                        return coroutine_suspended;
                    }
                    r30 = r29;
                    StringBuilder sbAppend11111111111111111116 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_BLE_END()).append(c);
                    StringCompanionObject stringCompanionObject11111111111111111116 = StringCompanionObject.INSTANCE;
                    Object[] objArr11111111111111111116 = new Object[1];
                    objArr11111111111111111116[z ? 1 : 0] = Boxing.boxInt(r30.ble_file_checksum);
                    String str2111111111111116 = String.format(str5, Arrays.copyOf(objArr11111111111111111116, 1));
                    Intrinsics.checkNotNullExpressionValue(str2111111111111116, str);
                    String string11111111111111111116 = sbAppend11111111111111111116.append(str2111111111111116).toString();
                    c20912.L$0 = r30;
                    c20912.label = 28;
                    objBleWriteDownloadCommand$default18 = bleWriteDownloadCommand$default(r30, string11111111111111111116, 4000, false, c20912, 4, null);
                    r31 = r30;
                    if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    String str2111111111111117 = BluetoothUtils.INSTANCE.getFD_END_COM() + ":1";
                    r31.getSharePref().setFwDownloadComplete(true);
                    r31.getSharePref().setFwFlashing(z);
                    r31.getMyApp().getFirmwareUpdateProcessBT().postValue(new UpdateProgressModel(FIrmWareUpdateProcess.FILE_INSTALL_FINISH, "", ""));
                    c20912.L$0 = r31;
                    c20912.label = 29;
                    objBleWriteDownloadCommand$default18 = r31.bleWriteDownloadCommand(str2111111111111117, PathInterpolatorCompat.MAX_NUM_POINTS, true, c20912);
                    if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                        r32 = r31;
                        return coroutine_suspended;
                    }
                    r32 = r31;
                    if (((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                        str3 = str4;
                        Log.d(str3, "recovery update return flashBLEFile()");
                        CustomLog.INSTANCE.writeFile("recovery update return flashBLEFile()", r32.context);
                        if (r32.getSharePref().isBluetoothConnected()) {
                            c20912.L$0 = r32;
                            c20912.label = 30;
                            objFlashBLEFile = r32.flashBLEFile(c20912);
                            if (objFlashBLEFile == coroutine_suspended) {
                                r33 = r32;
                                return coroutine_suspended;
                            }
                            r33 = r32;
                            if (!((Boolean) objFlashBLEFile).booleanValue()) {
                                r33.getSharePref().setFwFlashing(z);
                                Log.d(str3, "isFwFlashing = false");
                            }
                            return Boxing.boxBoolean(true);
                        }
                        return Boxing.boxBoolean(true);
                    }
                    Log.d(str4, "recovery update return truue");
                    return Boxing.boxBoolean(true);
                case 23:
                    FirmWareUpdateWorker firmWareUpdateWorker23 = (FirmWareUpdateWorker) c20912.L$0;
                    ResultKt.throwOnFailure(objBleWriteDownloadCommand$default18);
                    z = false;
                    str4 = "TAG_FW";
                    coroutine_suspended = coroutine_suspended;
                    c20912 = c20912;
                    c = ':';
                    objBleWriteDownloadCommand$default15 = objBleWriteDownloadCommand$default18;
                    str5 = "%08X";
                    str = "format(...)";
                    r25 = firmWareUpdateWorker23;
                    if (!((Boolean) objBleWriteDownloadCommand$default15).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file8 = r25.file;
                    i16 = r25.if3_file_offset;
                    i17 = r25.if3_file_size;
                    c20912.L$0 = r25;
                    c20912.label = 24;
                    if (r25.writeFileData(file8, i16, i17, c20912) == coroutine_suspended) {
                        r26 = r25;
                        return coroutine_suspended;
                    }
                    r26 = r25;
                    StringBuilder sbAppend11111111111111111117 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE3_END()).append(c);
                    StringCompanionObject stringCompanionObject11111111111111111117 = StringCompanionObject.INSTANCE;
                    Object[] objArr11111111111111111117 = new Object[1];
                    objArr11111111111111111117[z ? 1 : 0] = Boxing.boxInt(r26.if3_file_checksum);
                    String str2111111111111118 = String.format(str5, Arrays.copyOf(objArr11111111111111111117, 1));
                    Intrinsics.checkNotNullExpressionValue(str2111111111111118, str);
                    String string11111111111111111117 = sbAppend11111111111111111117.append(str2111111111111118).toString();
                    c20912.L$0 = r26;
                    c20912.label = 25;
                    objBleWriteDownloadCommand$default16 = bleWriteDownloadCommand$default(r26, string11111111111111111117, 4000, false, c20912, 4, null);
                    r28 = r26;
                    if (objBleWriteDownloadCommand$default16 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    r27 = r28;
                    if (!((Boolean) objBleWriteDownloadCommand$default16).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    r27 = r24;
                    StringBuilder sbAppend11111111111111111118 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_BLE_START()).append(c).append(r27.ble_file_ver).append(',');
                    StringCompanionObject stringCompanionObject11111111111111111118 = StringCompanionObject.INSTANCE;
                    Object[] objArr11111111111111111118 = new Object[1];
                    objArr11111111111111111118[z ? 1 : 0] = Boxing.boxInt(r27.ble_file_size);
                    String str2111111111111119 = String.format(str5, Arrays.copyOf(objArr11111111111111111118, 1));
                    Intrinsics.checkNotNullExpressionValue(str2111111111111119, str);
                    String string11111111111111111118 = sbAppend11111111111111111118.append(str2111111111111119).toString();
                    c20912.L$0 = r27;
                    c20912.label = 26;
                    objBleWriteDownloadCommand$default17 = bleWriteDownloadCommand$default(r27, string11111111111111111118, 4000, false, c20912, 4, null);
                    r29 = r27;
                    if (objBleWriteDownloadCommand$default17 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default17).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file9 = r29.file;
                    i18 = r29.ble_file_offset;
                    i19 = r29.ble_file_size;
                    c20912.L$0 = r29;
                    c20912.label = 27;
                    if (r29.writeFileData(file9, i18, i19, c20912) == coroutine_suspended) {
                        r30 = r29;
                        return coroutine_suspended;
                    }
                    r30 = r29;
                    StringBuilder sbAppend11111111111111111119 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_BLE_END()).append(c);
                    StringCompanionObject stringCompanionObject11111111111111111119 = StringCompanionObject.INSTANCE;
                    Object[] objArr11111111111111111119 = new Object[1];
                    objArr11111111111111111119[z ? 1 : 0] = Boxing.boxInt(r30.ble_file_checksum);
                    String str21111111111111110 = String.format(str5, Arrays.copyOf(objArr11111111111111111119, 1));
                    Intrinsics.checkNotNullExpressionValue(str21111111111111110, str);
                    String string11111111111111111119 = sbAppend11111111111111111119.append(str21111111111111110).toString();
                    c20912.L$0 = r30;
                    c20912.label = 28;
                    objBleWriteDownloadCommand$default18 = bleWriteDownloadCommand$default(r30, string11111111111111111119, 4000, false, c20912, 4, null);
                    r31 = r30;
                    if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    String str21111111111111111 = BluetoothUtils.INSTANCE.getFD_END_COM() + ":1";
                    r31.getSharePref().setFwDownloadComplete(true);
                    r31.getSharePref().setFwFlashing(z);
                    r31.getMyApp().getFirmwareUpdateProcessBT().postValue(new UpdateProgressModel(FIrmWareUpdateProcess.FILE_INSTALL_FINISH, "", ""));
                    c20912.L$0 = r31;
                    c20912.label = 29;
                    objBleWriteDownloadCommand$default18 = r31.bleWriteDownloadCommand(str21111111111111111, PathInterpolatorCompat.MAX_NUM_POINTS, true, c20912);
                    if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                        r32 = r31;
                        return coroutine_suspended;
                    }
                    r32 = r31;
                    if (((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                        str3 = str4;
                        Log.d(str3, "recovery update return flashBLEFile()");
                        CustomLog.INSTANCE.writeFile("recovery update return flashBLEFile()", r32.context);
                        if (r32.getSharePref().isBluetoothConnected()) {
                            c20912.L$0 = r32;
                            c20912.label = 30;
                            objFlashBLEFile = r32.flashBLEFile(c20912);
                            if (objFlashBLEFile == coroutine_suspended) {
                                r33 = r32;
                                return coroutine_suspended;
                            }
                            r33 = r32;
                            if (!((Boolean) objFlashBLEFile).booleanValue()) {
                                r33.getSharePref().setFwFlashing(z);
                                Log.d(str3, "isFwFlashing = false");
                            }
                            return Boxing.boxBoolean(true);
                        }
                        return Boxing.boxBoolean(true);
                    }
                    Log.d(str4, "recovery update return truue");
                    return Boxing.boxBoolean(true);
                case 24:
                    FirmWareUpdateWorker firmWareUpdateWorker24 = (FirmWareUpdateWorker) c20912.L$0;
                    ResultKt.throwOnFailure(objBleWriteDownloadCommand$default18);
                    str5 = "%08X";
                    z = false;
                    str4 = "TAG_FW";
                    coroutine_suspended = coroutine_suspended;
                    c20912 = c20912;
                    str = "format(...)";
                    c = ':';
                    r26 = firmWareUpdateWorker24;
                    r26 = r25;
                    StringBuilder sbAppend111111111111111111110 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_INTERFACE3_END()).append(c);
                    StringCompanionObject stringCompanionObject111111111111111111110 = StringCompanionObject.INSTANCE;
                    Object[] objArr111111111111111111110 = new Object[1];
                    objArr111111111111111111110[z ? 1 : 0] = Boxing.boxInt(r26.if3_file_checksum);
                    String str21111111111111112 = String.format(str5, Arrays.copyOf(objArr111111111111111111110, 1));
                    Intrinsics.checkNotNullExpressionValue(str21111111111111112, str);
                    String string111111111111111111110 = sbAppend111111111111111111110.append(str21111111111111112).toString();
                    c20912.L$0 = r26;
                    c20912.label = 25;
                    objBleWriteDownloadCommand$default16 = bleWriteDownloadCommand$default(r26, string111111111111111111110, 4000, false, c20912, 4, null);
                    r28 = r26;
                    if (objBleWriteDownloadCommand$default16 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    r27 = r28;
                    if (!((Boolean) objBleWriteDownloadCommand$default16).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    r27 = r24;
                    StringBuilder sbAppend111111111111111111111 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_BLE_START()).append(c).append(r27.ble_file_ver).append(',');
                    StringCompanionObject stringCompanionObject111111111111111111111 = StringCompanionObject.INSTANCE;
                    Object[] objArr111111111111111111111 = new Object[1];
                    objArr111111111111111111111[z ? 1 : 0] = Boxing.boxInt(r27.ble_file_size);
                    String str21111111111111113 = String.format(str5, Arrays.copyOf(objArr111111111111111111111, 1));
                    Intrinsics.checkNotNullExpressionValue(str21111111111111113, str);
                    String string111111111111111111111 = sbAppend111111111111111111111.append(str21111111111111113).toString();
                    c20912.L$0 = r27;
                    c20912.label = 26;
                    objBleWriteDownloadCommand$default17 = bleWriteDownloadCommand$default(r27, string111111111111111111111, 4000, false, c20912, 4, null);
                    r29 = r27;
                    if (objBleWriteDownloadCommand$default17 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default17).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file9 = r29.file;
                    i18 = r29.ble_file_offset;
                    i19 = r29.ble_file_size;
                    c20912.L$0 = r29;
                    c20912.label = 27;
                    if (r29.writeFileData(file9, i18, i19, c20912) == coroutine_suspended) {
                        r30 = r29;
                        return coroutine_suspended;
                    }
                    r30 = r29;
                    StringBuilder sbAppend111111111111111111112 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_BLE_END()).append(c);
                    StringCompanionObject stringCompanionObject111111111111111111112 = StringCompanionObject.INSTANCE;
                    Object[] objArr111111111111111111112 = new Object[1];
                    objArr111111111111111111112[z ? 1 : 0] = Boxing.boxInt(r30.ble_file_checksum);
                    String str21111111111111114 = String.format(str5, Arrays.copyOf(objArr111111111111111111112, 1));
                    Intrinsics.checkNotNullExpressionValue(str21111111111111114, str);
                    String string111111111111111111112 = sbAppend111111111111111111112.append(str21111111111111114).toString();
                    c20912.L$0 = r30;
                    c20912.label = 28;
                    objBleWriteDownloadCommand$default18 = bleWriteDownloadCommand$default(r30, string111111111111111111112, 4000, false, c20912, 4, null);
                    r31 = r30;
                    if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    String str21111111111111115 = BluetoothUtils.INSTANCE.getFD_END_COM() + ":1";
                    r31.getSharePref().setFwDownloadComplete(true);
                    r31.getSharePref().setFwFlashing(z);
                    r31.getMyApp().getFirmwareUpdateProcessBT().postValue(new UpdateProgressModel(FIrmWareUpdateProcess.FILE_INSTALL_FINISH, "", ""));
                    c20912.L$0 = r31;
                    c20912.label = 29;
                    objBleWriteDownloadCommand$default18 = r31.bleWriteDownloadCommand(str21111111111111115, PathInterpolatorCompat.MAX_NUM_POINTS, true, c20912);
                    if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                        r32 = r31;
                        return coroutine_suspended;
                    }
                    r32 = r31;
                    if (((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                        str3 = str4;
                        Log.d(str3, "recovery update return flashBLEFile()");
                        CustomLog.INSTANCE.writeFile("recovery update return flashBLEFile()", r32.context);
                        if (r32.getSharePref().isBluetoothConnected()) {
                            c20912.L$0 = r32;
                            c20912.label = 30;
                            objFlashBLEFile = r32.flashBLEFile(c20912);
                            if (objFlashBLEFile == coroutine_suspended) {
                                r33 = r32;
                                return coroutine_suspended;
                            }
                            r33 = r32;
                            if (!((Boolean) objFlashBLEFile).booleanValue()) {
                                r33.getSharePref().setFwFlashing(z);
                                Log.d(str3, "isFwFlashing = false");
                            }
                            return Boxing.boxBoolean(true);
                        }
                        return Boxing.boxBoolean(true);
                    }
                    Log.d(str4, "recovery update return truue");
                    return Boxing.boxBoolean(true);
                case 25:
                    FirmWareUpdateWorker firmWareUpdateWorker25 = (FirmWareUpdateWorker) c20912.L$0;
                    ResultKt.throwOnFailure(objBleWriteDownloadCommand$default18);
                    z = false;
                    str4 = "TAG_FW";
                    coroutine_suspended = coroutine_suspended;
                    c20912 = c20912;
                    c = ':';
                    objBleWriteDownloadCommand$default16 = objBleWriteDownloadCommand$default18;
                    str5 = "%08X";
                    str = "format(...)";
                    r28 = firmWareUpdateWorker25;
                    r27 = r28;
                    if (!((Boolean) objBleWriteDownloadCommand$default16).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    r27 = r24;
                    StringBuilder sbAppend111111111111111111113 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_BLE_START()).append(c).append(r27.ble_file_ver).append(',');
                    StringCompanionObject stringCompanionObject111111111111111111113 = StringCompanionObject.INSTANCE;
                    Object[] objArr111111111111111111113 = new Object[1];
                    objArr111111111111111111113[z ? 1 : 0] = Boxing.boxInt(r27.ble_file_size);
                    String str21111111111111116 = String.format(str5, Arrays.copyOf(objArr111111111111111111113, 1));
                    Intrinsics.checkNotNullExpressionValue(str21111111111111116, str);
                    String string111111111111111111113 = sbAppend111111111111111111113.append(str21111111111111116).toString();
                    c20912.L$0 = r27;
                    c20912.label = 26;
                    objBleWriteDownloadCommand$default17 = bleWriteDownloadCommand$default(r27, string111111111111111111113, 4000, false, c20912, 4, null);
                    r29 = r27;
                    if (objBleWriteDownloadCommand$default17 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default17).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file9 = r29.file;
                    i18 = r29.ble_file_offset;
                    i19 = r29.ble_file_size;
                    c20912.L$0 = r29;
                    c20912.label = 27;
                    if (r29.writeFileData(file9, i18, i19, c20912) == coroutine_suspended) {
                        r30 = r29;
                        return coroutine_suspended;
                    }
                    r30 = r29;
                    StringBuilder sbAppend111111111111111111114 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_BLE_END()).append(c);
                    StringCompanionObject stringCompanionObject111111111111111111114 = StringCompanionObject.INSTANCE;
                    Object[] objArr111111111111111111114 = new Object[1];
                    objArr111111111111111111114[z ? 1 : 0] = Boxing.boxInt(r30.ble_file_checksum);
                    String str21111111111111117 = String.format(str5, Arrays.copyOf(objArr111111111111111111114, 1));
                    Intrinsics.checkNotNullExpressionValue(str21111111111111117, str);
                    String string111111111111111111114 = sbAppend111111111111111111114.append(str21111111111111117).toString();
                    c20912.L$0 = r30;
                    c20912.label = 28;
                    objBleWriteDownloadCommand$default18 = bleWriteDownloadCommand$default(r30, string111111111111111111114, 4000, false, c20912, 4, null);
                    r31 = r30;
                    if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    String str21111111111111118 = BluetoothUtils.INSTANCE.getFD_END_COM() + ":1";
                    r31.getSharePref().setFwDownloadComplete(true);
                    r31.getSharePref().setFwFlashing(z);
                    r31.getMyApp().getFirmwareUpdateProcessBT().postValue(new UpdateProgressModel(FIrmWareUpdateProcess.FILE_INSTALL_FINISH, "", ""));
                    c20912.L$0 = r31;
                    c20912.label = 29;
                    objBleWriteDownloadCommand$default18 = r31.bleWriteDownloadCommand(str21111111111111118, PathInterpolatorCompat.MAX_NUM_POINTS, true, c20912);
                    if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                        r32 = r31;
                        return coroutine_suspended;
                    }
                    r32 = r31;
                    if (((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                        str3 = str4;
                        Log.d(str3, "recovery update return flashBLEFile()");
                        CustomLog.INSTANCE.writeFile("recovery update return flashBLEFile()", r32.context);
                        if (r32.getSharePref().isBluetoothConnected()) {
                            c20912.L$0 = r32;
                            c20912.label = 30;
                            objFlashBLEFile = r32.flashBLEFile(c20912);
                            if (objFlashBLEFile == coroutine_suspended) {
                                r33 = r32;
                                return coroutine_suspended;
                            }
                            r33 = r32;
                            if (!((Boolean) objFlashBLEFile).booleanValue()) {
                                r33.getSharePref().setFwFlashing(z);
                                Log.d(str3, "isFwFlashing = false");
                            }
                            return Boxing.boxBoolean(true);
                        }
                        return Boxing.boxBoolean(true);
                    }
                    Log.d(str4, "recovery update return truue");
                    return Boxing.boxBoolean(true);
                case 26:
                    FirmWareUpdateWorker firmWareUpdateWorker26 = (FirmWareUpdateWorker) c20912.L$0;
                    ResultKt.throwOnFailure(objBleWriteDownloadCommand$default18);
                    z = false;
                    str4 = "TAG_FW";
                    coroutine_suspended = coroutine_suspended;
                    c20912 = c20912;
                    c = ':';
                    objBleWriteDownloadCommand$default17 = objBleWriteDownloadCommand$default18;
                    str5 = "%08X";
                    str = "format(...)";
                    r29 = firmWareUpdateWorker26;
                    if (!((Boolean) objBleWriteDownloadCommand$default17).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    file9 = r29.file;
                    i18 = r29.ble_file_offset;
                    i19 = r29.ble_file_size;
                    c20912.L$0 = r29;
                    c20912.label = 27;
                    if (r29.writeFileData(file9, i18, i19, c20912) == coroutine_suspended) {
                        r30 = r29;
                        return coroutine_suspended;
                    }
                    r30 = r29;
                    StringBuilder sbAppend111111111111111111115 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_BLE_END()).append(c);
                    StringCompanionObject stringCompanionObject111111111111111111115 = StringCompanionObject.INSTANCE;
                    Object[] objArr111111111111111111115 = new Object[1];
                    objArr111111111111111111115[z ? 1 : 0] = Boxing.boxInt(r30.ble_file_checksum);
                    String str21111111111111119 = String.format(str5, Arrays.copyOf(objArr111111111111111111115, 1));
                    Intrinsics.checkNotNullExpressionValue(str21111111111111119, str);
                    String string111111111111111111115 = sbAppend111111111111111111115.append(str21111111111111119).toString();
                    c20912.L$0 = r30;
                    c20912.label = 28;
                    objBleWriteDownloadCommand$default18 = bleWriteDownloadCommand$default(r30, string111111111111111111115, 4000, false, c20912, 4, null);
                    r31 = r30;
                    if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    String str211111111111111110 = BluetoothUtils.INSTANCE.getFD_END_COM() + ":1";
                    r31.getSharePref().setFwDownloadComplete(true);
                    r31.getSharePref().setFwFlashing(z);
                    r31.getMyApp().getFirmwareUpdateProcessBT().postValue(new UpdateProgressModel(FIrmWareUpdateProcess.FILE_INSTALL_FINISH, "", ""));
                    c20912.L$0 = r31;
                    c20912.label = 29;
                    objBleWriteDownloadCommand$default18 = r31.bleWriteDownloadCommand(str211111111111111110, PathInterpolatorCompat.MAX_NUM_POINTS, true, c20912);
                    if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                        r32 = r31;
                        return coroutine_suspended;
                    }
                    r32 = r31;
                    if (((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                        str3 = str4;
                        Log.d(str3, "recovery update return flashBLEFile()");
                        CustomLog.INSTANCE.writeFile("recovery update return flashBLEFile()", r32.context);
                        if (r32.getSharePref().isBluetoothConnected()) {
                            c20912.L$0 = r32;
                            c20912.label = 30;
                            objFlashBLEFile = r32.flashBLEFile(c20912);
                            if (objFlashBLEFile == coroutine_suspended) {
                                r33 = r32;
                                return coroutine_suspended;
                            }
                            r33 = r32;
                            if (!((Boolean) objFlashBLEFile).booleanValue()) {
                                r33.getSharePref().setFwFlashing(z);
                                Log.d(str3, "isFwFlashing = false");
                            }
                            return Boxing.boxBoolean(true);
                        }
                        return Boxing.boxBoolean(true);
                    }
                    Log.d(str4, "recovery update return truue");
                    return Boxing.boxBoolean(true);
                case 27:
                    FirmWareUpdateWorker firmWareUpdateWorker27 = (FirmWareUpdateWorker) c20912.L$0;
                    ResultKt.throwOnFailure(objBleWriteDownloadCommand$default18);
                    str5 = "%08X";
                    z = false;
                    str4 = "TAG_FW";
                    coroutine_suspended = coroutine_suspended;
                    c20912 = c20912;
                    str = "format(...)";
                    c = ':';
                    r30 = firmWareUpdateWorker27;
                    r30 = r29;
                    StringBuilder sbAppend111111111111111111116 = new StringBuilder().append(BluetoothUtils.INSTANCE.getFD_BLE_END()).append(c);
                    StringCompanionObject stringCompanionObject111111111111111111116 = StringCompanionObject.INSTANCE;
                    Object[] objArr111111111111111111116 = new Object[1];
                    objArr111111111111111111116[z ? 1 : 0] = Boxing.boxInt(r30.ble_file_checksum);
                    String str211111111111111111 = String.format(str5, Arrays.copyOf(objArr111111111111111111116, 1));
                    Intrinsics.checkNotNullExpressionValue(str211111111111111111, str);
                    String string111111111111111111116 = sbAppend111111111111111111116.append(str211111111111111111).toString();
                    c20912.L$0 = r30;
                    c20912.label = 28;
                    objBleWriteDownloadCommand$default18 = bleWriteDownloadCommand$default(r30, string111111111111111111116, 4000, false, c20912, 4, null);
                    r31 = r30;
                    if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    if (!((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    String str211111111111111112 = BluetoothUtils.INSTANCE.getFD_END_COM() + ":1";
                    r31.getSharePref().setFwDownloadComplete(true);
                    r31.getSharePref().setFwFlashing(z);
                    r31.getMyApp().getFirmwareUpdateProcessBT().postValue(new UpdateProgressModel(FIrmWareUpdateProcess.FILE_INSTALL_FINISH, "", ""));
                    c20912.L$0 = r31;
                    c20912.label = 29;
                    objBleWriteDownloadCommand$default18 = r31.bleWriteDownloadCommand(str211111111111111112, PathInterpolatorCompat.MAX_NUM_POINTS, true, c20912);
                    if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                        r32 = r31;
                        return coroutine_suspended;
                    }
                    r32 = r31;
                    if (((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                        str3 = str4;
                        Log.d(str3, "recovery update return flashBLEFile()");
                        CustomLog.INSTANCE.writeFile("recovery update return flashBLEFile()", r32.context);
                        if (r32.getSharePref().isBluetoothConnected()) {
                            c20912.L$0 = r32;
                            c20912.label = 30;
                            objFlashBLEFile = r32.flashBLEFile(c20912);
                            if (objFlashBLEFile == coroutine_suspended) {
                                r33 = r32;
                                return coroutine_suspended;
                            }
                            r33 = r32;
                            if (!((Boolean) objFlashBLEFile).booleanValue()) {
                                r33.getSharePref().setFwFlashing(z);
                                Log.d(str3, "isFwFlashing = false");
                            }
                            return Boxing.boxBoolean(true);
                        }
                        return Boxing.boxBoolean(true);
                    }
                    Log.d(str4, "recovery update return truue");
                    return Boxing.boxBoolean(true);
                case 28:
                    FirmWareUpdateWorker firmWareUpdateWorker28 = (FirmWareUpdateWorker) c20912.L$0;
                    ResultKt.throwOnFailure(objBleWriteDownloadCommand$default18);
                    z = false;
                    str4 = "TAG_FW";
                    coroutine_suspended = coroutine_suspended;
                    c20912 = c20912;
                    r31 = firmWareUpdateWorker28;
                    if (!((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    String str211111111111111113 = BluetoothUtils.INSTANCE.getFD_END_COM() + ":1";
                    r31.getSharePref().setFwDownloadComplete(true);
                    r31.getSharePref().setFwFlashing(z);
                    r31.getMyApp().getFirmwareUpdateProcessBT().postValue(new UpdateProgressModel(FIrmWareUpdateProcess.FILE_INSTALL_FINISH, "", ""));
                    c20912.L$0 = r31;
                    c20912.label = 29;
                    objBleWriteDownloadCommand$default18 = r31.bleWriteDownloadCommand(str211111111111111113, PathInterpolatorCompat.MAX_NUM_POINTS, true, c20912);
                    if (objBleWriteDownloadCommand$default18 == coroutine_suspended) {
                        r32 = r31;
                        return coroutine_suspended;
                    }
                    r32 = r31;
                    if (((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                        str3 = str4;
                        Log.d(str3, "recovery update return flashBLEFile()");
                        CustomLog.INSTANCE.writeFile("recovery update return flashBLEFile()", r32.context);
                        if (r32.getSharePref().isBluetoothConnected()) {
                            c20912.L$0 = r32;
                            c20912.label = 30;
                            objFlashBLEFile = r32.flashBLEFile(c20912);
                            if (objFlashBLEFile == coroutine_suspended) {
                                r33 = r32;
                                return coroutine_suspended;
                            }
                            r33 = r32;
                            if (!((Boolean) objFlashBLEFile).booleanValue()) {
                                r33.getSharePref().setFwFlashing(z);
                                Log.d(str3, "isFwFlashing = false");
                            }
                            return Boxing.boxBoolean(true);
                        }
                        return Boxing.boxBoolean(true);
                    }
                    Log.d(str4, "recovery update return truue");
                    return Boxing.boxBoolean(true);
                case 29:
                    FirmWareUpdateWorker firmWareUpdateWorker29 = (FirmWareUpdateWorker) c20912.L$0;
                    ResultKt.throwOnFailure(objBleWriteDownloadCommand$default18);
                    z = false;
                    str4 = "TAG_FW";
                    coroutine_suspended = coroutine_suspended;
                    c20912 = c20912;
                    r32 = firmWareUpdateWorker29;
                    r32 = r31;
                    if (((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                        str3 = str4;
                        Log.d(str3, "recovery update return flashBLEFile()");
                        CustomLog.INSTANCE.writeFile("recovery update return flashBLEFile()", r32.context);
                        if (r32.getSharePref().isBluetoothConnected()) {
                            c20912.L$0 = r32;
                            c20912.label = 30;
                            objFlashBLEFile = r32.flashBLEFile(c20912);
                            if (objFlashBLEFile == coroutine_suspended) {
                                r33 = r32;
                                return coroutine_suspended;
                            }
                            r33 = r32;
                            if (!((Boolean) objFlashBLEFile).booleanValue()) {
                                r33.getSharePref().setFwFlashing(z);
                                Log.d(str3, "isFwFlashing = false");
                            }
                            return Boxing.boxBoolean(true);
                        }
                        return Boxing.boxBoolean(true);
                    }
                    Log.d(str4, "recovery update return truue");
                    return Boxing.boxBoolean(true);
                case 30:
                    FirmWareUpdateWorker firmWareUpdateWorker30 = (FirmWareUpdateWorker) c20912.L$0;
                    ResultKt.throwOnFailure(objBleWriteDownloadCommand$default18);
                    objFlashBLEFile = objBleWriteDownloadCommand$default18;
                    z = false;
                    str3 = "TAG_FW";
                    r33 = firmWareUpdateWorker30;
                    r33 = r32;
                    if (!((Boolean) objFlashBLEFile).booleanValue()) {
                        r33.getSharePref().setFwFlashing(z);
                        Log.d(str3, "isFwFlashing = false");
                    }
                    return Boxing.boxBoolean(true);
                case 31:
                    exc = (Exception) c20912.L$0;
                    ResultKt.throwOnFailure(objBleWriteDownloadCommand$default18);
                    z = false;
                    if (!((Boolean) objBleWriteDownloadCommand$default18).booleanValue()) {
                        return Boxing.boxBoolean(z);
                    }
                    exc.printStackTrace();
                    return Boxing.boxBoolean(z);
                default:
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
        } catch (Exception e11) {
            e = e11;
            z = false;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    /*  JADX ERROR: Type inference failed
        jadx.core.utils.exceptions.JadxOverflowException: Type inference error: updates count limit reached with updateSeq = 41321. Try increasing type updates limit count.
        	at jadx.core.utils.ErrorsCounter.addError(ErrorsCounter.java:59)
        	at jadx.core.utils.ErrorsCounter.error(ErrorsCounter.java:31)
        	at jadx.core.dex.attributes.nodes.NotificationAttrNode.addError(NotificationAttrNode.java:19)
        	at jadx.core.dex.visitors.typeinference.TypeInferenceVisitor.visit(TypeInferenceVisitor.java:79)
        */
    public final java.lang.Object doNormalUpdate(com.uniden.rtach.data.model.VersionUpdateModel r35, kotlin.coroutines.Continuation<? super java.lang.Boolean> r36) {
        /*
            Method dump skipped, instruction units count: 4132
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker.doNormalUpdate(com.uniden.rtach.data.model.VersionUpdateModel, kotlin.coroutines.Continuation):java.lang.Object");
    }

    private final boolean readFirmwareFile() {
        String str;
        try {
            FileInputStream fileInputStream = new FileInputStream(this.file);
            try {
                FileInputStream fileInputStream2 = fileInputStream;
                byte[] bArr = new byte[4];
                this.merge_ver = readFirmwareFile$lambda$4$readInt(fileInputStream2, bArr, this);
                this.model_number = readFirmwareFile$lambda$4$readInt(fileInputStream2, bArr, this);
                this.ui_file_offset = readFirmwareFile$lambda$4$readInt(fileInputStream2, bArr, this);
                this.ui_file_size = readFirmwareFile$lambda$4$readInt(fileInputStream2, bArr, this);
                this.ui_file_ver = readFirmwareFile$lambda$4$readInt(fileInputStream2, bArr, this);
                this.ui_file_checksum = readFirmwareFile$lambda$4$readInt(fileInputStream2, bArr, this);
                this.dsp_file_offset = readFirmwareFile$lambda$4$readInt(fileInputStream2, bArr, this);
                this.dsp_file_size = readFirmwareFile$lambda$4$readInt(fileInputStream2, bArr, this);
                this.dsp_file_ver = readFirmwareFile$lambda$4$readInt(fileInputStream2, bArr, this);
                this.dsp_file_checksum = readFirmwareFile$lambda$4$readInt(fileInputStream2, bArr, this);
                this.gps_file_offset = readFirmwareFile$lambda$4$readInt(fileInputStream2, bArr, this);
                this.gps_file_size = readFirmwareFile$lambda$4$readInt(fileInputStream2, bArr, this);
                this.gps_file_ver = readFirmwareFile$lambda$4$readInt(fileInputStream2, bArr, this);
                this.gps_file_checksum = readFirmwareFile$lambda$4$readInt(fileInputStream2, bArr, this);
                this.sound_db_file_offset = readFirmwareFile$lambda$4$readInt(fileInputStream2, bArr, this);
                this.sound_db_file_size = readFirmwareFile$lambda$4$readInt(fileInputStream2, bArr, this);
                this.sound_db_file_ver = readFirmwareFile$lambda$4$readInt(fileInputStream2, bArr, this);
                this.sound_db_file_checksum = readFirmwareFile$lambda$4$readInt(fileInputStream2, bArr, this);
                this.gps_db_file_offset = readFirmwareFile$lambda$4$readInt(fileInputStream2, bArr, this);
                this.gps_db_file_size = readFirmwareFile$lambda$4$readInt(fileInputStream2, bArr, this);
                this.gps_db_file_ver = readFirmwareFile$lambda$4$readInt(fileInputStream2, bArr, this);
                this.gps_db_file_checksum = readFirmwareFile$lambda$4$readInt(fileInputStream2, bArr, this);
                this.if1_file_offset = readFirmwareFile$lambda$4$readInt(fileInputStream2, bArr, this);
                this.if1_file_size = readFirmwareFile$lambda$4$readInt(fileInputStream2, bArr, this);
                this.if1_file_ver = readFirmwareFile$lambda$4$readInt(fileInputStream2, bArr, this);
                this.if1_file_checksum = readFirmwareFile$lambda$4$readInt(fileInputStream2, bArr, this);
                this.if2_file_offset = readFirmwareFile$lambda$4$readInt(fileInputStream2, bArr, this);
                this.if2_file_size = readFirmwareFile$lambda$4$readInt(fileInputStream2, bArr, this);
                this.if2_file_ver = readFirmwareFile$lambda$4$readInt(fileInputStream2, bArr, this);
                this.if2_file_checksum = readFirmwareFile$lambda$4$readInt(fileInputStream2, bArr, this);
                this.if3_file_offset = readFirmwareFile$lambda$4$readInt(fileInputStream2, bArr, this);
                this.if3_file_size = readFirmwareFile$lambda$4$readInt(fileInputStream2, bArr, this);
                this.if3_file_ver = readFirmwareFile$lambda$4$readInt(fileInputStream2, bArr, this);
                this.if3_file_checksum = readFirmwareFile$lambda$4$readInt(fileInputStream2, bArr, this);
                this.ble_file_offset = readFirmwareFile$lambda$4$readInt(fileInputStream2, bArr, this);
                this.ble_file_size = readFirmwareFile$lambda$4$readInt(fileInputStream2, bArr, this);
                this.ble_file_ver = readFirmwareFile$lambda$4$readInt(fileInputStream2, bArr, this);
                this.ble_file_checksum = readFirmwareFile$lambda$4$readInt(fileInputStream2, bArr, this);
                this.ui_file_ver = RangesKt.coerceIn(this.ui_file_ver, 0, RoomDatabase.MAX_BIND_PARAMETER_CNT);
                this.dsp_file_ver = RangesKt.coerceIn(this.dsp_file_ver, 0, RoomDatabase.MAX_BIND_PARAMETER_CNT);
                this.gps_file_ver = RangesKt.coerceIn(this.gps_file_ver, 0, RoomDatabase.MAX_BIND_PARAMETER_CNT);
                this.sound_db_file_ver = RangesKt.coerceIn(this.sound_db_file_ver, 0, RoomDatabase.MAX_BIND_PARAMETER_CNT);
                this.gps_db_file_ver = RangesKt.coerceIn(this.gps_db_file_ver, 0, 99999999);
                this.if1_file_ver = RangesKt.coerceIn(this.if1_file_ver, 0, RoomDatabase.MAX_BIND_PARAMETER_CNT);
                this.if2_file_ver = RangesKt.coerceIn(this.if2_file_ver, 0, RoomDatabase.MAX_BIND_PARAMETER_CNT);
                this.if3_file_ver = RangesKt.coerceIn(this.if3_file_ver, 0, RoomDatabase.MAX_BIND_PARAMETER_CNT);
                this.ble_file_ver = RangesKt.coerceIn(this.ble_file_ver, 0, RoomDatabase.MAX_BIND_PARAMETER_CNT);
                int i = this.model_number;
                if (i == 4) {
                    str = "R4";
                } else if (i == 5) {
                    str = "R4NZ";
                } else if (i == 6) {
                    str = "R4IL";
                } else if (i == 14) {
                    str = "R4W";
                } else if (i == 18) {
                    str = "R8W";
                } else if (i == 22) {
                    str = "R9";
                } else if (i == 32) {
                    str = "R9W";
                } else if (i != 42) {
                    switch (i) {
                        case 8:
                            str = "R8";
                            break;
                        case 9:
                            str = "R8NZ";
                            break;
                        case 10:
                            str = "R8IL";
                            break;
                        default:
                            str = "NA";
                            break;
                    }
                } else {
                    str = "AE903i";
                }
                this.include_file_model_name_string = str;
                Log.d("TAG_FW", "ui_file_ver: " + this.ui_file_ver + " || dsp file version: " + this.dsp_file_ver + " || readFirmwareFile: gps_db_file_offset:" + this.gps_db_file_offset + " || gps_db_file_size:" + this.gps_db_file_size + " || gps_db_file_ver:" + this.gps_db_file_ver + " || gps_db_file_checksum:" + this.gps_db_file_checksum + " ||gps_db_file_ver:" + this.gps_db_file_ver + ' ');
                CustomLog customLog = CustomLog.INSTANCE;
                StringBuilder sb = new StringBuilder("ui_file_ver: ");
                sb.append(this.ui_file_ver).append(" || ui_file_checksum: ").append(this.ui_file_checksum).append(" || ui_file_offset: ").append(this.ui_file_offset).append(" dsp_file_ver: ").append(this.dsp_file_ver).append(" || dsp_file_checksum: ").append(this.dsp_file_checksum).append(" || dsp_file_offset: ").append(this.dsp_file_offset).append("gps_file_ver: ").append(this.gps_file_ver).append(" || gps_file_checksum: ").append(this.gps_file_checksum).append(" || gps_file_offset: ").append(this.gps_file_offset).append("gps_db_file_ver: ").append(this.gps_db_file_ver).append(" || gps_db_file_checksum: ").append(this.gps_db_file_checksum).append(" || gps_db_file_offset: ");
                sb.append(this.gps_db_file_offset).append("  sound_db_file_ver: ").append(this.sound_db_file_ver).append(" || sound_db_file_checksum: ").append(this.sound_db_file_checksum).append(" || sound_db_file_offset: ").append(this.sound_db_file_offset).append("  if1_file_ver: ").append(this.if1_file_ver).append(" || if1_file_checksum: ").append(this.if1_file_checksum).append(" || if1_file_offset: ").append(this.if1_file_offset).append(" if1_file_ver: ").append(this.if2_file_ver).append(" || if2_file_checksum: ").append(this.if2_file_checksum).append(" || if2_file_offset: ").append(this.if2_file_offset).append(" if3_file_ver: ").append(this.if3_file_ver).append(" || if3_file_checksum: ").append(this.if3_file_checksum);
                sb.append(" || if3_file_offset: ").append(this.if3_file_offset).append("  ble_file_ver: ").append(this.ble_file_ver).append(" || ble_file_checksum: ").append(this.ble_file_checksum).append(" || ble_file_offset: ").append(this.ble_file_offset).append("  ");
                customLog.writeFile(sb.toString(), this.context);
                CloseableKt.closeFinally(fileInputStream, null);
                return true;
            } catch (Throwable th) {
                try {
                    throw th;
                } catch (Throwable th2) {
                    CloseableKt.closeFinally(fileInputStream, th);
                    throw th2;
                }
            }
        } catch (Exception e) {
            e.printStackTrace();
            return false;
        }
    }

    private static final int readFirmwareFile$lambda$4$readInt(FileInputStream fileInputStream, byte[] bArr, FirmWareUpdateWorker firmWareUpdateWorker) throws IOException {
        fileInputStream.read(bArr, 0, 4);
        return firmWareUpdateWorker.readIntFrom4ByteBuffer(bArr);
    }

    private final int readIntFrom4ByteBuffer(byte[] b) {
        int i = 0;
        for (int i2 = 0; i2 < 4; i2++) {
            int i3 = b[i2];
            if (i3 < 0) {
                i3 += 256;
            }
            i += i3 << (24 - (i2 * 8));
        }
        return i;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final Object flashBLEFile(Continuation<? super Boolean> continuation) {
        getSharePref().setFwFlashing(true);
        Log.d("TAG_FW", "isFwFlashing = true");
        String str = BluetoothUtils.INSTANCE.getFD_UPDATE_START_COM() + ':' + this.updateMode;
        Log.d("TAG_FW", "Send Command: flashBLEFile " + str);
        return bleWriteDownloadCommand(str, 2000, true, continuation);
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Code duplicated, block: B:100:0x02bc A[Catch: all -> 0x0570, Exception -> 0x0575, TryCatch #33 {Exception -> 0x0575, all -> 0x0570, blocks: (B:74:0x01d5, B:76:0x01dd, B:83:0x0230, B:85:0x0234, B:86:0x023a, B:89:0x025d, B:91:0x0265, B:98:0x02b8, B:100:0x02bc, B:101:0x02c2, B:104:0x02e5, B:106:0x02ed, B:113:0x0340, B:115:0x0344, B:116:0x034a, B:119:0x036d, B:121:0x0375, B:128:0x03c8, B:130:0x03cc, B:131:0x03d2, B:135:0x03f7, B:137:0x03ff, B:144:0x0452), top: B:268:0x01d5 }] */
    /* JADX WARN: Code duplicated, block: B:103:0x02e4 A[RETURN] */
    /* JADX WARN: Code duplicated, block: B:113:0x0340 A[Catch: all -> 0x0570, Exception -> 0x0575, TRY_ENTER, TryCatch #33 {Exception -> 0x0575, all -> 0x0570, blocks: (B:74:0x01d5, B:76:0x01dd, B:83:0x0230, B:85:0x0234, B:86:0x023a, B:89:0x025d, B:91:0x0265, B:98:0x02b8, B:100:0x02bc, B:101:0x02c2, B:104:0x02e5, B:106:0x02ed, B:113:0x0340, B:115:0x0344, B:116:0x034a, B:119:0x036d, B:121:0x0375, B:128:0x03c8, B:130:0x03cc, B:131:0x03d2, B:135:0x03f7, B:137:0x03ff, B:144:0x0452), top: B:268:0x01d5 }] */
    /* JADX WARN: Code duplicated, block: B:115:0x0344 A[Catch: all -> 0x0570, Exception -> 0x0575, TryCatch #33 {Exception -> 0x0575, all -> 0x0570, blocks: (B:74:0x01d5, B:76:0x01dd, B:83:0x0230, B:85:0x0234, B:86:0x023a, B:89:0x025d, B:91:0x0265, B:98:0x02b8, B:100:0x02bc, B:101:0x02c2, B:104:0x02e5, B:106:0x02ed, B:113:0x0340, B:115:0x0344, B:116:0x034a, B:119:0x036d, B:121:0x0375, B:128:0x03c8, B:130:0x03cc, B:131:0x03d2, B:135:0x03f7, B:137:0x03ff, B:144:0x0452), top: B:268:0x01d5 }] */
    /* JADX WARN: Code duplicated, block: B:118:0x036c A[RETURN] */
    /* JADX WARN: Code duplicated, block: B:128:0x03c8 A[Catch: all -> 0x0570, Exception -> 0x0575, TRY_ENTER, TryCatch #33 {Exception -> 0x0575, all -> 0x0570, blocks: (B:74:0x01d5, B:76:0x01dd, B:83:0x0230, B:85:0x0234, B:86:0x023a, B:89:0x025d, B:91:0x0265, B:98:0x02b8, B:100:0x02bc, B:101:0x02c2, B:104:0x02e5, B:106:0x02ed, B:113:0x0340, B:115:0x0344, B:116:0x034a, B:119:0x036d, B:121:0x0375, B:128:0x03c8, B:130:0x03cc, B:131:0x03d2, B:135:0x03f7, B:137:0x03ff, B:144:0x0452), top: B:268:0x01d5 }] */
    /* JADX WARN: Code duplicated, block: B:130:0x03cc A[Catch: all -> 0x0570, Exception -> 0x0575, TryCatch #33 {Exception -> 0x0575, all -> 0x0570, blocks: (B:74:0x01d5, B:76:0x01dd, B:83:0x0230, B:85:0x0234, B:86:0x023a, B:89:0x025d, B:91:0x0265, B:98:0x02b8, B:100:0x02bc, B:101:0x02c2, B:104:0x02e5, B:106:0x02ed, B:113:0x0340, B:115:0x0344, B:116:0x034a, B:119:0x036d, B:121:0x0375, B:128:0x03c8, B:130:0x03cc, B:131:0x03d2, B:135:0x03f7, B:137:0x03ff, B:144:0x0452), top: B:268:0x01d5 }] */
    /* JADX WARN: Code duplicated, block: B:133:0x03f4 A[RETURN] */
    /* JADX WARN: Code duplicated, block: B:134:0x03f5  */
    /* JADX WARN: Code duplicated, block: B:137:0x03ff A[Catch: all -> 0x0570, Exception -> 0x0575, TRY_LEAVE, TryCatch #33 {Exception -> 0x0575, all -> 0x0570, blocks: (B:74:0x01d5, B:76:0x01dd, B:83:0x0230, B:85:0x0234, B:86:0x023a, B:89:0x025d, B:91:0x0265, B:98:0x02b8, B:100:0x02bc, B:101:0x02c2, B:104:0x02e5, B:106:0x02ed, B:113:0x0340, B:115:0x0344, B:116:0x034a, B:119:0x036d, B:121:0x0375, B:128:0x03c8, B:130:0x03cc, B:131:0x03d2, B:135:0x03f7, B:137:0x03ff, B:144:0x0452), top: B:268:0x01d5 }] */
    /* JADX WARN: Code duplicated, block: B:144:0x0452 A[Catch: all -> 0x0570, Exception -> 0x0575, TRY_ENTER, TRY_LEAVE, TryCatch #33 {Exception -> 0x0575, all -> 0x0570, blocks: (B:74:0x01d5, B:76:0x01dd, B:83:0x0230, B:85:0x0234, B:86:0x023a, B:89:0x025d, B:91:0x0265, B:98:0x02b8, B:100:0x02bc, B:101:0x02c2, B:104:0x02e5, B:106:0x02ed, B:113:0x0340, B:115:0x0344, B:116:0x034a, B:119:0x036d, B:121:0x0375, B:128:0x03c8, B:130:0x03cc, B:131:0x03d2, B:135:0x03f7, B:137:0x03ff, B:144:0x0452), top: B:268:0x01d5 }] */
    /* JADX WARN: Code duplicated, block: B:146:0x0479 A[RETURN] */
    /* JADX WARN: Code duplicated, block: B:147:0x047a  */
    /* JADX WARN: Code duplicated, block: B:161:0x04dd  */
    /* JADX WARN: Code duplicated, block: B:246:0x0494 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:248:0x0411 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:256:0x0164 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:271:0x0487 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:61:0x018e A[Catch: Exception -> 0x057a, all -> 0x05c8, TryCatch #20 {all -> 0x05c8, blocks: (B:59:0x0164, B:61:0x018e, B:63:0x0192, B:64:0x019a, B:66:0x019e, B:70:0x01ac, B:185:0x0581), top: B:256:0x0164 }] */
    /* JADX WARN: Code duplicated, block: B:66:0x019e A[Catch: Exception -> 0x057a, all -> 0x05c8, TRY_LEAVE, TryCatch #20 {all -> 0x05c8, blocks: (B:59:0x0164, B:61:0x018e, B:63:0x0192, B:64:0x019a, B:66:0x019e, B:70:0x01ac, B:185:0x0581), top: B:256:0x0164 }] */
    /* JADX WARN: Code duplicated, block: B:68:0x01a7  */
    /* JADX WARN: Code duplicated, block: B:72:0x01ca A[RETURN] */
    /* JADX WARN: Code duplicated, block: B:73:0x01cb  */
    /* JADX WARN: Code duplicated, block: B:7:0x001c  */
    /* JADX WARN: Code duplicated, block: B:83:0x0230 A[Catch: all -> 0x0570, Exception -> 0x0575, TRY_ENTER, TryCatch #33 {Exception -> 0x0575, all -> 0x0570, blocks: (B:74:0x01d5, B:76:0x01dd, B:83:0x0230, B:85:0x0234, B:86:0x023a, B:89:0x025d, B:91:0x0265, B:98:0x02b8, B:100:0x02bc, B:101:0x02c2, B:104:0x02e5, B:106:0x02ed, B:113:0x0340, B:115:0x0344, B:116:0x034a, B:119:0x036d, B:121:0x0375, B:128:0x03c8, B:130:0x03cc, B:131:0x03d2, B:135:0x03f7, B:137:0x03ff, B:144:0x0452), top: B:268:0x01d5 }] */
    /* JADX WARN: Code duplicated, block: B:85:0x0234 A[Catch: all -> 0x0570, Exception -> 0x0575, TryCatch #33 {Exception -> 0x0575, all -> 0x0570, blocks: (B:74:0x01d5, B:76:0x01dd, B:83:0x0230, B:85:0x0234, B:86:0x023a, B:89:0x025d, B:91:0x0265, B:98:0x02b8, B:100:0x02bc, B:101:0x02c2, B:104:0x02e5, B:106:0x02ed, B:113:0x0340, B:115:0x0344, B:116:0x034a, B:119:0x036d, B:121:0x0375, B:128:0x03c8, B:130:0x03cc, B:131:0x03d2, B:135:0x03f7, B:137:0x03ff, B:144:0x0452), top: B:268:0x01d5 }] */
    /* JADX WARN: Code duplicated, block: B:88:0x025c A[RETURN] */
    /* JADX WARN: Code duplicated, block: B:98:0x02b8 A[Catch: all -> 0x0570, Exception -> 0x0575, TRY_ENTER, TryCatch #33 {Exception -> 0x0575, all -> 0x0570, blocks: (B:74:0x01d5, B:76:0x01dd, B:83:0x0230, B:85:0x0234, B:86:0x023a, B:89:0x025d, B:91:0x0265, B:98:0x02b8, B:100:0x02bc, B:101:0x02c2, B:104:0x02e5, B:106:0x02ed, B:113:0x0340, B:115:0x0344, B:116:0x034a, B:119:0x036d, B:121:0x0375, B:128:0x03c8, B:130:0x03cc, B:131:0x03d2, B:135:0x03f7, B:137:0x03ff, B:144:0x0452), top: B:268:0x01d5 }] */
    /* JADX WARN: Not initialized variable reg: 13, insn: 0x0124: MOVE (r1 I:??[OBJECT, ARRAY]) = (r13 I:??[OBJECT, ARRAY]), block:B:43:0x0122 */
    /* JADX WARN: Not initialized variable reg: 15, insn: 0x011d: MOVE (r3 I:??[OBJECT, ARRAY]) = (r15 I:??[OBJECT, ARRAY]), block:B:40:0x011c */
    /* JADX WARN: Not initialized variable reg: 15, insn: 0x0125: MOVE (r3 I:??[OBJECT, ARRAY]) = (r15 I:??[OBJECT, ARRAY]), block:B:43:0x0122 */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:147:0x047a -> B:273:0x047f). Please report as a decompilation issue!!! */
    /*  JADX ERROR: JadxOverflowException in pass: RegionMakerVisitor
        jadx.core.utils.exceptions.JadxOverflowException: Regions stack size limit reached
        	at jadx.core.utils.ErrorsCounter.addError(ErrorsCounter.java:59)
        	at jadx.core.utils.ErrorsCounter.error(ErrorsCounter.java:31)
        	at jadx.core.dex.attributes.nodes.NotificationAttrNode.addError(NotificationAttrNode.java:19)
        */
    public final java.lang.Object writeFileData(java.io.File r26, int r27, int r28, kotlin.coroutines.Continuation<? super java.lang.Boolean> r29) {
        /*
            Method dump skipped, instruction units count: 1888
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker.writeFileData(java.io.File, int, int, kotlin.coroutines.Continuation):java.lang.Object");
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Code duplicated, block: B:7:0x0018  */
    public final Object bleWriteDownloadCommand(String str, int i, boolean z, Continuation<? super Boolean> continuation) {
        C20841 c20841;
        FirmWareUpdateWorker firmWareUpdateWorker;
        if (continuation instanceof C20841) {
            c20841 = (C20841) continuation;
            if ((c20841.label & Integer.MIN_VALUE) != 0) {
                c20841.label -= Integer.MIN_VALUE;
            } else {
                c20841 = new C20841(continuation);
            }
        } else {
            c20841 = new C20841(continuation);
        }
        Object obj = c20841.result;
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        int i2 = c20841.label;
        if (i2 == 0) {
            ResultKt.throwOnFailure(obj);
            try {
                getMyApp().isWriteSuccess().postValue(BaseApplication.Ack.WAIT);
                BluetoothGattCharacteristic bluetoothGattCharacteristic = this.comNotifyCharacteristic;
                if (bluetoothGattCharacteristic == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("comNotifyCharacteristic");
                    bluetoothGattCharacteristic = null;
                }
                byte[] bytes = str.getBytes(Charsets.UTF_8);
                Intrinsics.checkNotNullExpressionValue(bytes, "getBytes(...)");
                c20841.L$0 = this;
                c20841.L$1 = str;
                c20841.I$0 = i;
                c20841.Z$0 = z;
                c20841.label = 1;
                if (bleWrite(bluetoothGattCharacteristic, i / 2, bytes, c20841) == coroutine_suspended) {
                    return coroutine_suspended;
                }
                firmWareUpdateWorker = this;
            } catch (Exception e) {
                e = e;
                firmWareUpdateWorker = this;
                e.printStackTrace();
                Log.d("TAG_FW", "FW write Exception:" + e.getLocalizedMessage());
                CustomLog.INSTANCE.writeFile("FW write Exception:" + e.getLocalizedMessage(), firmWareUpdateWorker.context);
                return Boxing.boxBoolean(false);
            }
        } else {
            if (i2 != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            z = c20841.Z$0;
            i = c20841.I$0;
            str = (String) c20841.L$1;
            firmWareUpdateWorker = (FirmWareUpdateWorker) c20841.L$0;
            try {
                ResultKt.throwOnFailure(obj);
            } catch (Exception e2) {
                e = e2;
                e.printStackTrace();
                Log.d("TAG_FW", "FW write Exception:" + e.getLocalizedMessage());
                CustomLog.INSTANCE.writeFile("FW write Exception:" + e.getLocalizedMessage(), firmWareUpdateWorker.context);
                return Boxing.boxBoolean(false);
            }
        }
        Log.d("TAG_FW", "FW write:" + str);
        CustomLog.INSTANCE.writeFile("FW write:" + str, firmWareUpdateWorker.context);
        Ref.BooleanRef booleanRef = new Ref.BooleanRef();
        BuildersKt__BuildersKt.runBlocking$default(null, firmWareUpdateWorker.new C20852(i, booleanRef, null), 1, null);
        if (!booleanRef.element && !z) {
            firmWareUpdateWorker.getMyApp().getFirmwareUpdateProcessBT().postValue(new UpdateProgressModel(FIrmWareUpdateProcess.FILE_DOWNLOAD_FAIL, "", ""));
        }
        return Boxing.boxBoolean(booleanRef.element);
    }

    static /* synthetic */ Object bleWriteDownloadCommand$default(FirmWareUpdateWorker firmWareUpdateWorker, String str, int i, boolean z, Continuation continuation, int i2, Object obj) {
        if ((i2 & 4) != 0) {
            z = false;
        }
        return firmWareUpdateWorker.bleWriteDownloadCommand(str, i, z, continuation);
    }

    /* JADX INFO: renamed from: com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker$bleWriteDownloadCommand$2 */
    /* JADX INFO: compiled from: FirmWareUpdateWorker.kt */
    @Metadata(m490d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, m491d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, m492k = 3, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    @DebugMetadata(m503c = "com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker$bleWriteDownloadCommand$2", m504f = "FirmWareUpdateWorker.kt", m505i = {}, m506l = {968}, m507m = "invokeSuspend", m508n = {}, m509s = {})
    static final class C20852 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        final /* synthetic */ int $millis;
        final /* synthetic */ Ref.BooleanRef $resultMain;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        C20852(int i, Ref.BooleanRef booleanRef, Continuation<? super C20852> continuation) {
            super(2, continuation);
            this.$millis = i;
            this.$resultMain = booleanRef;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return FirmWareUpdateWorker.this.new C20852(this.$millis, this.$resultMain, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
            return ((C20852) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
            int i = this.label;
            if (i == 0) {
                ResultKt.throwOnFailure(obj);
                this.label = 1;
                obj = FirmWareUpdateWorker.this.checkCommandACK(this.$millis, this);
                if (obj == coroutine_suspended) {
                    return coroutine_suspended;
                }
            } else {
                if (i != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ResultKt.throwOnFailure(obj);
            }
            boolean zBooleanValue = ((Boolean) obj).booleanValue();
            this.$resultMain.element = zBooleanValue;
            if (zBooleanValue) {
                return Unit.INSTANCE;
            }
            return Unit.INSTANCE;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final Object bleWrite(BluetoothGattCharacteristic bluetoothGattCharacteristic, int i, byte[] bArr, Continuation<? super Boolean> continuation) {
        try {
            BluetoothManager.Companion companion = BluetoothManager.INSTANCE;
            Context applicationContext = getApplicationContext();
            Intrinsics.checkNotNullExpressionValue(applicationContext, "getApplicationContext(...)");
            companion.getInstance(applicationContext).setWrite_end_flag(false);
            if (Build.VERSION.SDK_INT >= 33) {
                Log.d("TAG", "high:" + Build.VERSION.SDK_INT + ' ');
                BluetoothGatt btGatt = getBtGatt();
                if (btGatt != null) {
                    Boxing.boxInt(btGatt.writeCharacteristic(bluetoothGattCharacteristic, bArr, 1));
                }
            } else {
                Log.d("TAG", "below:" + Build.VERSION.SDK_INT + ' ');
                bluetoothGattCharacteristic.setWriteType(1);
                bluetoothGattCharacteristic.setValue(bArr);
                BluetoothGatt btGatt2 = getBtGatt();
                if (btGatt2 != null) {
                    Boxing.boxBoolean(btGatt2.writeCharacteristic(bluetoothGattCharacteristic));
                }
            }
            Ref.BooleanRef booleanRef = new Ref.BooleanRef();
            BuildersKt__BuildersKt.runBlocking$default(null, new C20832(i, booleanRef, null), 1, null);
            if (!booleanRef.element) {
                getMyApp().getFirmwareUpdateProcessBT().postValue(new UpdateProgressModel(FIrmWareUpdateProcess.FILE_DOWNLOAD_FAIL, "", ""));
            }
            return Boxing.boxBoolean(booleanRef.element);
        } catch (Exception e) {
            e.printStackTrace();
            return Boxing.boxBoolean(false);
        }
    }

    /* JADX INFO: renamed from: com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker$bleWrite$2 */
    /* JADX INFO: compiled from: FirmWareUpdateWorker.kt */
    @Metadata(m490d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, m491d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, m492k = 3, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    @DebugMetadata(m503c = "com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker$bleWrite$2", m504f = "FirmWareUpdateWorker.kt", m505i = {}, m506l = {PointerIconCompat.TYPE_GRAB}, m507m = "invokeSuspend", m508n = {}, m509s = {})
    static final class C20832 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Unit>, Object> {
        final /* synthetic */ int $millis;
        final /* synthetic */ Ref.BooleanRef $resultMain;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        C20832(int i, Ref.BooleanRef booleanRef, Continuation<? super C20832> continuation) {
            super(2, continuation);
            this.$millis = i;
            this.$resultMain = booleanRef;
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            return FirmWareUpdateWorker.this.new C20832(this.$millis, this.$resultMain, continuation);
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Unit> continuation) {
            return ((C20832) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
            int i = this.label;
            if (i == 0) {
                ResultKt.throwOnFailure(obj);
                this.label = 1;
                obj = FirmWareUpdateWorker.this.checkWriteFile(this.$millis, this);
                if (obj == coroutine_suspended) {
                    return coroutine_suspended;
                }
            } else {
                if (i != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ResultKt.throwOnFailure(obj);
            }
            boolean zBooleanValue = ((Boolean) obj).booleanValue();
            this.$resultMain.element = zBooleanValue;
            if (zBooleanValue) {
                return Unit.INSTANCE;
            }
            return Unit.INSTANCE;
        }
    }

    /* JADX INFO: renamed from: com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker$checkWriteFile$2 */
    /* JADX INFO: compiled from: FirmWareUpdateWorker.kt */
    @Metadata(m490d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u000b\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, m491d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, m492k = 3, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    @DebugMetadata(m503c = "com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker$checkWriteFile$2", m504f = "FirmWareUpdateWorker.kt", m505i = {}, m506l = {}, m507m = "invokeSuspend", m508n = {}, m509s = {})
    static final class C20892 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Boolean>, Object> {
        private /* synthetic */ Object L$0;
        int label;

        C20892(Continuation<? super C20892> continuation) {
            super(2, continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            C20892 c20892 = FirmWareUpdateWorker.this.new C20892(continuation);
            c20892.L$0 = obj;
            return c20892;
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Boolean> continuation) {
            return ((C20892) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            IntrinsicsKt.getCOROUTINE_SUSPENDED();
            if (this.label == 0) {
                ResultKt.throwOnFailure(obj);
                CoroutineScope coroutineScope = (CoroutineScope) this.L$0;
                while (CoroutineScopeKt.isActive(coroutineScope)) {
                    BluetoothManager.Companion companion = BluetoothManager.INSTANCE;
                    Context applicationContext = FirmWareUpdateWorker.this.getApplicationContext();
                    Intrinsics.checkNotNullExpressionValue(applicationContext, "getApplicationContext(...)");
                    if (companion.getInstance(applicationContext).getWrite_end_flag()) {
                        BluetoothManager.Companion companion2 = BluetoothManager.INSTANCE;
                        Context applicationContext2 = FirmWareUpdateWorker.this.getApplicationContext();
                        Intrinsics.checkNotNullExpressionValue(applicationContext2, "getApplicationContext(...)");
                        companion2.getInstance(applicationContext2).setWrite_end_flag(false);
                        System.out.println((Object) "Flag is true! Stopping check.");
                        return Boxing.boxBoolean(true);
                    }
                }
                return Boxing.boxBoolean(false);
            }
            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
    }

    /* JADX WARN: Code duplicated, block: B:7:0x0014  */
    public final Object checkWriteFile(long j, Continuation<? super Boolean> continuation) {
        C20881 c20881;
        if (continuation instanceof C20881) {
            c20881 = (C20881) continuation;
            if ((c20881.label & Integer.MIN_VALUE) != 0) {
                c20881.label -= Integer.MIN_VALUE;
            } else {
                c20881 = new C20881(continuation);
            }
        } else {
            c20881 = new C20881(continuation);
        }
        Object objWithTimeoutOrNull = c20881.result;
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        int i = c20881.label;
        if (i == 0) {
            ResultKt.throwOnFailure(objWithTimeoutOrNull);
            C20892 c20892 = new C20892(null);
            c20881.label = 1;
            objWithTimeoutOrNull = TimeoutKt.withTimeoutOrNull(j, c20892, c20881);
            if (objWithTimeoutOrNull == coroutine_suspended) {
                return coroutine_suspended;
            }
        } else {
            if (i != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ResultKt.throwOnFailure(objWithTimeoutOrNull);
        }
        Boolean bool = (Boolean) objWithTimeoutOrNull;
        return Boxing.boxBoolean(bool != null ? bool.booleanValue() : false);
    }

    /* JADX INFO: renamed from: com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker$checkCommandACK$2 */
    /* JADX INFO: compiled from: FirmWareUpdateWorker.kt */
    @Metadata(m490d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u000b\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, m491d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, m492k = 3, m493mv = {2, 0, 0}, m495xi = ConstraintLayout.LayoutParams.Table.LAYOUT_CONSTRAINT_VERTICAL_CHAINSTYLE)
    @DebugMetadata(m503c = "com.uniden.rtach.helper.firmware_update.FirmWareUpdateWorker$checkCommandACK$2", m504f = "FirmWareUpdateWorker.kt", m505i = {}, m506l = {}, m507m = "invokeSuspend", m508n = {}, m509s = {})
    static final class C20872 extends SuspendLambda implements Function2<CoroutineScope, Continuation<? super Boolean>, Object> {
        private /* synthetic */ Object L$0;
        int label;

        C20872(Continuation<? super C20872> continuation) {
            super(2, continuation);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            C20872 c20872 = FirmWareUpdateWorker.this.new C20872(continuation);
            c20872.L$0 = obj;
            return c20872;
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation<? super Boolean> continuation) {
            return ((C20872) create(coroutineScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override // kotlin.coroutines.jvm.internal.BaseContinuationImpl
        public final Object invokeSuspend(Object obj) {
            IntrinsicsKt.getCOROUTINE_SUSPENDED();
            if (this.label == 0) {
                ResultKt.throwOnFailure(obj);
                CoroutineScope coroutineScope = (CoroutineScope) this.L$0;
                while (CoroutineScopeKt.isActive(coroutineScope)) {
                    if (FirmWareUpdateWorker.this.getMyApp().isWriteSuccess().getValue() == BaseApplication.Ack.ACK) {
                        FirmWareUpdateWorker.this.getMyApp().isWriteSuccess().postValue(BaseApplication.Ack.WAIT);
                        return Boxing.boxBoolean(true);
                    }
                    if (FirmWareUpdateWorker.this.getMyApp().isWriteSuccess().getValue() == BaseApplication.Ack.NACK) {
                        FirmWareUpdateWorker.this.getMyApp().isWriteSuccess().postValue(BaseApplication.Ack.WAIT);
                        return Boxing.boxBoolean(false);
                    }
                }
                return Boxing.boxBoolean(false);
            }
            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
    }

    /* JADX WARN: Code duplicated, block: B:7:0x0014  */
    public final Object checkCommandACK(long j, Continuation<? super Boolean> continuation) {
        C20861 c20861;
        if (continuation instanceof C20861) {
            c20861 = (C20861) continuation;
            if ((c20861.label & Integer.MIN_VALUE) != 0) {
                c20861.label -= Integer.MIN_VALUE;
            } else {
                c20861 = new C20861(continuation);
            }
        } else {
            c20861 = new C20861(continuation);
        }
        Object objWithTimeoutOrNull = c20861.result;
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        int i = c20861.label;
        if (i == 0) {
            ResultKt.throwOnFailure(objWithTimeoutOrNull);
            C20872 c20872 = new C20872(null);
            c20861.label = 1;
            objWithTimeoutOrNull = TimeoutKt.withTimeoutOrNull(j, c20872, c20861);
            if (objWithTimeoutOrNull == coroutine_suspended) {
                return coroutine_suspended;
            }
        } else {
            if (i != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ResultKt.throwOnFailure(objWithTimeoutOrNull);
        }
        Boolean bool = (Boolean) objWithTimeoutOrNull;
        return Boxing.boxBoolean(bool != null ? bool.booleanValue() : false);
    }
}
