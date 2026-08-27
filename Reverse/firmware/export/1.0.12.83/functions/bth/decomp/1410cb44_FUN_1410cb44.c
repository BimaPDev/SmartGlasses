/* FUN_1410cb44 @ 0x1410cb44 */

void FUN_1410cb44(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined1 extraout_r2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  int extraout_r3;
  
  iVar4 = *(int *)(DAT_1410cbac + param_1 * 4);
  uVar5 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar5 = isIRQinterruptsEnabled();
  }
  if ((uVar5 & 1) == 0) {
    disableIRQinterrupts();
    if ((iVar4 != 0) && (param_2 == 2)) goto LAB_1410cb94;
  }
  else {
    if ((iVar4 == 0) || (param_2 != 2)) goto LAB_1410cb60;
LAB_1410cb94:
    iVar2 = FUN_1410f3ec(param_1);
    iVar4 = extraout_r3;
    uVar3 = extraout_r2;
    if (iVar2 != 1) {
      uVar3 = 1;
      iVar4 = DAT_1410cbb8;
    }
    if (iVar2 != 1) {
      *(undefined1 *)(iVar4 + param_1) = uVar3;
    }
    if ((uVar5 & 1) != 0) goto LAB_1410cb60;
  }
  enableIRQinterrupts();
LAB_1410cb60:
  if ((param_2 << 8 & 0xfc00U) != 0) {
    FUN_1410fb7c(DAT_1410cbb0,0x397);
  }
  *(ushort *)(param_1 * 0x68 + DAT_1410cbb4) =
       (ushort)(param_2 << 8) | *(ushort *)(param_1 * 0x68 + DAT_1410cbb4) & 0xfcff;
  return;
}

