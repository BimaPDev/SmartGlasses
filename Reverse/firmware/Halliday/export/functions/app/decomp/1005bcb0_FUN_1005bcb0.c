/* FUN_1005bcb0 @ 0x1005bcb0 */

undefined4
FUN_1005bcb0(int *param_1,int param_2,int param_3,uint param_4,uint param_5,int param_6,int param_7)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  uint local_28;
  uint local_24;
  int iStack_20;
  
  if (((param_1 != (int *)0x0) && (param_2 != 0)) && (param_3 != 0)) {
    local_24 = 0;
    local_28 = param_4;
    iStack_20 = param_3;
    uVar1 = FUN_1011b560(param_2);
    if (param_4 == (param_4 / uVar1) * uVar1) {
      FUN_1011f35c(param_2,DAT_1005bd78,&local_28);
      if (local_24 == 0) {
        return 0xfffffff2;
      }
      if ((param_5 + param_6 <= local_24) &&
         (uVar1 = FUN_1011b560(param_2), param_5 == (param_5 / uVar1) * uVar1)) {
        *param_1 = param_3;
        param_1[1] = param_4;
        param_1[3] = param_2;
        param_1[4] = 0;
        param_1[2] = 0;
        param_1[5] = param_5;
        if (param_6 == 0) {
          param_6 = local_24 - param_5;
        }
        param_1[6] = param_6;
        param_1[7] = param_7;
        return 0;
      }
      iVar3 = (int)PTR_DAT_1005bd68 - (int)PTR_DAT_1005bd64;
      uVar1 = DAT_1005bd80;
      puVar2 = DAT_1005bd7c;
    }
    else {
      iVar3 = (int)PTR_DAT_1005bd68 - (int)PTR_DAT_1005bd64;
      uVar1 = DAT_1005bd74;
      puVar2 = PTR_s_Buffer_size_is_not_aligned_to_mi_1005bd70;
    }
    FUN_100a5b78(uVar1 | iVar3 * 0x20 & 0xff00U,PTR_s_stream_flash_init_1005bd6c,puVar2);
  }
  return 0xfffffff2;
}

