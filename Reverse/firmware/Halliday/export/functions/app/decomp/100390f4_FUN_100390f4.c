/* FUN_100390f4 @ 0x100390f4 */

void FUN_100390f4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 local_18;
  int local_14;
  undefined4 uStack_10;
  
  iVar2 = DAT_10039184;
  piVar4 = DAT_10039180;
  local_14 = *DAT_1003917c;
  local_18 = param_1;
  uStack_10 = param_3;
  if (*DAT_10039180 == 0) goto LAB_1003914e;
  if (*(byte *)(*DAT_10039180 + 0x55) < 3) goto LAB_1003914e;
  local_18 = 0;
  (**(code **)(DAT_10039184 + 0x38))(&local_18);
  piVar4 = (int *)(uint)*(byte *)(*piVar4 + 0x54);
  if (piVar4 == (int *)&DAT_00000005) {
    iVar2 = (**(code **)(iVar2 + 0x28))(&local_18);
    if (iVar2 == 0) goto LAB_1003914e;
    uVar3 = 2;
    do {
      FUN_10038a38(uVar3);
LAB_1003914e:
      do {
        if (*DAT_1003917c == local_14) {
          return;
        }
        FUN_1013cdc0();
LAB_1003915c:
      } while (piVar4 != (int *)&Reset);
      uVar3 = 5;
    } while( true );
  }
  iVar2 = (**(code **)(iVar2 + 0xc))(&local_18);
  piVar1 = DAT_10039188;
  if (iVar2 != 0) {
    if (piVar4 != (int *)0x1) goto LAB_1003915c;
    iVar2 = (*(code *)DAT_10039188[1])();
    piVar4 = piVar1;
    if (iVar2 == 0) goto LAB_1003914e;
    (*(code *)*piVar1)(0x4c);
    goto LAB_1003914e;
  }
  iVar2 = FUN_100390ac();
  if (iVar2 != 0) goto LAB_1003914e;
  FUN_10038864();
  FUN_100389a0(2);
  goto LAB_1003914e;
}

