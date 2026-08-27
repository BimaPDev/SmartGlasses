/* FUN_2c643bf4 @ 0x2c643bf4 */

undefined1 * FUN_2c643bf4(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar2 = 0;
    if (*(int *)(DAT_2c643c84 + 0x94) != 0) goto LAB_2c643c3c;
LAB_2c643c56:
    uVar5 = uVar2;
    puVar3 = (undefined1 *)FUN_2c6443f4(*(undefined4 *)(DAT_2c643c84 + 0x80),0x1c,1);
  }
  else {
    puVar3 = (undefined1 *)param_1[2];
    uVar1 = *param_1;
    uVar5 = (undefined1)param_1[1];
    if (puVar3 != (undefined1 *)0x0) {
      if ((((uint)puVar3 & 3) != 0) || (uVar2 = 0, (uint)param_1[3] < 0x1c)) {
LAB_2c643c66:
        FUN_2c643b08(0,0xfffffff7);
        return (undefined1 *)0x0;
      }
      goto LAB_2c643c0e;
    }
    if (param_1[3] != 0) goto LAB_2c643c66;
    uVar4 = uVar1;
    uVar2 = uVar5;
    if (*(int *)(DAT_2c643c84 + 0x94) == 0) goto LAB_2c643c56;
LAB_2c643c3c:
    puVar3 = (undefined1 *)FUN_2c6473bc();
    uVar1 = uVar4;
  }
  if (puVar3 == (undefined1 *)0x0) {
    FUN_2c643b08(0,0xfffffffb);
    return (undefined1 *)0x0;
  }
  uVar2 = 1;
LAB_2c643c0e:
  puVar3[2] = uVar2;
  puVar3[3] = uVar5;
  *puVar3 = 0xf5;
  *(undefined4 *)(puVar3 + 0x14) = 0;
  puVar3[0x18] = 0;
  *(undefined4 *)(puVar3 + 4) = uVar1;
  *(undefined4 *)(puVar3 + 8) = 0;
  *(undefined4 *)(puVar3 + 0xc) = 0;
  *(undefined4 *)(puVar3 + 0x10) = 0;
  FUN_2c643b10(puVar3);
  return puVar3;
}

