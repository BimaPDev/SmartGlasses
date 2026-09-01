/* FUN_101304ac @ 0x101304ac */

void FUN_101304ac(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  code *pcVar2;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    pcVar2 = *(code **)(*(int *)(param_1 + 0x58) + 8);
    (*pcVar2)(*(int *)(param_1 + 0xc),1,0,pcVar2,param_4);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (*(int *)(param_1 + 0x74) != 0) {
    FUN_10064adc();
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  if (*(int *)(param_1 + 0x54) != 0) {
    FUN_1011dcae();
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  if (*(int *)(param_1 + 0x6c) != 0) {
    bVar1 = *(byte *)(param_1 + 99);
    if ((bVar1 & 4) == 0) {
      FUN_100a0a70();
      FUN_100a0b00(*(undefined4 *)(param_1 + 0x6c));
      *(uint *)(param_1 + 0x6c) = bVar1 & 4;
    }
  }
  return;
}

