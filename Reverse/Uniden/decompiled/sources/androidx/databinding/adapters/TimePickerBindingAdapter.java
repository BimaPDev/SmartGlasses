package androidx.databinding.adapters;

import android.widget.TimePicker;
import androidx.databinding.InverseBindingListener;

/* JADX INFO: loaded from: classes.dex */
public class TimePickerBindingAdapter {
    public static void setHour(TimePicker timePicker, int i) {
        if (timePicker.getHour() != i) {
            timePicker.setHour(i);
        }
    }

    public static void setMinute(TimePicker timePicker, int i) {
        if (timePicker.getMinute() != i) {
            timePicker.setMinute(i);
        }
    }

    public static int getHour(TimePicker timePicker) {
        return timePicker.getHour();
    }

    public static int getMinute(TimePicker timePicker) {
        return timePicker.getMinute();
    }

    public static void setListeners(TimePicker timePicker, final TimePicker.OnTimeChangedListener onTimeChangedListener, final InverseBindingListener inverseBindingListener, final InverseBindingListener inverseBindingListener2) {
        if (inverseBindingListener == null && inverseBindingListener2 == null) {
            timePicker.setOnTimeChangedListener(onTimeChangedListener);
        } else {
            timePicker.setOnTimeChangedListener(new TimePicker.OnTimeChangedListener() { // from class: androidx.databinding.adapters.TimePickerBindingAdapter.1
                @Override // android.widget.TimePicker.OnTimeChangedListener
                public void onTimeChanged(TimePicker timePicker2, int i, int i2) {
                    TimePicker.OnTimeChangedListener onTimeChangedListener2 = onTimeChangedListener;
                    if (onTimeChangedListener2 != null) {
                        onTimeChangedListener2.onTimeChanged(timePicker2, i, i2);
                    }
                    InverseBindingListener inverseBindingListener3 = inverseBindingListener;
                    if (inverseBindingListener3 != null) {
                        inverseBindingListener3.onChange();
                    }
                    InverseBindingListener inverseBindingListener4 = inverseBindingListener2;
                    if (inverseBindingListener4 != null) {
                        inverseBindingListener4.onChange();
                    }
                }
            });
        }
    }
}
