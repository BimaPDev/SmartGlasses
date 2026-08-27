/* FUN_140a66dc @ 0x140a66dc */

void FUN_140a66dc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  int local_10;
  int local_c;
  
  local_c = *DAT_140a678c;
  FUN_1409ffb4(&local_10,param_2,param_3,0);
  cVar1 = *(char *)(local_10 + 300);
  if (cVar1 == -1) {
switchD_140a6702_caseD_5:
    FUN_1402a6e8(4,0x389,DAT_140a6798,DAT_140a6794,DAT_140a6790,cVar1);
  }
  else {
    uVar2 = *(undefined4 *)(local_10 + 0x130);
    switch(cVar1) {
    case '\0':
      break;
    case '\x01':
      FUN_140a5904(uVar2,2);
    case '\x03':
      FUN_14038c94(*(undefined1 *)(local_10 + 0x13e),*(undefined1 *)(local_10 + 0x13f),
                   *(undefined1 *)(local_10 + 0x140),*(undefined1 *)(local_10 + 0x141));
      break;
    case '\x02':
      FUN_140a5904(uVar2,3);
      FUN_14036654(DAT_140a679c);
    case '\x04':
      FUN_14038c20(*(undefined1 *)(local_10 + 0x138),*(undefined1 *)(local_10 + 0x139),
                   *(undefined1 *)(local_10 + 0x13a));
      break;
    default:
      goto switchD_140a6702_caseD_5;
    case '\a':
      FUN_140a6640(uVar2,local_10);
      break;
    case '\b':
      FUN_140a65d4(uVar2,local_10);
    }
  }
  FUN_140a01b8();
  if (*DAT_140a678c == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

