/* FUN_140df694 @ 0x140df694 */

uint FUN_140df694(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  uint local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (param_1 + 1 != 0) {
    local_1c = param_2;
    uStack_18 = param_3;
    uStack_14 = param_4;
    FUN_140e5658(&uStack_18,0,8,param_1 + 1,param_1);
    iVar2 = *DAT_140df710;
    if (*(int *)(iVar2 + 0x58) == 0) {
      puVar1 = (undefined4 *)FUN_140db6f0(0x50);
      *(undefined4 **)(iVar2 + 0x58) = puVar1;
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)FUN_140da8c8(DAT_140df718,0x16,0,DAT_140df714);
      }
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      *(undefined1 *)(puVar1 + 7) = 0;
      puVar1[9] = 0;
      puVar1[10] = 0;
      puVar1[0xb] = 0;
      puVar1[0xc] = 0;
      puVar1[0xd] = 0;
      puVar1[0xe] = 0;
      puVar1[0xf] = 0;
      puVar1[0x10] = 0;
      puVar1[0x11] = 0;
      puVar1[0x12] = 0;
      puVar1[0x13] = 0;
    }
    iVar2 = (**(code **)(DAT_140df71c + 0xe0))(iVar2,&local_1c,param_1,&uStack_18);
    if (iVar2 == 1) {
      return local_1c & 0xff;
    }
  }
  return 0xffffffff;
}

