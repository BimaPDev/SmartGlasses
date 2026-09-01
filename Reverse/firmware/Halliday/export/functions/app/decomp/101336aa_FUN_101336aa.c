/* FUN_101336aa @ 0x101336aa */

/* WARNING: Removing unreachable block (ram,0x101336fc) */

int FUN_101336aa(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0xd) == '\a') {
    if ((*(byte *)(param_1 + 9) < param_2) && (*(byte *)(param_1 + 10) < param_2)) {
      puVar1 = (uint *)(param_1 + 4);
      if ((int)(param_2 << 0x18) < 0) {
        FUN_101334aa(puVar1,0x800,param_3,param_2 << 0x18,param_4);
      }
      else {
        *puVar1 = *puVar1 & 0xfffff7ff;
      }
      *(byte *)(param_1 + 10) = (byte)param_2 & 0x7f;
      if (*(char *)(param_1 + 2) == '\x02') {
        iVar2 = FUN_10132bee();
      }
      else {
        iVar2 = FUN_10135f48(param_1);
      }
      if (iVar2 != 0) {
        *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_1 + 9);
      }
    }
    else {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = -0x80;
  }
  return iVar2;
}

