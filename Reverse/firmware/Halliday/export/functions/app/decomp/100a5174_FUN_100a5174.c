/* FUN_100a5174 @ 0x100a5174 */

undefined4 FUN_100a5174(undefined4 param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_1c [12];
  
  iVar1 = DAT_100a5200;
  if ((param_2 < 0x19) && (param_3 != 0)) {
    if (param_3 == 1) {
      iVar3 = param_2 * 8 + DAT_100a5200;
      if (*(int *)(iVar3 + 4) < 2) {
        *(undefined4 *)(DAT_100a5200 + param_2 * 8) = param_1;
        *(undefined4 *)(iVar3 + 4) = 1;
        iVar1 = thunk_FUN_1009efe8(DAT_100a5204,iVar1,400);
        if (iVar1 < 0) {
          FUN_100a5b78((DAT_100a520c - DAT_100a5208) * 0x20 & 0xff00U | 0x3080012,DAT_100a5214,
                       DAT_100a5210,DAT_100a5204,iVar1);
          return 0xffffffff;
        }
      }
      else {
        FUN_1012da7a(auStack_1c,param_1);
        *(undefined4 *)(iVar1 + param_2 * 8) = param_1;
        FUN_100a4fc4(auStack_1c);
      }
    }
    else {
      *(undefined4 *)(DAT_100a5200 + param_2 * 8) = param_1;
      *(undefined4 *)(iVar1 + param_2 * 8 + 4) = 2;
      FUN_100a474c();
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffea;
  }
  return uVar2;
}

