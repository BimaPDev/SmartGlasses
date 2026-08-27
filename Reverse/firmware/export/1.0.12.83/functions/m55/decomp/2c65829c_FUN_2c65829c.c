/* FUN_2c65829c @ 0x2c65829c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_2c65829c(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puStack_38;
  int iStack_34;
  undefined1 auStack_30 [16];
  
  *param_1 = (int)(param_1 + 2);
  param_1[1] = 0;
  param_1[2] = 0;
  puStack_38 = auStack_30;
  FUN_2c6581d0(&puStack_38,param_3,param_4);
  puVar5 = puStack_38;
  uVar4 = param_4 - param_3 >> 1;
  puVar6 = puStack_38 + iStack_34 * 4;
  if (_DAT_2c658354 < (uint)(param_4 - param_3)) {
    iVar1 = -1;
  }
  else {
    iVar1 = uVar4 << 2;
  }
  uVar2 = thunk_FUN_2c64ca5c(iVar1);
  while( true ) {
    uVar3 = func_0x2c665a68(param_2,uVar2,puVar5,uVar4);
    if (uVar4 <= uVar3) {
      uVar4 = uVar3 + 1;
      thunk_FUN_2c669588(uVar2);
      if (uVar4 < 0x1fffffff) {
        iVar1 = uVar4 * 4;
      }
      else {
        iVar1 = -1;
      }
      uVar2 = thunk_FUN_2c64ca5c(iVar1);
      uVar3 = func_0x2c665a68(param_2,uVar2,puVar5,uVar4);
    }
    FUN_2c664d0c(param_1,uVar2,uVar3);
    iVar1 = FUN_2c66ea0c(puVar5);
    if (puVar6 == puVar5 + iVar1 * 4) break;
    puVar5 = puVar5 + iVar1 * 4 + 4;
    FUN_2c664ac6(param_1,0);
  }
  thunk_FUN_2c669588(uVar2);
  FUN_2c6648a4(&puStack_38);
  return param_1;
}

