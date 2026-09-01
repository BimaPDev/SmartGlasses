/* FUN_1011f6a0 @ 0x1011f6a0 */

undefined4 FUN_1011f6a0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  
  iVar2 = FUN_100728f4();
  if (iVar2 == 0) {
    iVar2 = FUN_100c5d4c(0xfc8a,8);
    if (iVar2 != 0) {
      puVar3 = (undefined4 *)FUN_100c1fe4(iVar2 + 8);
      *puVar3 = param_1;
      puVar3[1] = param_2;
      uVar1 = FUN_100c5e48(0xfc8a,iVar2,0);
      return uVar1;
    }
    return 0xffffff97;
  }
  puVar4 = (undefined1 *)*DAT_10072598;
  if (puVar4 != (undefined1 *)0x0) {
    *puVar4 = 0x8a;
    puVar4[1] = 0xfc;
    puVar4[2] = 8;
    puVar4[3] = (char)param_1;
    puVar4[4] = (char)((uint)param_1 >> 8);
    puVar4[7] = (char)param_2;
    puVar4[5] = (char)((uint)param_1 >> 0x10);
    puVar4[9] = (char)((uint)param_2 >> 0x10);
    puVar4[6] = (char)((uint)param_1 >> 0x18);
    puVar4[8] = (char)((uint)param_2 >> 8);
    puVar4[10] = (char)((uint)param_2 >> 0x18);
    uVar1 = FUN_1007172c(1,puVar4,0xb);
    return uVar1;
  }
  return 0xfffffff4;
}

