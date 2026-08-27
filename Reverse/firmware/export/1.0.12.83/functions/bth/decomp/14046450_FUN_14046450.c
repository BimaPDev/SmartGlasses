/* FUN_14046450 @ 0x14046450 */

undefined1 * FUN_14046450(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_28;
  undefined1 *local_24;
  uint local_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  int local_14;
  
  local_28 = DAT_14046740;
  switch(*param_1) {
  case 0x47:
    local_24 = (undefined1 *)FUN_14046d84();
    break;
  case 0x48:
    local_24 = (undefined1 *)FUN_14046de8();
    break;
  case 0x49:
    local_24 = (undefined1 *)FUN_14046eb4();
    break;
  case 0x4a:
    local_24 = (undefined1 *)FUN_14046f00();
    break;
  case 0x4b:
    local_24 = (undefined1 *)FUN_14046f4c();
    break;
  case 0x4c:
    local_24 = (undefined1 *)FUN_14046fe4();
    break;
  case 0x4d:
    local_24 = (undefined1 *)FUN_14047038();
    break;
  case 0x4e:
    local_24 = (undefined1 *)FUN_14047084();
    break;
  case 0x4f:
    if (*(ushort *)(param_1 + 0x3fe) == 0x20) {
      local_24 = (undefined1 *)FUN_140470d0(param_1 + 6);
      break;
    }
    uVar3 = 0x20;
    local_24 = (undefined1 *)DAT_1404672c;
    uVar2 = 0x5d;
    local_20 = (uint)*(ushort *)(param_1 + 0x3fe);
    goto LAB_1404651a;
  case 0x50:
    local_24 = (undefined1 *)FUN_1404718c();
    break;
  case 0x51:
    local_24 = (undefined1 *)FUN_140471d8();
    break;
  default:
    goto switchD_1404645e_caseD_52;
  case 0x54:
    local_24 = (undefined1 *)FUN_14046758();
    break;
  case 0x55:
    if (*(ushort *)(param_1 + 0x3fe) == 0xc) {
      local_24 = (undefined1 *)FUN_14046790(param_1[6],*(undefined4 *)(param_1 + 10));
      break;
    }
    uVar3 = 0xc;
    local_24 = (undefined1 *)DAT_1404672c;
    uVar2 = 0x75;
    local_20 = (uint)*(ushort *)(param_1 + 0x3fe);
    goto LAB_1404651a;
  case 0x56:
    local_24 = (undefined1 *)FUN_14046930();
    break;
  case 0x57:
    local_24 = (undefined1 *)FUN_14046990();
    break;
  case 0x58:
    local_24 = (undefined1 *)FUN_140469f0();
    break;
  case 0x59:
    local_24 = (undefined1 *)FUN_14046a5c();
    break;
  case 0x5b:
    if (*(ushort *)(param_1 + 0x3fe) == 8) {
      local_24 = (undefined1 *)0x0;
      *DAT_14046754 = param_1[6];
      break;
    }
    uVar3 = 8;
    local_24 = (undefined1 *)DAT_1404672c;
    uVar2 = 0x8f;
    local_28 = DAT_14046730;
    local_20 = (uint)*(ushort *)(param_1 + 0x3fe);
    goto LAB_1404651a;
  case 0x5d:
    if (*(ushort *)(param_1 + 0x3fe) == 8) {
      local_24 = (undefined1 *)0x0;
      *DAT_14046750 = param_1[6];
      break;
    }
    uVar3 = 8;
    local_24 = (undefined1 *)DAT_1404672c;
    uVar2 = 0x9a;
    local_28 = DAT_14046730;
    local_20 = (uint)*(ushort *)(param_1 + 0x3fe);
    goto LAB_1404651a;
  case 0x5f:
    if (*(ushort *)(param_1 + 0x3fe) == 8) {
      local_24 = (undefined1 *)0x0;
      *DAT_14046748 = param_1[6];
      break;
    }
    uVar3 = 8;
    local_24 = (undefined1 *)DAT_1404672c;
    uVar2 = 0xa5;
    local_28 = DAT_14046730;
    local_20 = (uint)*(ushort *)(param_1 + 0x3fe);
    goto LAB_1404651a;
  case 0x61:
    local_28 = DAT_14046738;
    local_24 = (undefined1 *)DAT_1404672c;
    FUN_1402a6e8(4,0xbb,DAT_14046720,DAT_1404671c);
    FUN_1404d54c(0);
    local_24 = (undefined1 *)0xffffffff;
    break;
  case 0x93:
    local_1c = (undefined1 *)(uint)*(ushort *)(param_1 + 0x3fe);
    local_24 = *(undefined1 **)(param_1 + 2);
    local_28 = DAT_14046734;
    local_20 = 0x93;
    puVar1 = (undefined1 *)FUN_1402a6e8(4,0x25,DAT_14046720,DAT_1404671c);
    return puVar1;
  case 0x94:
    local_1c = (undefined1 *)(uint)*(ushort *)(param_1 + 0x3fe);
    if (local_1c == (undefined1 *)0x80) {
      local_24 = *(undefined1 **)(param_1 + 2);
      local_18 = param_1 + 6;
      local_28 = DAT_14046744;
      local_20 = 0x94;
      puVar1 = (undefined1 *)FUN_1402a6e8(4,0x30,DAT_14046720,DAT_1404671c);
      return puVar1;
    }
    local_24 = (undefined1 *)DAT_1404673c;
    uVar3 = 0x80;
    uVar2 = 0x2c;
    local_20 = (uint)local_1c;
    goto LAB_1404651a;
  case 0x95:
    local_24 = *(undefined1 **)(param_1 + 2);
    local_28 = DAT_14046724;
    FUN_1402a6e8(4,0x1f,DAT_14046720,DAT_1404671c);
    local_24 = (undefined1 *)DAT_14046728;
    break;
  case 0x96:
    if (*(ushort *)(param_1 + 0x3fe) == 0xc) {
      local_24 = param_1 + 6;
      local_28 = DAT_1404674c;
      FUN_1402a6e8(4,0x19,DAT_14046720,DAT_1404671c);
      local_24 = (undefined1 *)0xfffffff6;
      break;
    }
    uVar3 = 0xc;
    local_24 = (undefined1 *)DAT_14046714;
    uVar2 = 0x15;
    local_28 = DAT_14046718;
    local_20 = (uint)*(ushort *)(param_1 + 0x3fe);
LAB_1404651a:
    local_1c = (undefined1 *)uVar3;
    param_1 = (undefined1 *)FUN_1402a6e8(4,uVar2,DAT_14046720,DAT_1404671c);
switchD_1404645e_caseD_52:
    return param_1;
  }
  local_28 = *(undefined4 *)(param_1 + 2);
  local_1c = (undefined1 *)&local_28;
  local_14 = *DAT_14050b30;
  local_20 = CONCAT31(local_20._1_3_,*param_1);
  local_18 = (undefined1 *)CONCAT22(local_18._2_2_,8);
  FUN_140a49fc(local_20,&local_28,local_18);
  if (*DAT_14050b30 != local_14) {
                    /* WARNING: Subroutine does not return */
    FUN_14039adc();
  }
  return (undefined1 *)0x0;
}

