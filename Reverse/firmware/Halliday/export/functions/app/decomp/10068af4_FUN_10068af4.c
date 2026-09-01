/* FUN_10068af4 @ 0x10068af4 */

void FUN_10068af4(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 local_10;
  undefined1 local_c;
  undefined3 uStack_b;
  
  puVar1 = DAT_10068b48;
  local_10 = *DAT_10068b44;
  _local_c = CONCAT31((int3)((uint)param_2 >> 8),*(undefined1 *)(DAT_10068b44 + 1));
  if (param_1 != (undefined4 *)0x0) {
    *DAT_10068b48 = *param_1;
    puVar1[1] = param_1[1];
    puVar1[2] = param_1[2];
    puVar1[3] = param_1[3];
    puVar1[4] = param_1[4];
    puVar1[5] = param_1[5];
    uVar2 = param_1[7];
    puVar1[6] = param_1[6];
    puVar1[7] = uVar2;
    puVar1[8] = *DAT_10068b4c;
    FUN_10069168(&local_10,5);
    FUN_10069168(puVar1,0x24);
  }
  return;
}

