/* FUN_100e55e0 @ 0x100e55e0 */

undefined1 FUN_100e55e0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  undefined2 local_44;
  undefined1 local_42;
  undefined2 local_30;
  undefined2 local_2e;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined2 *local_1c;
  
  FUN_10119dc2(DAT_100e568c);
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    if (param_2 != 0) {
      FUN_100e4fc0(0xffffffff,0xffffffff);
      if (((param_1 == *DAT_100e5690) || (param_1 == DAT_100e5690[7])) ||
         (piVar1 = (int *)FUN_100e4eac(), piVar1 == (int *)0x0)) {
        uVar3 = 0;
      }
      else {
        *(undefined1 *)((int)piVar1 + 10) = 1;
        *piVar1 = param_1;
        piVar1[1] = param_2;
        piVar1[6] = param_3;
        local_30 = 2;
        local_2e = FUN_1011ea10(param_2);
        local_2c = piVar1[1];
        uVar3 = 0;
        local_42 = 0;
        local_28 = DAT_100e5694;
        local_24 = DAT_100e5698;
        local_44 = 0x10a;
        local_20 = DAT_100e569c;
        local_1c = &local_44;
        FUN_100e057c(*piVar1,(char)piVar1[2],0xf,&local_30,3);
        iVar2 = FUN_100c41fc(param_1,DAT_100e56a0);
        if (iVar2 == 0) {
          uVar3 = *(undefined1 *)((int)piVar1 + 9);
        }
        else {
          FUN_10138a6a(piVar1);
        }
      }
      FUN_100e4fb4();
    }
  }
  return uVar3;
}

