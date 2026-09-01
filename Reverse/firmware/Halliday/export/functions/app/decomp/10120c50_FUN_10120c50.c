/* FUN_10120c50 @ 0x10120c50 */

undefined4 FUN_10120c50(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined1 local_34;
  undefined2 local_33;
  short local_31;
  undefined4 local_2f;
  undefined4 local_2b;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  undefined1 local_24;
  
  if ((*(char *)(*param_1 + 7) == '\0') &&
     (param_2 < (uint)*(ushort *)(*(int *)param_1[3] + 0xe) << 1)) {
    local_34 = 0;
    iVar1 = FUN_10120c34(param_1,param_2 * *(byte *)(*(int *)param_1[3] + 0xb));
    if (iVar1 == -1) {
      uVar2 = 0;
      if (*(char *)(*param_1 + 0x10) != '\0') {
        pcVar3 = *(code **)(*param_1 + 0xc);
        if (pcVar3 == (code *)0x0) {
          uVar2 = 0;
        }
        else {
          (*pcVar3)(DAT_1007ead8,DAT_1007ead4,0xf4);
          uVar2 = 0;
        }
      }
    }
    else {
      if (iVar1 < 1) {
        iVar1 = 1;
      }
      local_31 = (short)iVar1 + -1;
      local_27 = 0;
      local_26 = 0;
      local_25 = 0;
      local_24 = 0;
      local_33 = (undefined2)param_2;
      local_2f = param_3;
      local_2b = param_4;
      FUN_1007e320(param_1,&local_34);
      uVar2 = 1;
    }
    return uVar2;
  }
  uVar2 = FUN_1007fc5c(param_1,param_2,param_3,param_4);
  return uVar2;
}

