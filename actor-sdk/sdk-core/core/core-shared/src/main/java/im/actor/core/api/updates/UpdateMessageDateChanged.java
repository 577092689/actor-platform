package im.actor.core.api.updates;
/*
 *  Generated by the Actor API Scheme generator.  DO NOT EDIT!
 */

import im.actor.runtime.bser.*;
import im.actor.runtime.collections.*;
import static im.actor.runtime.bser.Utils.*;
import im.actor.core.network.parser.*;
import org.jetbrains.annotations.Nullable;
import org.jetbrains.annotations.NotNull;
import com.google.j2objc.annotations.ObjectiveCName;
import java.io.IOException;
import java.util.List;
import java.util.ArrayList;
import im.actor.core.api.*;

public class UpdateMessageDateChanged extends Update {

    public static final int HEADER = 0xa3;
    public static UpdateMessageDateChanged fromBytes(byte[] data) throws IOException {
        return Bser.parse(new UpdateMessageDateChanged(), data);
    }

    private ApiPeer peer;
    private long rid;
    private long date;

    public UpdateMessageDateChanged(@NotNull ApiPeer peer, long rid, long date) {
        this.peer = peer;
        this.rid = rid;
        this.date = date;
    }

    public UpdateMessageDateChanged() {

    }

    @NotNull
    public ApiPeer getPeer() {
        return this.peer;
    }

    public long getRid() {
        return this.rid;
    }

    public long getDate() {
        return this.date;
    }

    @Override
    public void parse(BserValues values) throws IOException {
        this.peer = values.getObj(1, new ApiPeer());
        this.rid = values.getLong(2);
        this.date = values.getLong(3);
    }

    @Override
    public void serialize(BserWriter writer) throws IOException {
        if (this.peer == null) {
            throw new IOException();
        }
        writer.writeObject(1, this.peer);
        writer.writeLong(2, this.rid);
        writer.writeLong(3, this.date);
    }

    @Override
    public String toString() {
        String res = "update MessageDateChanged{";
        res += "peer=" + this.peer;
        res += ", rid=" + this.rid;
        res += ", date=" + this.date;
        res += "}";
        return res;
    }

    @Override
    public int getHeaderKey() {
        return HEADER;
    }
}
