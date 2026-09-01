/* FUN_1000bab0 @ 0x1000bab0 */

int FUN_1000bab0(byte *param_1,int param_2,uint param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 local_24;
  uint local_20;
  int local_1c;
  
  local_1c = *DAT_1000bb70;
  local_24 = param_2;
  local_20 = param_3;
  if (param_1[3] == 0) {
    iVar1 = FUN_1000bd68(param_1,&local_24,param_3,0,param_1);
    if (iVar1 == 0) {
      if (param_4 != (int *)0x0) {
        *param_4 = local_24;
        *(undefined2 *)(param_4 + 1) = (undefined2)local_20;
      }
      iVar1 = 0;
      if ((char)local_24 != '\x05') goto LAB_1000bb16;
      uVar2 = local_20 & 0xff;
      goto LAB_1000bb06;
    }
    FUN_1000bdec(param_1);
    iVar1 = -iVar1;
  }
  else if ((param_2 == 0) || (param_3 == 0)) {
    iVar1 = -1;
  }
  else {
    iVar1 = FUN_1000b9ac();
  }
  while (*DAT_1000bb70 != local_1c) {
    FUN_1013cdc0();
LAB_1000bb16:
    if (((ushort)local_24 & 0xf0ff) == 1) {
      uVar2 = FUN_1000be1c(param_1,local_20 & 0xff,local_24._2_2_);
LAB_1000bb06:
      iVar1 = -uVar2;
    }
    else if (((param_2 != 0) && (param_3 != 0)) && (*param_1 == local_24._1_1_ >> 4)) {
      iVar1 = FUN_1000b8f4(param_1,&local_24,param_2,param_3);
    }
  }
  return iVar1;
}

