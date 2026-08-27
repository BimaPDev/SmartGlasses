/* FUN_2c13f738 @ 0x2c13f738 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 * FUN_2c13f738(int param_1,uint param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined2 *puVar3;
  
  if ((param_1 == 0) || (1 < param_2)) {
    func_0x2c13ee70(0,0xfffffffc);
    return (undefined2 *)0x0;
  }
  uVar1 = 0;
  if (param_4 != (undefined4 *)0x0) {
    puVar3 = (undefined2 *)param_4[2];
    uVar1 = *param_4;
    if (puVar3 != (undefined2 *)0x0) {
      if ((((uint)puVar3 & 3) != 0) || (uVar2 = 0, (uint)param_4[3] < 0x20)) goto LAB_2c13f7c4;
      goto LAB_2c13f75e;
    }
    if (param_4[3] != 0) {
LAB_2c13f7c4:
      func_0x2c13ee70(0,0xfffffff7);
      return (undefined2 *)0x0;
    }
  }
  if (*(int *)(_DAT_2c13f7ec + 0x8c) == 0) {
    puVar3 = (undefined2 *)FUN_2c13f550(*(undefined4 *)(_DAT_2c13f7ec + 0x80),0x20,1);
  }
  else {
    puVar3 = (undefined2 *)FUN_2c141bd0();
  }
  if (puVar3 == (undefined2 *)0x0) {
    func_0x2c13ee70(0,0xfffffffb);
    return (undefined2 *)0x0;
  }
  uVar2 = 1;
LAB_2c13f75e:
  *(undefined1 *)(puVar3 + 1) = uVar2;
  *(undefined4 *)(puVar3 + 4) = 0;
  *(undefined4 *)(puVar3 + 6) = 0;
  *(undefined4 *)(puVar3 + 8) = 0;
  *(undefined4 *)(puVar3 + 10) = 0;
  *(char *)((int)puVar3 + 3) = (char)param_2;
  *(undefined4 *)(puVar3 + 2) = uVar1;
  *(int *)(puVar3 + 0xc) = param_1;
  *(undefined4 *)(puVar3 + 0xe) = param_3;
  *puVar3 = 0x1f2;
  func_0x2c13ee7c(puVar3);
  return puVar3;
}

