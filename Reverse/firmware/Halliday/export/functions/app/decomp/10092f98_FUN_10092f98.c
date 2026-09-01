/* FUN_10092f98 @ 0x10092f98 */

int * FUN_10092f98(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar1 = FUN_10092f04();
    *(undefined4 *)(param_1 + 0x10) = uVar1;
  }
  piVar2 = (int *)FUN_10094064(DAT_1009300c);
  if (piVar2 == (int *)0x0) {
    uVar3 = FUN_10094174(3,DAT_1009301c,0x59,DAT_10093020,DAT_10093018,DAT_10093014,DAT_10093010);
    FUN_10119dc2(DAT_10093028,DAT_10093024,DAT_1009301c,0x59,uVar3);
    FUN_10119dc2(DAT_1009302c);
    FUN_1011a1f0(DAT_1009301c,0x59,extraout_r2,extraout_r3);
  }
  else {
    FUN_1012a754(piVar2,0x88);
    uVar1 = DAT_10093030;
    *piVar2 = param_1;
    *(byte *)((int)piVar2 + 5) = *(byte *)((int)piVar2 + 5) | 2;
    uVar1 = FUN_10094a1c(uVar1,1,piVar2);
    *(undefined4 *)(param_1 + 0x14) = uVar1;
  }
  return piVar2;
}

