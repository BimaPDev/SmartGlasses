/* FUN_2c639688 @ 0x2c639688 */

void FUN_2c639688(int param_1,int *param_2,int param_3,undefined2 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_4 = 0;
  iVar2 = *(int *)(param_1 + 0x60);
  param_4[1] = 0;
  param_4[2] = (ushort)((uint)(iVar2 << 0xb) >> 0x15) - 1;
  iVar2 = (*(ushort *)(param_1 + 0x62) >> 5) - 1;
  param_4[3] = (short)iVar2;
  FUN_2c62c3b0(param_2,0x164,param_3,iVar2,param_4);
  *param_2 = param_3;
  FUN_2c62a290(param_3);
  *(ushort *)*param_2 = (ushort)((uint)(*(int *)(param_1 + 0x60) << 0xb) >> 0x15);
  *(ushort *)(*param_2 + 2) = *(ushort *)(param_1 + 0x62) >> 5;
  puVar1 = (undefined4 *)lv_mem_alloc(0x58);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_2c60fb10(param_3,puVar1);
    *(undefined4 **)(*param_2 + 0x3c) = puVar1;
    puVar1[1] = param_4;
    puVar1[2] = param_4;
    *puVar1 = *(undefined4 *)(param_1 + 0x68);
    FUN_2c62a508(*param_2,*(byte *)(param_1 + 0x60) & 0x1f);
    if ((*(byte *)(param_1 + 0x60) & 0x1f) != 5) {
      *(byte *)(param_3 + 0x10) = *(byte *)(param_3 + 0x10) & 0xbf;
    }
  }
  return;
}

