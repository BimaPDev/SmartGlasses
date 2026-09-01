/* FUN_1012359a @ 0x1012359a */

uint FUN_1012359a(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  int iVar3;
  char *local_64;
  undefined1 auStack_60 [80];
  
  uVar1 = FUN_101225c6(param_1,&local_64);
  if ((uVar1 == 0) &&
     (uVar1 = *(byte *)(param_1 + 0xc) & 0x40, (*(byte *)(param_1 + 0xc) & 0x40) != 0)) {
    if (*local_64 == '\x04') {
      uVar1 = FUN_10122ab6(param_1);
      if (uVar1 == 0) {
        iVar2 = thunk_FUN_1013cfe2(0x460);
        if (iVar2 == 0) {
          FUN_10122b7a(local_64,0x11);
          return 0x11;
        }
        *(int *)(local_64 + 0xc) = iVar2;
        *(int *)(local_64 + 0x10) = iVar2 + 0x200;
        uVar1 = FUN_10122ed8(auStack_60,param_1);
        if (uVar1 == 0) {
          *(byte *)(*(int *)(local_64 + 0x10) + 4) = *(byte *)(*(int *)(local_64 + 0x10) + 4) | 0x20
          ;
          *(byte *)(*(int *)(local_64 + 0x10) + 0x21) = *(byte *)((int)param_1 + 7) | 1;
          FUN_101222b6(*(int *)(local_64 + 0x10) + 0x34,param_1[2]);
          FUN_101222c6(*(int *)(local_64 + 0x10) + 0x38,extraout_r1,param_1[4],param_1[5]);
          FUN_101222c6(*(int *)(local_64 + 0x10) + 0x28,extraout_r1_00,param_1[4],param_1[5]);
          iVar3 = *(int *)(local_64 + 0x10);
          *(undefined1 *)(iVar3 + 0xe) = 0x21;
          *(undefined1 *)(iVar3 + 0xc) = 0;
          *(undefined1 *)(iVar3 + 0xd) = 0;
          *(undefined1 *)(iVar3 + 0xf) = 0x48;
          *(undefined1 *)(*(int *)(local_64 + 0x10) + 0x15) = 0;
          iVar3 = *(int *)(local_64 + 0x10);
          *(undefined1 *)(iVar3 + 0x10) = 0;
          *(undefined1 *)(iVar3 + 0x11) = 0;
          *(undefined1 *)(iVar3 + 0x12) = 0;
          *(undefined1 *)(iVar3 + 0x13) = 0;
          uVar1 = FUN_10122f62(auStack_60);
          if (uVar1 == 0) {
            uVar1 = FUN_10122ae4(local_64);
            *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0xbf;
          }
        }
        thunk_FUN_1013cfd4(iVar2);
      }
    }
    else {
      uVar1 = FUN_10122662(local_64,param_1[0x12]);
      if (uVar1 == 0) {
        iVar2 = param_1[0x13];
        *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x20;
        FUN_101225ae(*param_1,iVar2,param_1[2]);
        FUN_101222b6(iVar2 + 0x1c,param_1[4]);
        *(undefined1 *)(iVar2 + 0x18) = 0x21;
        *(undefined1 *)(iVar2 + 0x19) = 0x48;
        *(undefined1 *)(iVar2 + 0x16) = 0;
        *(undefined1 *)(iVar2 + 0x17) = 0;
        *(undefined1 *)(iVar2 + 0x12) = 0;
        *(undefined1 *)(iVar2 + 0x13) = 0;
        local_64[3] = '\x01';
        uVar1 = FUN_10122ae4();
        *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0xbf;
      }
    }
  }
  FUN_10122b7a(local_64,uVar1);
  return uVar1;
}

