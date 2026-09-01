/* FUN_101004ec @ 0x101004ec */

undefined4 FUN_101004ec(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  
  puVar4 = (undefined1 *)(param_1 + 0x14);
  if (*(undefined1 **)(param_2 + 8) < puVar4) {
    FUN_100f9004(param_2,8,param_3,*(undefined1 **)(param_2 + 8),param_4);
  }
  uVar1 = *(uint *)(param_1 + 4);
  uVar3 = *(uint *)(param_1 + 0x10);
  uVar2 = uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18;
  uVar1 = uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18;
  if ((((uint)(*(int *)(param_2 + 8) - param_1) < uVar2) || (uVar2 < 0x14)) ||
     (uVar2 - 0x14 >> 1 < uVar1)) {
    FUN_100f9004(param_2,8);
  }
  if (*(char *)(param_2 + 0xc) != '\0') {
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      if (*(uint *)(param_2 + 0x14) <= (uint)CONCAT11(*puVar4,puVar4[1])) {
        FUN_100f9004(param_2,0x10,*(uint *)(param_2 + 0x14),(uint)CONCAT11(*puVar4,puVar4[1]),
                     param_4);
      }
      puVar4 = puVar4 + 2;
    }
  }
  return 0;
}

