/* FUN_2c47eb80 @ 0x2c47eb80 */

void FUN_2c47eb80(int param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  *(uint *)(param_1 + 8) = param_3 + uVar1;
  *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + (uint)CARRY4(param_3,uVar1);
  uVar2 = uVar1 & 0x3f;
  if (3 < param_3) {
    if (((uVar1 | (uint)param_2) & 3) != 0) goto LAB_2c47ebaa;
    puVar4 = (undefined4 *)((param_3 - 4 & 0xfffffffc) + 4 + (int)param_2);
    uVar1 = uVar2 >> 2;
    puVar3 = param_2;
    do {
      param_2 = puVar3 + 1;
      uVar2 = uVar1 + 1;
      *(undefined4 *)(param_1 + (uVar1 + 4) * 4) = *puVar3;
      if (uVar1 == 0xf) {
        FUN_2c47ea18(param_1);
        uVar2 = 0;
      }
      uVar1 = uVar2;
      puVar3 = param_2;
    } while (param_2 != puVar4);
    param_3 = param_3 & 3;
    uVar2 = uVar2 << 2;
  }
  if (param_3 == 0) {
    return;
  }
LAB_2c47ebaa:
  puVar3 = param_2;
  do {
    while( true ) {
      puVar4 = (undefined4 *)((int)puVar3 + 1);
      *(undefined1 *)(param_1 + uVar2 + 0x10) = *(undefined1 *)puVar3;
      puVar3 = puVar4;
      if (uVar2 == 0x3f) break;
      uVar2 = uVar2 + 1;
      if ((undefined1 *)((int)param_2 + (1 - (int)puVar4) + (param_3 - 1)) == (undefined1 *)0x0) {
        return;
      }
    }
    FUN_2c47ea18(param_1);
    uVar2 = 0;
  } while ((undefined1 *)((int)param_2 + (1 - (int)puVar4) + (param_3 - 1)) != (undefined1 *)0x0);
  return;
}

