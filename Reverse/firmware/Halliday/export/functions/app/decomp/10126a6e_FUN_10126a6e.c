/* FUN_10126a6e @ 0x10126a6e */

void FUN_10126a6e(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)*param_1;
  uVar4 = puVar5[2] & 0xff0000;
  uVar2 = FUN_1012691c(*puVar5,uVar4,*(undefined2 *)(puVar5 + 1),param_4,param_1,uVar4,param_3);
  uVar1 = *(undefined2 *)(puVar5 + 1);
  puVar5[3] = uVar2;
  *(undefined2 *)(puVar5 + 1) = 0;
  FUN_1008a5b8(*puVar5,uVar4,uVar1,puVar5);
  *(undefined2 *)(puVar5 + 1) = uVar1;
  puVar3 = (undefined4 *)FUN_1008a678(*puVar5,puVar5[2]);
  FUN_100949b4(*puVar3,*(undefined2 *)(puVar5 + 1),puVar5[3]);
  return;
}

