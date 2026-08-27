/* FUN_2c654416 @ 0x2c654416 */

int * FUN_2c654416(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puStack_38;
  int iStack_34;
  undefined1 auStack_30 [20];
  
  *param_1 = (int)(param_1 + 2);
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  puStack_38 = auStack_30;
  FUN_2c654350(&puStack_38,param_3,param_4);
  puVar5 = puStack_38;
  uVar4 = (param_4 - param_3) * 2;
  puVar6 = puStack_38 + iStack_34;
  uVar1 = thunk_FUN_2c64ca5c(uVar4);
  while( true ) {
    uVar2 = func_0x2c665a48(param_2,uVar1,puVar5,uVar4);
    if (uVar4 <= uVar2) {
      uVar4 = uVar2 + 1;
      thunk_FUN_2c669588(uVar1);
      uVar1 = thunk_FUN_2c64ca5c(uVar4);
      uVar2 = func_0x2c665a48(param_2,uVar1,puVar5,uVar4);
    }
    FUN_2c65ee28(param_1,uVar1,uVar2);
    iVar3 = FUN_2c66c4ec(puVar5);
    if (puVar6 == puVar5 + iVar3) break;
    puVar5 = puVar5 + iVar3 + 1;
    FUN_2c65ebe0(param_1,0);
  }
  thunk_FUN_2c669588(uVar1);
  FUN_2c65e94c(&puStack_38);
  return param_1;
}

