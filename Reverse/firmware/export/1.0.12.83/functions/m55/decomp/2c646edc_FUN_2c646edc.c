/* FUN_2c646edc @ 0x2c646edc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_2c646edc(uint param_1,uint param_2,undefined4 *param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  
  iVar1 = _LAB_2c646f98;
  if ((param_4 < param_1 - 1) || (param_1 < param_2)) {
    FUN_2c643b3c(0,0xfffffffc);
    return (undefined1 *)0x0;
  }
  uVar2 = 0;
  if (param_3 != (undefined4 *)0x0) {
    puVar4 = (undefined1 *)param_3[2];
    uVar2 = *param_3;
    if (puVar4 != (undefined1 *)0x0) {
      if ((((uint)puVar4 & 3) != 0) || ((uint)param_3[3] < 0x10)) goto LAB_2c646f6c;
      uVar3 = 0;
      goto LAB_2c646f08;
    }
    if (param_3[3] != 0) {
LAB_2c646f6c:
      FUN_2c643b3c(0,0xfffffff7);
      return (undefined1 *)0x0;
    }
  }
  if (*(int *)(_LAB_2c646f98 + 0x98) == 0) {
    puVar4 = (undefined1 *)FUN_2c6443f4(*(undefined4 *)(_LAB_2c646f98 + 0x80),0x10,1);
  }
  else {
    puVar4 = (undefined1 *)FUN_2c6473bc();
  }
  if (puVar4 == (undefined1 *)0x0) {
    FUN_2c643b3c(0,0xfffffffb);
    return (undefined1 *)0x0;
  }
  uVar3 = 1;
LAB_2c646f08:
  *(undefined4 *)(puVar4 + 4) = uVar2;
  puVar4[2] = uVar3;
  *(undefined4 *)(puVar4 + 8) = 0;
  uVar2 = _LAB_2c646f94;
  *(short *)(puVar4 + 0xc) = (short)param_2;
  *(short *)(puVar4 + 0xe) = (short)param_1;
  *puVar4 = 0xf6;
  *(undefined4 *)(iVar1 + 0x68) = uVar2;
  func_0x2c643b44(puVar4,*(undefined4 *)(puVar4 + 4));
  return puVar4;
}

