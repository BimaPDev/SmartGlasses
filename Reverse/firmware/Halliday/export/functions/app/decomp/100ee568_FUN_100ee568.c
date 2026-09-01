/* FUN_100ee568 @ 0x100ee568 */

undefined4 FUN_100ee568(int param_1)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  short sVar5;
  short sVar6;
  undefined2 uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  byte local_19;
  
  sVar5 = FUN_100f405c();
  sVar6 = FUN_100f4070();
  local_19 = 0;
  iVar8 = FUN_100f1ca4(*(undefined1 *)(param_1 + 0x21),&local_19);
  *(short *)(param_1 + 0x2a) = (short)iVar8;
  if (((iVar8 == 0) || (uVar10 = FUN_100f160c(), uVar10 == 0)) ||
     (iVar8 = FUN_100f151c(), iVar8 == 0)) {
LAB_100ee592:
    uVar9 = 0xffffffff;
  }
  else {
    cVar4 = FUN_100f15a0(uVar10);
    if ((*(ushort *)(param_1 + 0x2a) != uVar10) && (cVar4 != '\0')) goto LAB_100ee592;
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x30);
    *(byte *)(param_1 + 0x4e) = *(byte *)(param_1 + 0x4e) & 0xfd | (local_19 & 1) << 1;
    *(undefined2 *)(param_1 + 0x48) = 0;
    iVar8 = FUN_100f15c0((uint)*(ushort *)(param_1 + 0x2a));
    if (iVar8 == 0) {
      switch((int)*(char *)(param_1 + 0x21)) {
      case 1:
        sVar5 = *(short *)(param_1 + 0x32);
        break;
      case 2:
        sVar5 = ~*(ushort *)(param_1 + 0x32) + sVar6;
        break;
      case 3:
        sVar5 = ~*(ushort *)(param_1 + 0x30) + sVar5;
        break;
      case 4:
        sVar5 = *(short *)(param_1 + 0x30);
        break;
      default:
        goto switchD_100ee63c_default;
      }
      if (399 < sVar5) goto LAB_100ee592;
switchD_100ee63c_default:
      *(undefined2 *)(param_1 + 0x28) = 0;
      *(undefined2 *)(param_1 + 0x24) = 0;
    }
    else {
      uVar1 = PTR_DAT_100ee670[*(char *)(param_1 + 0x21)];
      *(short *)(param_1 + 0x28) = (short)uVar10;
      uVar7 = FUN_100f1ca4(uVar1,0);
      *(undefined2 *)(param_1 + 0x24) = uVar7;
    }
    puVar3 = PTR_DAT_100ee678;
    puVar2 = PTR_DAT_100ee674;
    *(undefined2 *)(param_1 + 0x26) = *(undefined2 *)(param_1 + 0x2a);
    *(undefined2 *)(param_1 + 0x2c) = *(undefined2 *)(param_1 + 0x28);
    FUN_100a5b78(((int)puVar3 - (int)puVar2) * 0x20 & 0xff00U | 0x970036,
                 PTR_s_gesture_scroll_begin_100ee680,PTR_s_gesture_begin__d__start___d__d___100ee67c
                 ,(int)*(char *)(param_1 + 0x21),(int)*(short *)(param_1 + 0x30),
                 (int)*(short *)(param_1 + 0x32),*(undefined2 *)(param_1 + 0x2a),
                 *(undefined2 *)(param_1 + 0x28),*(undefined2 *)(param_1 + 0x24));
    uVar9 = 0;
  }
  return uVar9;
}

