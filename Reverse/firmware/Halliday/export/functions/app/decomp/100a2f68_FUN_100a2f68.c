/* FUN_100a2f68 @ 0x100a2f68 */

undefined4 FUN_100a2f68(uint param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_c;
  
  local_c = param_2;
  if (((int *)*DAT_100a2fcc == (int *)0x0) || (iVar1 = *(int *)*DAT_100a2fcc, iVar1 == 0)) {
    FUN_100a5b78((DAT_100a2fd0 - DAT_100a2fd4) * 0x20 & 0xff00U | 0x750011,DAT_100a2fdc,DAT_100a2fd8
                );
  }
  else {
    iVar1 = (*(code *)**(undefined4 **)(iVar1 + 8))
                      (iVar1,param_1 & 0xff,&local_c,(code *)**(undefined4 **)(iVar1 + 8),param_1);
    if (-1 < iVar1) {
      return local_c;
    }
    FUN_100a5b78((DAT_100a2fd0 - DAT_100a2fd4) * 0x20 & 0xff00U | 0x7b0011,DAT_100a2fdc,DAT_100a2fe0
                );
  }
  return 0xffffffed;
}

