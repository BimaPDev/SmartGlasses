/* FUN_1001cad0 @ 0x1001cad0 */

void FUN_1001cad0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  undefined8 uVar5;
  
  uVar5 = CONCAT44(param_2,param_1);
  if (param_1 == 0) {
    if (*DAT_1001cb04 == *DAT_1001cb04) {
      return;
    }
  }
  else if (*DAT_1001cb04 == *DAT_1001cb04) goto LAB_1001caec;
  uVar5 = FUN_1013cdc0();
LAB_1001caec:
  iVar1 = (int)uVar5;
  uVar3 = (DAT_100ea85c - DAT_100ea858) * 0x20 & 0xff00;
  if (iVar1 == 0) {
    uVar3 = uVar3 | 0x12a0000;
    uVar2 = DAT_100ea860;
  }
  else {
    piVar4 = *(int **)(iVar1 + 0x1c);
    if (piVar4 != (int *)0x0) {
      FUN_100a5b78(uVar3 | 0x1360032,DAT_100ea864,DAT_100ea86c,piVar4,
                   *(undefined2 *)(*piVar4 + 0x14),(int)((ulonglong)uVar5 >> 0x20));
      FUN_100f7314(*piVar4);
      FUN_100e833c(piVar4);
      *(undefined4 *)(iVar1 + 0x1c) = 0;
      return;
    }
    uVar3 = uVar3 | 0x1320000;
    uVar2 = DAT_100ea868;
  }
  FUN_100a5b78(uVar3 | 0x11,DAT_100ea864,uVar2);
  return;
}

