/* FUN_10059c48 @ 0x10059c48 */

undefined4 FUN_10059c48(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  int extraout_r1;
  int *extraout_r1_00;
  code *pcVar3;
  
  piVar2 = *(int **)(param_1 + 4);
  piVar1 = (int *)*piVar2;
  *piVar1 = param_2;
  piVar1[1] = param_3;
  piVar1[2] = param_4;
  FUN_1011b0f4(piVar2[2]);
  FUN_1011b0f4(*(undefined4 *)(extraout_r1 + 0xc));
  *(undefined4 *)(*extraout_r1_00 + 0xc) = 0;
  if ((*(int *)(param_2 + 8) != 0) &&
     (pcVar3 = *(code **)(*(int *)(param_2 + 8) + 0x48), pcVar3 != (code *)0x0)) {
    (*pcVar3)(param_2,DAT_10059c88,extraout_r1_00);
  }
  pcVar3 = *(code **)(*(int *)(param_2 + 8) + 0x28);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(param_2);
  }
  return 0;
}

