/* FUN_1012fc2c @ 0x1012fc2c */

undefined4 FUN_1012fc2c(int param_1,int *param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  
  FUN_1012fa06(*(undefined4 *)(param_1 + 8));
  if (*param_2 == 5) {
    uVar4 = 0;
    puVar3 = (undefined1 *)param_2[1];
    uVar1 = *puVar3;
    *(undefined1 *)(param_1 + 0x10c) = uVar1;
    *(undefined2 *)(param_1 + 0x10e) = *(undefined2 *)(puVar3 + 2);
    uVar2 = *(undefined2 *)(puVar3 + 6);
    *(undefined2 *)(param_1 + 0x110) = *(undefined2 *)(puVar3 + 4);
    *(undefined2 *)(param_1 + 0x112) = uVar2;
    *(undefined1 *)(param_1 + 0x100) = uVar1;
  }
  else if (*param_2 == 3) {
    uVar4 = FUN_1012fe28(param_1,param_2[1]);
  }
  else {
    uVar4 = 0xffffffea;
  }
  if ((9 < *param_2) && (*(int *)(param_1 + 0x10) != 0)) {
    uVar4 = FUN_101310ae(*(int *)(param_1 + 0x10),*param_2,param_2[1],param_2[2]);
  }
  thunk_FUN_10113e2c(*(int *)(param_1 + 8) + 0x38);
  return uVar4;
}

