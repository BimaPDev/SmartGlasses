/* FUN_1011ff74 @ 0x1011ff74 */

void FUN_1011ff74(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int *piVar2;
  undefined4 *extraout_r2;
  uint uVar3;
  uint *puVar4;
  
  cVar1 = FUN_1007ddd0(param_1,param_2,param_1,param_4,param_4);
  piVar2 = (int *)*extraout_r2;
  puVar4 = (uint *)*piVar2;
  uVar3 = (uint)*(byte *)((int)piVar2 + 6) << 0x1c;
  if (cVar1 == '\0') {
    *puVar4 = uVar3 | *puVar4 & 0x4fffffff | 0x100;
    *(uint *)(*piVar2 + 0x24) =
         *(uint *)(*piVar2 + 0x24) & 0xffffffc0 | (uint)*(byte *)((int)piVar2 + 5);
  }
  else if (cVar1 == '\x01') {
    *puVar4 = uVar3 | *puVar4 & 0x4fffffff | 0x8000;
    *(uint *)(*piVar2 + 0x3c) =
         *(uint *)(*piVar2 + 0x3c) & 0xe0ffffff | (uint)*(byte *)((int)piVar2 + 5) << 0x18;
  }
  else {
    *puVar4 = uVar3 | (uint)*(byte *)((int)piVar2 + 5) << 0xf | *puVar4 & 0x4fffffff;
  }
  return;
}

