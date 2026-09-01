/* FUN_10039868 @ 0x10039868 */

undefined4 FUN_10039868(char *param_1)

{
  int iVar1;
  char *extraout_r1;
  char *extraout_r1_00;
  int iVar2;
  uint uVar3;
  uint extraout_r3;
  char *pcVar4;
  
  iVar1 = DAT_100398bc;
  iVar2 = *DAT_100398b8;
  pcVar4 = param_1;
  if (((*param_1 != '\0') && (param_1[1] != '\0')) && (uVar3 = (uint)(byte)param_1[2], uVar3 != 0))
  goto LAB_100398a4;
  *(undefined1 *)(DAT_100398bc + 0xb) = 0;
  *(undefined4 *)(iVar1 + 1) = 0;
  while( true ) {
    FUN_100454dc(6,param_1);
    FUN_100396fc();
    if (*DAT_100398b8 == iVar2) break;
    FUN_1013cdc0();
    param_1 = extraout_r1;
    uVar3 = extraout_r3;
LAB_100398a4:
    FUN_1013d3f0(iVar1 + 1,param_1,0xb,uVar3,pcVar4);
    *(undefined1 *)(iVar1 + 0xb) = 1;
    param_1 = extraout_r1_00;
  }
  return 1;
}

