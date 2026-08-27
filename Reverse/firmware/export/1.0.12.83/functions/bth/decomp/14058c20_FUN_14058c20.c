/* FUN_14058c20 @ 0x14058c20 */

void FUN_14058c20(undefined4 param_1,int param_2,undefined4 *param_3)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_2 == 0) {
    puVar2 = (undefined2 *)FUN_1406db30(0x2021,4);
    if (puVar2 != (undefined2 *)0x0) {
      uVar1 = FUN_1405c2b0(param_1);
      *(undefined1 *)(puVar2 + 1) = 0x3b;
      *puVar2 = uVar1;
      FUN_1406da30(puVar2,0,DAT_14058c90);
      return;
    }
  }
  else {
    puVar2 = (undefined2 *)FUN_1406db30(0x2020,0xe);
    if (puVar2 != (undefined2 *)0x0) {
      uVar1 = FUN_1405c2b0(param_1);
      *puVar2 = uVar1;
      uVar4 = param_3[1];
      uVar3 = param_3[2];
      *(undefined4 *)(puVar2 + 1) = *param_3;
      *(undefined4 *)(puVar2 + 3) = uVar4;
      *(undefined4 *)(puVar2 + 5) = uVar3;
      FUN_1406da30(puVar2,0,DAT_14058c90);
      return;
    }
  }
  return;
}

