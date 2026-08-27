/* FUN_140b1f3c @ 0x140b1f3c */

void FUN_140b1f3c(undefined4 param_1,int param_2)

{
  undefined1 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined2 *local_20;
  int local_1c;
  
  local_1c = *DAT_140b2004;
  local_20 = (undefined2 *)0x0;
  puVar1 = (undefined1 *)FUN_14053dc8(2,param_2,0);
  if ((puVar1 == (undefined1 *)0x0) || (puVar1[1] == -1)) {
    FUN_1402a6e8(4,0x7c,DAT_140b2014,DAT_140b2010,DAT_140b2018,DAT_140b2008);
    goto LAB_140b1fae;
  }
  FUN_14054210(&local_20,2);
  puVar2 = local_20;
  if (local_20 != (undefined2 *)0x0) {
    puVar2 = (undefined2 *)((int)local_20 + (ushort)local_20[3] + 0x30);
  }
  *puVar2 = 1;
  if (param_2 == 0x9404) {
    uVar3 = *(undefined2 *)(puVar1 + 0x6a);
LAB_140b1fda:
    FUN_14067ccc(param_1,*puVar1,param_2,0,uVar3,0,local_20);
  }
  else {
    if (param_2 == 0x9406) {
      uVar3 = *(undefined2 *)(puVar1 + 0x7e);
      goto LAB_140b1fda;
    }
    if (param_2 == 0x9402) {
      uVar3 = *(undefined2 *)(puVar1 + 0x68);
      goto LAB_140b1fda;
    }
    uVar3 = 0;
  }
  FUN_1402a6e8(4,0xa1,DAT_140b2014,DAT_140b2010,DAT_140b200c,DAT_140b2008,uVar3);
  FUN_140735a8(local_20);
LAB_140b1fae:
  if (*DAT_140b2004 == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

