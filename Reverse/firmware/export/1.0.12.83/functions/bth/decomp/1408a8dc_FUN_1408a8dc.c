/* FUN_1408a8dc @ 0x1408a8dc */

undefined4 FUN_1408a8dc(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0x34) {
    switch(param_1) {
    case 1:
      uVar1 = DAT_1408a9bc;
      break;
    default:
      uVar1 = DAT_1408a990;
      break;
    case 3:
      uVar1 = DAT_1408a9c0;
      break;
    case 0xf:
      uVar1 = DAT_1408a99c;
      break;
    case 0x11:
      uVar1 = DAT_1408a9a0;
      break;
    case 0x13:
      uVar1 = DAT_1408a9a4;
      break;
    case 0x15:
      uVar1 = DAT_1408a9a8;
      break;
    case 0x17:
      uVar1 = DAT_1408a9ac;
      break;
    case 0x19:
      uVar1 = DAT_1408a9b0;
      break;
    case 0x1b:
      uVar1 = DAT_1408a9b4;
      break;
    case 0x1f:
      uVar1 = DAT_1408a9b8;
      break;
    case 0x33:
      uVar1 = DAT_1408a998;
    }
  }
  else {
    uVar1 = DAT_1408a994;
    if ((param_1 != 0x1013) && (uVar1 = DAT_1408a988, param_1 != 0x1015)) {
      if (param_1 == 0x1011) {
        return DAT_1408a98c;
      }
      uVar1 = DAT_1408a9c4;
      if (param_1 < 0x1001) {
        uVar1 = DAT_1408a990;
      }
    }
  }
  return uVar1;
}

