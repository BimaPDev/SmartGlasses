/* FUN_2c13aa78 @ 0x2c13aa78 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c13aa78(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  code *pcVar3;
  int iVar4;
  
  puVar2 = _DAT_2c13aaf0;
  iVar1 = _DAT_2c13aadc;
  iVar4 = *param_1;
  if (iVar4 < 5) {
    FUN_2c13f29c(*_DAT_2c13aaf0,0xffffffff);
    pcVar3 = *(code **)(iVar1 + iVar4 * 0xc + 8);
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(param_1);
    }
    FUN_2c13f2d8(*puVar2);
    if (*(int *)(iVar1 + iVar4 * 0xc + 8) == 0) {
      FUN_2c135988(4,0xbb,_DAT_2c13aaec,_DAT_2c13aae8,_DAT_2c13aae4,_DAT_2c13aae0);
    }
  }
  return;
}

