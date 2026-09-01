/* FUN_10107594 @ 0x10107594 */

undefined4 FUN_10107594(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  short sVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  undefined1 auStack_24 [2];
  ushort local_22;
  
  if (param_4 << 0x1b < 0) {
    if (param_3 != 0) {
      puVar3 = (uint *)(param_5 + -4);
      puVar4 = puVar3 + param_3;
      do {
        if (*(char *)(param_1 + 0x124) == '\0') {
          if (*(short *)(param_1 + 0x174) == -1) {
            uVar2 = (int)*(short *)(param_1 + 0xdc) - (int)*(short *)(param_1 + 0xde);
            sVar1 = (short)uVar2;
          }
          else {
            uVar2 = (int)*(short *)(param_1 + 0x1ba) - (int)*(short *)(param_1 + 0x1bc);
            sVar1 = (short)uVar2;
          }
          if ((int)uVar2 < 0) {
            uVar2 = (uint)(ushort)-sVar1;
          }
          else {
            uVar2 = uVar2 & 0xffff;
          }
        }
        else {
          (**(code **)(*(int *)(param_1 + 0x21c) + 0x8c))(param_1,1,param_2,auStack_24,&local_22);
          uVar2 = (uint)local_22;
        }
        puVar3 = puVar3 + 1;
        *puVar3 = uVar2;
        param_2 = param_2 + 1;
      } while (puVar4 != puVar3);
    }
  }
  else if (param_3 != 0) {
    param_3 = param_3 + param_2;
    puVar3 = (uint *)(param_5 + -4);
    do {
      (**(code **)(*(int *)(param_1 + 0x21c) + 0x8c))(param_1,0,param_2,auStack_24,&local_22);
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = (uint)local_22;
    } while (param_3 != param_2);
  }
  return 0;
}

