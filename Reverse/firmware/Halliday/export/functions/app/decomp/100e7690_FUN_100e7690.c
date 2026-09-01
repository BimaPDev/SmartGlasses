/* FUN_100e7690 @ 0x100e7690 */

bool FUN_100e7690(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined1 auStack_24 [24];
  
  switch(*(undefined1 *)(param_1 + 3)) {
  case 0x1a:
    uVar6 = *(undefined4 *)(param_1 + 8);
    iVar4 = FUN_1013662e(uVar6);
    if (iVar4 == 0) {
      return false;
    }
    puVar3 = (undefined1 *)FUN_10136428(uVar6);
    FUN_10119ddc(auStack_24,0x12,DAT_100e7814,puVar3[5],puVar3[4],puVar3[3],puVar3[2],puVar3[1],
                 *puVar3);
    FUN_100a5b78((DAT_100e781c - DAT_100e7818) * 0x20 & 0xff00U | 0x4f0032,DAT_100e7820,uVar6,
                 auStack_24);
    uVar2 = FUN_1013204c(uVar6);
    FUN_100d6334(uVar6,uVar2);
    FUN_100e7b08(uVar6);
    uVar6 = 0;
    pcVar5 = (code *)*DAT_100e7824;
    break;
  case 0x1b:
    uVar6 = *(undefined4 *)(param_1 + 8);
    iVar4 = FUN_1013662e(uVar6);
    if (iVar4 != 0) {
      puVar3 = (undefined1 *)FUN_10136428(uVar6);
      puVar1 = DAT_100e7824;
      FUN_10119ddc(auStack_24,0x12,DAT_100e7814,puVar3[5],puVar3[4],puVar3[3],puVar3[2],puVar3[1],
                   *puVar3);
      FUN_100a5b78((DAT_100e781c - DAT_100e7818) * 0x20 & 0xff00U | 0x600032,DAT_100e7828,uVar6,
                   auStack_24);
      FUN_100e7ccc(uVar6);
      (*(code *)*puVar1)(3,0);
      (*(code *)*puVar1)(1,0);
      FUN_100d4440(0xc9,0x1b,uVar6);
      return true;
    }
    return false;
  case 0x1c:
    iVar4 = FUN_1013662e(*(undefined4 *)(param_1 + 8));
    if (iVar4 == 0) {
      return false;
    }
    uVar6 = 2;
    pcVar5 = (code *)*DAT_100e7824;
    break;
  case 0x1d:
    uVar6 = *(undefined4 *)(param_1 + 8);
    iVar4 = FUN_1013662e(uVar6);
    if (iVar4 == 0) {
      return false;
    }
    FUN_100e7cf8(uVar6);
    uVar6 = 4;
    pcVar5 = (code *)*DAT_100e7824;
    break;
  case 0x1e:
    iVar4 = FUN_1013662e(*(undefined4 *)(param_1 + 8));
    if (iVar4 == 0) {
      return false;
    }
    uVar6 = 3;
    pcVar5 = (code *)*DAT_100e7824;
    break;
  case 0x1f:
    uVar6 = *(undefined4 *)(param_1 + 8);
    iVar4 = FUN_1013662e(uVar6);
    if (iVar4 == 0) {
      return false;
    }
    FUN_100e7d18(uVar6);
    uVar6 = 5;
    pcVar5 = (code *)*DAT_100e7824;
    break;
  case 0x20:
    iVar4 = FUN_1013662e(*(undefined4 *)(param_1 + 8));
    return iVar4 != 0;
  default:
    return false;
  }
  (*pcVar5)(uVar6,0);
  return true;
}

