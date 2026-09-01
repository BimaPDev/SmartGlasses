/* FUN_1011bb6c @ 0x1011bb6c */

void FUN_1011bb6c(int param_1,uint param_2,uint param_3,undefined4 param_4)

{
  code *pcVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x10);
  if (*(byte *)(piVar2 + 200) != param_2) {
    if ((piVar2[199] & 0xff000800U) != 0x800) {
      param_3 = (*(byte *)((int)piVar2 + 0x31d) & 0xf) >> 3;
      *(char *)((int)piVar2 + 799) =
           *(char *)((int)piVar2 + 799) +
           (char)((int)((uint)*(byte *)((int)piVar2 + 0x31d) << 0x1c) >> 0x1f);
      if (param_2 != 0) {
        return;
      }
    }
    pcVar1 = *(code **)(*(int *)(*piVar2 + 0x3c) + 0x1c);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(param_1,param_2,param_3,pcVar1,param_4);
    }
    *(char *)(piVar2 + 200) = (char)param_2;
  }
  return;
}

