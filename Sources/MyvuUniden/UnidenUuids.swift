import CoreBluetooth
import Foundation

/// GATT UUIDs from Uniden R/TACH 1.0.9 (`Constant.java`). Alert notify is the
/// only characteristic this client needs to receive radar hits.
public enum UnidenUuids {
    public static let dataService = CBUUID(string: "18424398-7CBC-11E9-8F9E-2A86E4085A59")
    public static let commandService = CBUUID(string: "1842467C-7CBC-11E9-8F9E-2A86E4085A59")
    public static let alertNotify = CBUUID(string: "6EB675AB-8BD1-1B9A-7444-621E52EC6823")
    public static let etcNotify = CBUUID(string: "6C290D2E-1C03-ACA1-AB48-A9B908BAE79E")
    public static let writeCommand = CBUUID(string: "2C86686A-53DC-25B3-0C4A-F0E10C8DEE20")
}

/// iOS drops BLE scans that use a nil service list once the app is backgrounded.
/// Auto-connect while driving almost always runs in that state, so background
/// scans filter to the Uniden GATT services; foreground stays unfiltered so a
/// first-time R4W can still be found by advertised name.
public enum UnidenScanMode {
    public static func serviceFilter(backgrounded: Bool) -> [CBUUID]? {
        backgrounded ? [UnidenUuids.dataService, UnidenUuids.commandService] : nil
    }
}
