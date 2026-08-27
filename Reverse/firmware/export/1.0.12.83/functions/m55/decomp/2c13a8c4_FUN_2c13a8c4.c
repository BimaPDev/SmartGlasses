/* FUN_2c13a8c4 @ 0x2c13a8c4 */

undefined4 FUN_2c13a8c4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  
  puVar1 = DAT_2c13a8fc;
  FUN_2c13f29c(*DAT_2c13a8fc,0xffffffff,param_3,param_4,param_4);
  iVar2 = DAT_2c13a900;
  iVar3 = DAT_2c13a900 + param_1 * 0xc;
  *(undefined4 *)(iVar3 + 8) = 0;
  if ((*(char *)(iVar3 + 4) != '\0') &&
     (pcVar4 = *(code **)(*(int *)(iVar2 + param_1 * 0xc) + 4), pcVar4 != (code *)0x0)) {
    (*pcVar4)();
  }
  FUN_2c13f2d8(*puVar1);
  return 1;
}

