/* FUN_1007ddfc @ 0x1007ddfc */

void FUN_1007ddfc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  uint *puVar2;
  undefined4 *extraout_r2;
  int *piVar3;
  uint uVar4;
  
  cVar1 = FUN_1007ddd0(param_1,param_2,param_1,param_4,param_4);
  piVar3 = (int *)*extraout_r2;
  puVar2 = (uint *)*piVar3;
  uVar4 = (uint)*(byte *)((int)piVar3 + 6) << 0x1c;
  if (cVar1 == '\0') {
    *puVar2 = *puVar2 & 0x4fffffff | uVar4 | 0x80000180;
    *(uint *)(*piVar3 + 0x24) =
         *(uint *)(*piVar3 + 0x24) & 0xffffffc0 | (uint)*(byte *)((int)piVar3 + 5);
  }
  else if (cVar1 == '\x01') {
    *puVar2 = *puVar2 & 0x4fffffff | uVar4 | 0x80008080;
    *(uint *)(*piVar3 + 0x3c) =
         *(uint *)(*piVar3 + 0x3c) & 0xe0ffffff | (uint)*(byte *)((int)piVar3 + 5) << 0x18;
  }
  else {
    *puVar2 = *puVar2 & 0x4fffffff | uVar4 | (uint)*(byte *)((int)piVar3 + 5) << 0xf | DAT_1007de74;
  }
  return;
}

