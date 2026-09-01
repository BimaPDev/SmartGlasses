/* FUN_100647ac @ 0x100647ac */

int * FUN_100647ac(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  piVar1 = (int *)thunk_FUN_1009f30c(8,DAT_10064814,param_3,param_4,param_4);
  if (piVar1 == (int *)0x0) {
    FUN_100a5b78((DAT_1006481c - DAT_10064818) * 0x20 & 0xff00U | 0x110011,DAT_10064824,DAT_10064820
                 ,8);
  }
  else {
    iVar2 = FUN_10112e84(param_2);
    *piVar1 = iVar2;
    if (iVar2 == 0) {
      FUN_10119dc2(DAT_10064828,param_2);
      FUN_1012d1f4(piVar1);
      piVar1 = (int *)0x0;
    }
    else {
      if ((code *)**(undefined4 **)(iVar2 + 8) != (code *)0x0) {
        (*(code *)**(undefined4 **)(iVar2 + 8))();
      }
      pcVar3 = *(code **)(*(int *)(*piVar1 + 8) + 0xc);
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(*piVar1,param_1);
      }
      piVar1[1] = param_1;
    }
  }
  return piVar1;
}

