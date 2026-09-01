/* FUN_1005b8b8 @ 0x1005b8b8 */

undefined4 *
FUN_1005b8b8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_1011ea10();
  piVar1 = DAT_1005b90c;
  FUN_10113cfc(DAT_1005b910,(int)((ulonglong)uVar4 >> 0x20),0xffffffff,0xffffffff,param_4);
  piVar3 = (int *)*piVar1;
  if (piVar3 != piVar1) {
    for (; piVar3 != (undefined4 *)0x0; piVar3 = (int *)*piVar3) {
      iVar2 = FUN_1011ea10(piVar3[2]);
      if ((iVar2 == (int)uVar4) && (iVar2 = FUN_1011ea20(param_1,piVar3[2],(int)uVar4), iVar2 == 0))
      goto LAB_1005b8da;
      if (piVar3 == (undefined4 *)piVar1[1]) break;
    }
  }
  piVar3 = (undefined4 *)0x0;
LAB_1005b8da:
  FUN_10113e2c(DAT_1005b910);
  return piVar3;
}

